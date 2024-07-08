/**
 * @file util_evt_mngr.h
 * @author  ()
 * @brief 
 * @version 0.1
 * @date 2024-06-17
 * 
 * 
 * 
 */

#ifndef __UTIL_EVT_MNGR__
#define __UTIL_EVT_MNGR__

#include <stdbool.h>
#include "util_state_data_mngr.h"

void g_evt_set(evt_id_t ag_evt_id);
evt_id_t g_evt_peek(void);
bool g_is_evt_occurred(void);

#endif /* __UTIL_EVT_MNGR__ */
