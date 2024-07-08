#include "yourjobs"

// ================================================================
// define
// ================================================================
static void s_reserve11_entry(void);
static void s_reserve11_proc(void);
static void s_reserve11_exit(void);

UTIL_STATE_OBJ_DEF(g_state_obj_reserve11, RESERVE11, s_reserve11_entry, s_reserve11_proc, s_reserve11_exit);

// ================================================================
// static
// ================================================================
static void s_reserve11_entry(void)
{

}

static void s_reserve11_proc(void)
{

}

static void s_reserve11_exit(void)
{

}

// ================================================================
// global
// ================================================================
void g_reserve11_init(void)
{
    g_state_regist(g_state_obj_reserve11);
}