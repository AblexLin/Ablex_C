//
//  main.c
//  我的通讯录
//
//  Created by 顾明轩 on 16/4/26.
//  Copyright © 2016年 顾明轩. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "linker.h"//不能使用<>因为<>查找的是系统的文件目录,""查找的是本地的目录

int main(int argc, const char * argv[]) {
    
    printf("欢迎来到我的通讯录\n\n");
    char menu_number[2];            //定义菜单选项的数组
    menu_number[1]='\0';            //菜单选项只有一个字符强制定义
    
    init();//初始化函数，读取本地文件，看看是否已有联系人了
    
    while (1) {
        printf("请输入您需要使用的功能编号:");
        scanf("%s",menu_number);
        
        if (strcmp(menu_number, "1")==0) {
            printf("1.开始添加联系人\n");
            add_linker();
            continue;
        }
        else if (strcmp(menu_number, "2")==0) {
            printf("2.开始删除联系人\n");
            del_linker();
            break;
        }
        else if (strcmp(menu_number, "3")==0) {
            printf("3.开始修改联系人\n");
            modify_linker();
            break;
        }
        else if (strcmp(menu_number, "4")==0) {
            printf("4.开始查找联系人\n");
            find_linker();
            break;
        }
        else if (strcmp(menu_number, "5")==0) {
            show_linker();
            continue;
        }
        else if (strcmp(menu_number, "6")==0) {
            printf("6.开始退出通讯录\n");
            exit(0);                //退出程序
        }
        else{
            printf("错误的菜单选择，请重新选择!\n");
            show_menu();
            break;
        }
    
    }
    return 0;
}


