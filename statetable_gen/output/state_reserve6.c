#include "yourjobs"

// ================================================================
// define
// ================================================================
static void s_reserve6_entry(void);
static void s_reserve6_proc(void);
static void s_reserve6_exit(void);

UTIL_STATE_OBJ_DEF(g_state_obj_reserve6, RESERVE6, s_reserve6_entry, s_reserve6_proc, s_reserve6_exit);

// ================================================================
// static
// ================================================================
static void s_reserve6_entry(void)
{

}

static void s_reserve6_proc(void)
{

}

static void s_reserve6_exit(void)
{

}

// ================================================================
// global
// ================================================================
void g_reserve6_init(void)
{
    g_state_regist(g_state_obj_reserve6);
}