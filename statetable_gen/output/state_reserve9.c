#include "yourjobs"

// ================================================================
// define
// ================================================================
static void s_reserve9_entry(void);
static void s_reserve9_proc(void);
static void s_reserve9_exit(void);

UTIL_STATE_OBJ_DEF(g_state_obj_reserve9, RESERVE9, s_reserve9_entry, s_reserve9_proc, s_reserve9_exit);

// ================================================================
// static
// ================================================================
static void s_reserve9_entry(void)
{

}

static void s_reserve9_proc(void)
{

}

static void s_reserve9_exit(void)
{

}

// ================================================================
// global
// ================================================================
void g_reserve9_init(void)
{
    g_state_regist(g_state_obj_reserve9);
}