import os
import openpyxl
import util_excl_func
import util_file_func
import statetable_gen_conf

# サーチ回数
max_srch_time = 128

# main
# file read
wk_file = openpyxl.load_workbook("state_table.xlsx")
wk_sheet = wk_file.worksheets[0]                        # state table sheetインスタンス作成

evt_table = util_excl_func.cell_val_get(wk_sheet, statetable_gen_conf.evt0_cell, "row")
state_table = util_excl_func.cell_val_get(wk_sheet, statetable_gen_conf.state0_cell, "clm")

len_clm = len(state_table)

# read state table
eva_statetable = []
i_cnt = 0
tmp_cell = statetable_gen_conf.table0_cell
while i_cnt < len_clm:
    print(util_excl_func.cell_val_get(wk_sheet, tmp_cell, "row"))
    eva_statetable.append(util_excl_func.cell_val_get(wk_sheet, tmp_cell, "row"))

    tmp_cell[0] += 1
    i_cnt += 1

# ファイル生成
# state table 作成
eva_statetable = util_excl_func.na_replace(eva_statetable)
eva_statetable = util_excl_func.comma_suffix(eva_statetable)
util_file_func.s_dir_make(statetable_gen_conf.output_dir)
f_statetable = open(statetable_gen_conf.output_dir + statetable_gen_conf.CONST_OUTPUT_STATETABLE_NAME, 'w')

for i_clm in range(len(eva_statetable)):
    f_statetable.write('{    ' + ''.join(eva_statetable[i_clm]) + '},' + '\n')

f_statetable.close()

# evt enum 作成
f_evntid = open(statetable_gen_conf.output_dir + statetable_gen_conf.CONST_OUTPUT_EVTNTID_NAME, 'w')

# fixme
for i_clm in range(len(evt_table)):
    if (i_clm == 0):
        f_evntid.write('E_EVT_ID_' + evt_table[i_clm].upper() + ' = 0x00' + ',' + '\n')
    else:
        f_evntid.write('E_EVT_ID_' + evt_table[i_clm].upper() + ',' + '\n')

f_evntid.close()

# state id 作成
f_stateid = open(statetable_gen_conf.output_dir + statetable_gen_conf.CONST_OUTPUT_STATEID_NAME, 'w')

# fixme
for i_clm in range(len(state_table)):
    if (i_clm == 0):
        f_stateid.write('E_STATE_ID_' + state_table[i_clm].upper() + ' = 0x00' + ',' + '\n')
    else:
        f_stateid.write('E_STATE_ID_' + state_table[i_clm].upper() + ',' + '\n')

f_stateid.close()

# uninit
wk_file.close()
