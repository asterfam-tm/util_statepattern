#include "yourjobs"

// ================================================================
// define
// ================================================================
static void s_setting_entry(void);
static void s_setting_proc(void);
static void s_setting_exit(void);

UTIL_STATE_OBJ_DEF(g_state_obj_setting, SETTING, s_setting_entry, s_setting_proc, s_setting_exit);

// ================================================================
// static
// ================================================================
static void s_setting_entry(void)
{

}

static void s_setting_proc(void)
{

}

static void s_setting_exit(void)
{

}

// ================================================================
// global
// ================================================================
void g_setting_init(void)
{
    g_state_regist(g_state_obj_setting);
}