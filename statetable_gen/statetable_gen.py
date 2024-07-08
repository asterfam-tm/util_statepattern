import os
import openpyxl
import util_excl_func
import util_file_func
import eva_statecode
import statetable_gen_conf

def state_mat_format(ag_table):
    ret_table = ag_table

    ret_table = util_excl_func.na_replace(ret_table)
    ret_table = util_excl_func.comma_suffix(ret_table)
    ret_table = util_excl_func.space_suffix(ret_table, statetable_gen_conf.CONST_STATEID_LEN)

    return ret_table

# main 
wk_file = openpyxl.load_workbook("state_table.xlsx")
wk_sheet = wk_file.worksheets[0]                        # state table sheetインスタンス作成

evt_vct = util_excl_func.cell_val_get(wk_sheet, \
                                        statetable_gen_conf.evt0_cell, \
                                        'row')
evt_vct = util_excl_func.str_prefix(util_excl_func.str_upper(evt_vct), statetable_gen_conf.CONST_EVT_PREFIX)

state_vct = util_excl_func.cell_val_get(wk_sheet, \
                                        statetable_gen_conf.state0_cell, \
                                        'clm')

state_mat = util_excl_func.matrix_read(wk_sheet, [5, 5])
state_mat = state_mat_format(state_mat)



print(state_mat)

# state code make
for i_cnt in range(len(state_vct)):
    tmp_state = eva_statecode.statecode()
    tmp_state.state_code_assign(state_vct[i_cnt], state_vct[i_cnt].upper())
    tmp_state.c_file_make(statetable_gen_conf.output_dir, 'state_' + state_vct[i_cnt])
    
print('completed...')

