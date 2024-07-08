#include "yourjobs"

// ================================================================
// define
// ================================================================
static void s_faital_error_entry(void);
static void s_faital_error_proc(void);
static void s_faital_error_exit(void);

UTIL_STATE_OBJ_DEF(g_state_obj_faital_error, FAITAL_ERROR, s_faital_error_entry, s_faital_error_proc, s_faital_error_exit);

// ================================================================
// static
// ================================================================
static void s_faital_error_entry(void)
{

}

static void s_faital_error_proc(void)
{

}

static void s_faital_error_exit(void)
{

}

// ================================================================
// global
// ================================================================
void g_faital_error_init(void)
{
    g_state_regist(g_state_obj_faital_error);
}