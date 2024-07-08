/**
 * @file util_state_ctrl.h
 * @author  (--)
 * @brief 
 * @version 0.1
 * @date 2024-06-12
 * 
 * 
 */

#ifndef __UTIL_STATE_CTRL__
#define __UTIL_STATE_CTRL__

#include <stdint.h>
#include <stdbool.h>
#include "util_state_defs.h"

void g_state_init(state_obj_t at_entry_state);
bool g_is_state_trans(void);
void g_state_trans(void);
void g_state_ctrl();

#endif /* UTIL_STATE_CTRL */
