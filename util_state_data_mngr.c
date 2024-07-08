/**
 * @file util_state_data_mngr.c
 * @author  (--)
 * @brief 
 * @version 0.1
 * @date 2024-06-12
 * 
 * 
 */

#include <stddef.h>
#include "util_state_data_mngr.h"

state_obj_t* g_state_obj_ary[MAX_STATE_ID] = {0};

state_table_t g_evt_state_table =
{
    .crnt_evt_id = E_EVT_ID_NONE,
    .crnt_state_id = E_STATE_ID_NA, 
    .state_table =
    {
        #include "state_table.inc"
    },
};

void g_state_obj_regist(state_obj_t* ag_p_state_obj)
{
    if ((ag_p_state_obj->id >= MAX_STATE_ID) || (ag_p_state_obj == NULL)) return;
    g_state_obj_ary[ag_p_state_obj->id] = ag_p_state_obj;
}

state_obj_t* g_p_state_obj_get(state_id_t ag_state_id)
{
    if (ag_state_id >= MAX_STATE_ID) return NULL;
    return g_state_obj_ary[ag_state_id];
}
