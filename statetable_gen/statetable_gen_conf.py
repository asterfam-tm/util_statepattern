import os

# サーチ開始セル
evt0_cell   = [4, 5]    
state0_cell = [5, 4]    
table0_cell = [5, 5]    # 状態遷移テーブルの左上のセル

CONST_NA_STATE_LABEL            = 'E_STATE_ID_NA'
CONST_STATE_PREFIX              = 'E_STATE_ID_'
CONST_STATE_SUFFIX              = ''

CONST_EVT_PREFIX                = 'E_EVT_ID_'
CONST_EVT_SUFFIX                = ''

CONST_OUTPUT_DIR                = 'output'
output_dir                      = os.path.dirname(__file__) + '\\' + CONST_OUTPUT_DIR + '\\'

CONST_OUTPUT_STATETABLE_NAME    = 'state_table.inc'
CONST_OUTPUT_EVTNTID_NAME       = 'evtnt_id.inc'
CONST_OUTPUT_STATEID_NAME       = 'state_id.inc'

CONST_STATEID_LEN       = 26
