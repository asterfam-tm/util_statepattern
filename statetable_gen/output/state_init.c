#include "yourjobs"

// ================================================================
// define
// ================================================================
static void s_init_entry(void);
static void s_init_proc(void);
static void s_init_exit(void);

UTIL_STATE_OBJ_DEF(g_state_obj_init, INIT, s_init_entry, s_init_proc, s_init_exit);

// ================================================================
// static
// ================================================================
static void s_init_entry(void)
{

}

static void s_init_proc(void)
{

}

static void s_init_exit(void)
{

}

// ================================================================
// global
// ================================================================
void g_init_init(void)
{
    g_state_regist(g_state_obj_init);
}