def s_dir_make(at_dir):
    if os.path.isdir(at_dir):
        print("outputフォルダが存在します。")
    else:
        print("outputフォルダが存在しません。新規に作成します。")
        os.makedirs(at_dir)
    return

def str_write(ag_path, ag_file, ag_write_str):
    ret_file_obj = open(ag_path + ag_file, 'w')

    for i_clm in range(len(ag_write_str)):
        ret_file_obj.write(ag_write_str[i_clm])

    ret_file_obj.close()
    return
