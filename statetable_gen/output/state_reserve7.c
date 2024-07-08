#include "yourjobs"

// ================================================================
// define
// ================================================================
static void s_reserve7_entry(void);
static void s_reserve7_proc(void);
static void s_reserve7_exit(void);

UTIL_STATE_OBJ_DEF(g_state_obj_reserve7, RESERVE7, s_reserve7_entry, s_reserve7_proc, s_reserve7_exit);

// ================================================================
// static
// ================================================================
static void s_reserve7_entry(void)
{

}

static void s_reserve7_proc(void)
{

}

static void s_reserve7_exit(void)
{

}

// ================================================================
// global
// ================================================================
void g_reserve7_init(void)
{
    g_state_regist(g_state_obj_reserve7);
}