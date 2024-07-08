#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdint.h>

#include "util_state_defs.h"
#include "util_state_data_mngr.h"
#include "util_evt_mngr.h"
#include "util_state_ctrl.h"

static void s_state_entry_a(void)
{
    printf("state entry a\n");
}

static void s_state_proc_a(void)
{
    printf("state proc a\n");
}

static void s_state_exit_a(void)
{
    printf("state exit a\n");
}

UTIL_STATE_OBJ_DEF(g_state_obj_a, E_STATE_ID_ENTRY, s_state_entry_a, s_state_proc_a, s_state_exit_a);

static void s_state_entry_b(void)
{
    printf("state entry b\n");
}

static void s_state_proc_b(void)
{
    printf("state proc b\n");
}


static void s_state_exit_b(void)
{
    printf("state exit b\n");
}

UTIL_STATE_OBJ_DEF(g_state_obj_b, E_STATE_ID_PROC, s_state_entry_b, s_state_proc_b, s_state_exit_b);

static void s_state_entry_c(void)
{
    printf("state entry c\n");
}

static void s_state_proc_c(void)
{
    printf("state proc c\n");
}


static void s_state_exit_c(void)
{
    printf("state exit c\n");
}

UTIL_STATE_OBJ_DEF(g_state_obj_c, E_STATE_ID_INIT, s_state_entry_c, s_state_proc_c, s_state_exit_c);


int main()
{
    #if 1
    g_state_obj_regist(&g_state_obj_a);
    g_state_obj_regist(&g_state_obj_b);
    g_state_obj_regist(&g_state_obj_c);
    #endif
    g_state_init(g_state_obj_a);

    // for debug
    clock_t start_time, current_time;
    start_time = clock();

    for (;;)
    {
        uint8_t at_char = 0x00;
        g_state_ctrl(&g_state_obj_a);
        
        current_time = clock();
        if((current_time - start_time) >= 1)
        {
            #if 1
            at_char = getchar();

            if      (at_char == '0') g_evt_set(E_EVT_ID_TEMP_0);
            else if (at_char == '1') g_evt_set(E_EVT_ID_TEMP_1);
            else if (at_char == '2') g_evt_set(E_EVT_ID_TEMP_2);
            #endif
        }
    }
    
    return 0;
}


