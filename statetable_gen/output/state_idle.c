#include "yourjobs"

// ================================================================
// define
// ================================================================
static void s_idle_entry(void);
static void s_idle_proc(void);
static void s_idle_exit(void);

UTIL_STATE_OBJ_DEF(g_state_obj_idle, IDLE, s_idle_entry, s_idle_proc, s_idle_exit);

// ================================================================
// static
// ================================================================
static void s_idle_entry(void)
{

}

static void s_idle_proc(void)
{

}

static void s_idle_exit(void)
{

}

// ================================================================
// global
// ================================================================
void g_idle_init(void)
{
    g_state_regist(g_state_obj_idle);
}