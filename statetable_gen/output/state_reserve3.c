#include "yourjobs"

// ================================================================
// define
// ================================================================
static void s_reserve3_entry(void);
static void s_reserve3_proc(void);
static void s_reserve3_exit(void);

UTIL_STATE_OBJ_DEF(g_state_obj_reserve3, RESERVE3, s_reserve3_entry, s_reserve3_proc, s_reserve3_exit);

// ================================================================
// static
// ================================================================
static void s_reserve3_entry(void)
{

}

static void s_reserve3_proc(void)
{

}

static void s_reserve3_exit(void)
{

}

// ================================================================
// global
// ================================================================
void g_reserve3_init(void)
{
    g_state_regist(g_state_obj_reserve3);
}