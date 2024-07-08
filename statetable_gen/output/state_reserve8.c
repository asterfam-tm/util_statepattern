#include "yourjobs"

// ================================================================
// define
// ================================================================
static void s_reserve8_entry(void);
static void s_reserve8_proc(void);
static void s_reserve8_exit(void);

UTIL_STATE_OBJ_DEF(g_state_obj_reserve8, RESERVE8, s_reserve8_entry, s_reserve8_proc, s_reserve8_exit);

// ================================================================
// static
// ================================================================
static void s_reserve8_entry(void)
{

}

static void s_reserve8_proc(void)
{

}

static void s_reserve8_exit(void)
{

}

// ================================================================
// global
// ================================================================
void g_reserve8_init(void)
{
    g_state_regist(g_state_obj_reserve8);
}