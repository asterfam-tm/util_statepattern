import statetable_gen_conf

class statecode:
    
    def __init__(self):
        self.state_c_code_temp = '''
#include "yourjobs"

// ================================================================
// define
// ================================================================
static void s_{state_name}_entry(void);
static void s_{state_name}_proc(void);
static void s_{state_name}_exit(void);

UTIL_STATE_OBJ_DEF(g_state_obj_{state_name}, {state_id}, s_{state_name}_entry, s_{state_name}_proc, s_{state_name}_exit);

// ================================================================
// static
// ================================================================
static void s_{state_name}_entry(void)
{{

}}

static void s_{state_name}_proc(void)
{{

}}

static void s_{state_name}_exit(void)
{{

}}

// ================================================================
// global
// ================================================================
void g_{state_name}_init(void)
{{
    g_state_regist(g_state_obj_{state_name});
}}
        '''

        self.state_h_code_temp = '''
// ================================================================
// global
// ================================================================
void g_{state_name}_init(void);
        '''

        return

    def state_code_assign(self, ag_state_name, ag_state_id):
        self.state_c_code_temp = self.state_c_code_temp.format(state_name = ag_state_name, state_id = ag_state_id)
        self.state_c_code_temp = self.state_c_code_temp.strip()
        print(self.state_c_code_temp)
        return

    def c_file_make(self, ag_path, ag_c_file_name):
        at_file_obj = open(ag_path + ag_c_file_name + '.c', 'w')
        at_file_obj.write(self.state_c_code_temp)
        return

# main
# s_statecode = statecode()
# s_statecode.state_code_assign('test_state', 'test_state_id')
# s_statecode.c_file_make(statetable_gen_conf.output_dir, statetable_gen_conf.output_dir + 'test_codemake.c')

