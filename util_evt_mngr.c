/**
 * @file util_evt_mngr.c
 * @author  ()
 * @brief 
 * @version 0.1
 * @date 2024-06-17
 * 
 * 
 * 
 */

#include "util_evt_mngr.h"

// ================================================================
// define
// ================================================================
extern state_table_t g_evt_state_table;

// ================================================================
// static
// ================================================================


// ================================================================
// global
// ================================================================
void g_evt_set(evt_id_t ag_evt_id)
{
    g_evt_state_table.crnt_evt_id = ag_evt_id;
}

evt_id_t g_evt_peek(void)
{
    return g_evt_state_table.crnt_evt_id;
}

bool g_is_evt_occurred(void)
{
    return (bool) (g_evt_state_table.crnt_evt_id != E_EVT_ID_NONE);
}

