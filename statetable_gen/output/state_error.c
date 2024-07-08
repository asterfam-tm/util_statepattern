#include "yourjobs"

// ================================================================
// define
// ================================================================
static void s_error_entry(void);
static void s_error_proc(void);
static void s_error_exit(void);

UTIL_STATE_OBJ_DEF(g_state_obj_error, ERROR, s_error_entry, s_error_proc, s_error_exit);

// ================================================================
// static
// ================================================================
static void s_error_entry(void)
{

}

static void s_error_proc(void)
{

}

static void s_error_exit(void)
{

}

// ================================================================
// global
// ================================================================
void g_error_init(void)
{
    g_state_regist(g_state_obj_error);
}