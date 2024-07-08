// ================================================================
        // define
        // ================================================================
        static void s_test_state_entry(void);
        static void s_test_state_proc(void);
        static void s_test_state_exit(void);

        UTIL_STATE_OBJ_DEF(g_state_obj_test_state, test_state_id, s_test_state_entry, s_test_state_proc, s_test_state_exit);

        // ================================================================
        // static
        // ================================================================
        static void s_test_state_entry(void)
        {

        }

        static void s_test_state_proc(void)
        {

        }

        static void s_test_state_exit(void)
        {

        }

        // ================================================================
        // global
        // ================================================================
        void g_test_state_init(void)
        {
            g_state_regist(g_state_obj_test_state);
        }