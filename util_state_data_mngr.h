/**
 * @file util_state_data_mngr.h
 * @author  (--)
 * @brief 
 * @version 0.1
 * @date 2024-06-12
 * 
 * 
 */

#ifndef __UTIL_STATE_DATA_MNGR__
#define __UTIL_STATE_DATA_MNGR__

#include "util_state_defs.h"

extern state_table_t g_evt_state_table;

void g_state_obj_regist(state_obj_t* ag_p_state_obj);
state_obj_t* g_p_state_obj_get(state_id_t ag_state_id);

#endif /* UTIL_STATE_DATA_MNGR */
