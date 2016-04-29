//
//  linker.h
//  我的通讯录
//
//  Created by 顾明轩 on 16/4/27.
//  Copyright © 2016年 顾明轩. All rights reserved.
//

#ifndef linker_h
#define linker_h

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINKER 10

void write_linker(int start, int own_linker_count);//写入联系人
void read_linker(int start, int own_linker_count);//读取联系人

void show_menu();
/*显示菜单的函数*/

void init();
/*初始化函数:读取本地"联系人.data文件"
1.如果文件不存在，则提示用户添加联系人
2.如果文件存在，则显示现有联系人*/

void add_linker();//添加联系人

void del_linker();//删除联系人

void modify_linker();//修改联系人

void find_linker();//查找联系人

void show_linker();//显示联系人

#endif /* linker_h */
