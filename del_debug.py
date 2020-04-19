# -*- coding:utf-8 -*-
import os
import shutil


def suffix(file_, suffix_list_):
    """if the file ext include in suffixList"""
    array = map(file_.endswith, suffix_list_)
    if True in array:
        return True
    else:
        return False

def delete_file(file_, suffix_list_=None):
    """delete file"""
    ret = False
    if os.path.exists(file_):
        if os.path.isfile(file_):
            if suffix_list_ is None:
                os.remove(file_)
                ret = True
            else:
                if suffix(file_, suffix_list_):
                    os.remove(file_)
                    ret = True
    return ret

def clear_debug_files(root_path_):
    """
    Clear the debug files from root_path_ path
    :param project_path_: The root_path_ path
    :return: No return
    """

    ext_file = [
        ".sdf",
        ".VC.db",
        ".idb",
        ".exp",
        ".aps",
        ".pdb",
        ".obj",
        ".res",
        ".log",
        ".tlog",
        ".manifest",
        ".lastbuildstate",
        ".pch",
        ".ipch",
        ".cache",
        ".ilk",
        ".ipdb",
        ".iobj",
        ".aps",
    ]

    ext_dir = [
        "ipch",

    ]
    if os.path.exists(root_path_):
        for root, dirs, files in os.walk(root_path_, topdown=True):
            for file in files:
                filename = os.path.join(root, file)
                delete_file(filename, ext_file)
                
            for dir in dirs:
                dir_path = os.path.join(root, dir)
                if dir.lower() in ext_dir:
                    print(dir_path);
                    shutil.rmtree(dir_path)

    for a_dir in ext_dir:
        path = os.path.join(root_path_, a_dir)
        if os.path.exists(path):
            shutil.rmtree(path)

if __name__ == "__main__":
    path = os.getcwd()
    clear_debug_files(path)