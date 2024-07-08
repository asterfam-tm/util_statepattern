#include "yourjobs"

// ================================================================
// define
// ================================================================
static void s_reserve5_entry(void);
static void s_reserve5_proc(void);
static void s_reserve5_exit(void);

UTIL_STATE_OBJ_DEF(g_state_obj_reserve5, RESERVE5, s_reserve5_entry, s_reserve5_proc, s_reserve5_exit);

// ================================================================
// static
// ================================================================
static void s_reserve5_entry(void)
{

}

static void s_reserve5_proc(void)
{

}

static void s_reserve5_exit(void)
{

}

// ================================================================
// global
// ================================================================
void g_reserve5_init(void)
{
    g_state_regist(g_state_obj_reserve5);
}