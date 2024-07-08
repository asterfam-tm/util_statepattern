import statetable_gen_conf

def cell_val_get(ag_sheet_obj, ag_crnt_cell, ag_dim):
    at_len = 0
    ret_val = []

    while range(32768):
        if ag_dim == "row":
            if ag_sheet_obj.cell(ag_crnt_cell[0], ag_crnt_cell[1] + at_len).value == None:
                break

            ret_val.append(ag_sheet_obj.cell(ag_crnt_cell[0], ag_crnt_cell[1] + at_len).value)
            at_len += 1

        elif ag_dim == "clm":
            if ag_sheet_obj.cell(ag_crnt_cell[0] + at_len, ag_crnt_cell[1]).value == None:
                break
            
            ret_val.append(ag_sheet_obj.cell(ag_crnt_cell[0] + at_len, ag_crnt_cell[1]).value)
            at_len += 1
            
        else:
            print("ag_dim is invalid value...")
    
    return ret_val

def matrix_read(ag_sheet_obj, ag_crnt_cell):
    ret_val = []
    tmp_dummy = cell_val_get(ag_sheet_obj, ag_crnt_cell, "clm")
    
    for i_read in range(len(tmp_dummy)):
        ret_val.append(cell_val_get(ag_sheet_obj, ag_crnt_cell, "row"))
        ag_crnt_cell[0] += 1

    return ret_val

def na_replace(at_table):
    ret_table = at_table

    for i_clm in range(len(ret_table)):
        for i_row in range(len(ret_table[0])):
            if (ret_table[i_clm][i_row] != '---'):
                ret_table[i_clm][i_row] =   statetable_gen_conf.CONST_STATE_PREFIX + \
                                            at_table[i_clm][i_row].upper() + \
                                            statetable_gen_conf.CONST_STATE_SUFFIX
            else:
                ret_table[i_clm][i_row] = statetable_gen_conf.CONST_NA_STATE_LABEL
    return ret_table

def str_upper(at_table):
    ret_table = at_table

    for i_clm in range(len(ret_table)):
            ret_table[i_clm] = ret_table[i_clm].upper()

    return ret_table

def str_mat_upper(at_table):
    ret_table = at_table

    for i_clm in range(len(ret_table)):
        for i_row in range(len(ret_table[0])):
            ret_table[i_clm][i_row] = ret_table[i_clm][i_row].upper()

    return ret_table

def comma_suffix(at_table):
    ret_table = at_table

    for i_clm in range(len(ret_table)):
        for i_row in range(len(ret_table[0])):
            ret_table[i_clm][i_row] = at_table[i_clm][i_row] + ','
    
    return ret_table

def space_suffix(at_table, ag_len_padding):
    ret_table = at_table

    for i_clm in range(len(ret_table)):
        for i_row in range(len(ret_table[0])):
            ret_table[i_clm][i_row] = ret_table[i_clm][i_row].ljust(ag_len_padding)
    
    return ret_table

def str_suffix(at_table, ag_str):
    ret_table = at_table

    for i_clm in range(len(ret_table)):
        for i_row in range(len(ret_table[0])):
            ret_table[i_clm][i_row] = ret_table[i_clm][i_row] + ag_str
    
    return ret_table

def str_prefix(at_table, ag_str):
    ret_table = at_table

    for i_clm in range(len(ret_table)):
        for i_row in range(len(ret_table[0])):
            ret_table[i_clm][i_row] = ag_str + ret_table[i_clm][i_row]

    return ret_table

