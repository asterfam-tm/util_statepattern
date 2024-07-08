/**
 * @file util_state_defs.h
 * @author  (--)
 * @brief 
 * @version 0.1
 * @date 2024-06-12
 * 
 * 
 */

#ifndef __UTIL_STATE_DEFS__
#define __UTIL_STATE_DEFS__

#define MAX_STATE_ID 8
#define MAX_EVT_ID 8

#define UTIL_STATE_OBJ_DEF(var_name, obj_id, p_func_entry, p_func_proc, p_func_exit) const state_obj_t var_name = {     \
    .id = obj_id,                                                                                                       \
    .state_crnt = E_STATE_CTRL_ENTRY,                                                                                   \
                                                                                                                        \
    .func_entry = p_func_entry,                                                                                         \
    .func_proc  = p_func_proc,                                                                                          \
    .func_exit  = p_func_exit,                                                                                          \
}                                                                                                                       \

typedef enum
{
    E_STATE_CTRL_ENTRY = 0x00,
    E_STATE_CTRL_PROC,
    E_STATE_CTRL_EXIT,
}state_ctrl_t;

typedef enum
{
    E_STATE_ID_NA = 0xFF,
    #include "state_id.inc"
}state_id_t;

typedef enum
{
    E_EVT_ID_NONE = 0xFF,
    #include "evt_id.inc"
}evt_id_t;

typedef struct
{
    evt_id_t crnt_evt_id;
    state_id_t crnt_state_id;
    const state_id_t state_table[MAX_STATE_ID][MAX_EVT_ID];
}state_table_t;

typedef struct
{
    state_id_t id;
    state_ctrl_t state_crnt;

    void (*func_entry)(void);
    void (*func_proc)(void);
    void (*func_exit)(void);
}state_obj_t;

#endif /* UTIL_STATE_DEFS */
