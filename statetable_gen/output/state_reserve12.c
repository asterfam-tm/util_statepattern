#include "yourjobs"

// ================================================================
// define
// ================================================================
static void s_reserve12_entry(void);
static void s_reserve12_proc(void);
static void s_reserve12_exit(void);

UTIL_STATE_OBJ_DEF(g_state_obj_reserve12, RESERVE12, s_reserve12_entry, s_reserve12_proc, s_reserve12_exit);

// ================================================================
// static
// ================================================================
static void s_reserve12_entry(void)
{

}

static void s_reserve12_proc(void)
{

}

static void s_reserve12_exit(void)
{

}

// ================================================================
// global
// ================================================================
void g_reserve12_init(void)
{
    g_state_regist(g_state_obj_reserve12);
}