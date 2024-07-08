#include "yourjobs"

// ================================================================
// define
// ================================================================
static void s_reserve10_entry(void);
static void s_reserve10_proc(void);
static void s_reserve10_exit(void);

UTIL_STATE_OBJ_DEF(g_state_obj_reserve10, RESERVE10, s_reserve10_entry, s_reserve10_proc, s_reserve10_exit);

// ================================================================
// static
// ================================================================
static void s_reserve10_entry(void)
{

}

static void s_reserve10_proc(void)
{

}

static void s_reserve10_exit(void)
{

}

// ================================================================
// global
// ================================================================
void g_reserve10_init(void)
{
    g_state_regist(g_state_obj_reserve10);
}