#include "yourjobs"

// ================================================================
// define
// ================================================================
static void s_meas_entry(void);
static void s_meas_proc(void);
static void s_meas_exit(void);

UTIL_STATE_OBJ_DEF(g_state_obj_meas, MEAS, s_meas_entry, s_meas_proc, s_meas_exit);

// ================================================================
// static
// ================================================================
static void s_meas_entry(void)
{

}

static void s_meas_proc(void)
{

}

static void s_meas_exit(void)
{

}

// ================================================================
// global
// ================================================================
void g_meas_init(void)
{
    g_state_regist(g_state_obj_meas);
}