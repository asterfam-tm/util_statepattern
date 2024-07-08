/**
 * @file util_state_ctrl.c
 * @author  (--)
 * @brief
 * @version 0.1
 * @date 2024-06-12
 *
 *
 */
#include <stddef.h>
#include "util_state_data_mngr.h"
#include "util_evt_mngr.h"

#include "util_state_ctrl.h"

state_obj_t g_crnt_state_obj =
{
    .id = E_STATE_ID_NA,
    .state_crnt = E_STATE_CTRL_ENTRY,

    .func_entry = NULL,
    .func_proc  = NULL,
    .func_exit  = NULL,
};

void g_state_init(state_obj_t at_entry_state)
{
    // table init
    g_evt_state_table.crnt_evt_id   = E_EVT_ID_NONE;
    g_evt_state_table.crnt_state_id = (evt_id_t) 0x00;

    // crnt state init
    g_crnt_state_obj = at_entry_state;
}

void g_state_trans(void)
{
    if (g_evt_state_table.state_table[g_evt_state_table.crnt_state_id][g_evt_state_table.crnt_evt_id] == E_STATE_ID_NA) return;

    g_evt_state_table.crnt_state_id = g_evt_state_table.state_table[g_evt_state_table.crnt_state_id][g_evt_state_table.crnt_evt_id];
    g_evt_state_table.crnt_evt_id   = E_EVT_ID_NONE; // TODO: queue

    g_crnt_state_obj = *g_p_state_obj_get(g_evt_state_table.crnt_state_id);
}


void g_state_ctrl()
{
    switch (g_crnt_state_obj.state_crnt)
    {
    case E_STATE_CTRL_ENTRY:
        if (g_crnt_state_obj.func_entry != NULL) g_crnt_state_obj.func_entry();
        g_crnt_state_obj.state_crnt = E_STATE_CTRL_PROC;
        break;

    case E_STATE_CTRL_PROC:
        if (g_crnt_state_obj.func_proc != NULL) g_crnt_state_obj.func_proc();
        if (g_is_evt_occurred()) g_crnt_state_obj.state_crnt = E_STATE_CTRL_EXIT;
        break;

    case E_STATE_CTRL_EXIT:
        if (g_crnt_state_obj.func_exit != NULL) g_crnt_state_obj.func_exit();
        g_state_trans();
        g_crnt_state_obj.state_crnt = E_STATE_CTRL_ENTRY;
        break;

    default:
        // FIXME:
        g_crnt_state_obj.state_crnt = E_STATE_CTRL_ENTRY;
        break;
    }
}
