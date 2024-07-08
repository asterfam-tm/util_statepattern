#include "yourjobs"

// ================================================================
// define
// ================================================================
static void s_reserve4_entry(void);
static void s_reserve4_proc(void);
static void s_reserve4_exit(void);

UTIL_STATE_OBJ_DEF(g_state_obj_reserve4, RESERVE4, s_reserve4_entry, s_reserve4_proc, s_reserve4_exit);

// ================================================================
// static
// ================================================================
static void s_reserve4_entry(void)
{

}

static void s_reserve4_proc(void)
{

}

static void s_reserve4_exit(void)
{

}

// ================================================================
// global
// ================================================================
void g_reserve4_init(void)
{
    g_state_regist(g_state_obj_reserve4);
}