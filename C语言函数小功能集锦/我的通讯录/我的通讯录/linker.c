//
//  linker.c
//  我的通讯录
//
//  Created by 顾明轩 on 16/4/27.
//  Copyright © 2016年 顾明轩. All rights reserved.
//

#include "linker.h"

typedef struct Linker{
    char name[20];  //定义联系人的名称数组
    char tel[12];   //定义联系人的电话数组
}Linker;

Linker person[MAX_LINKER]={};
int own_linker_count=0;
FILE *linker_file =NULL;

void show_menu(){
    printf("1.添加联系人\n");
    printf("2.删除联系人\n");
    printf("3.修改联系人\n");
    printf("4.查找联系人\n");
    printf("5.显示联系人\n");
    printf("6.退出联系人\n");
}

void init(){

    linker_file=fopen("联系人.data", "rb");//读取二进制文件可以使用wb,使用w也可以

//    fseek(linker_file, 0L, SEEK_END);都可以，两种方式
//    printf("显示:%ld\n",ftell(linker_file));//读取文件大小
    
    if (linker_file==NULL) {
        printf("暂无联系人,请添加联系人\n");
    }
    else{
        fseek(linker_file, 0, SEEK_END);
        own_linker_count=(int)ftell(linker_file)/32;
    }
    show_menu();
}

void add_linker(){
    printf("***进入add_linker函数***\n");
    linker_file=fopen("联系人.data", "wb");
    for (int i=0; i<own_linker_count; i++) {
        fwrite(person[i].name, sizeof(person[i].name), 1, linker_file);
        fwrite(person[i].tel, sizeof(person[i].tel), 1, linker_file);
    }
    for (int i=own_linker_count; i<MAX_LINKER; i++) {
        
        printf("请输入联系人的姓名:");
        scanf("%s",person[i].name);
        if (strcmp(person[i].name, "0")==0){
            fclose(linker_file);
            break;
        }
        else {
            fwrite(person[i].name, sizeof(person[i].name), 1, linker_file);
        }
        
        printf("请输入联系人的电话:");
        scanf("%s",person[i].tel);
        if (strcmp(person[i].tel, "0")==0){
            fclose(linker_file);
            break;
        }
        else{
            fwrite(person[i].tel, sizeof(person[i].tel), 1, linker_file);
        }
        
        own_linker_count++;
    }

}

void del_linker(){
    printf("***进入del_linker函数***\n");
}
void modify_linker(){
    printf("***进入modify_linker函数***\n");
}
void find_linker(){
    printf("***进入find_linker函数***\n");
}
void show_linker(){
    printf("***进入show_linker函数***\n");
    linker_file=fopen("联系人.data", "rb");
    if (linker_file==NULL) {
        printf("暂无联系人,请添加联系人\n");
    }
    else{
        for (int i=0; i<own_linker_count; i++) {
            
            fread(person[i].name, sizeof(person[i].name), 1, linker_file);
            fread(person[i].tel, sizeof(person[i].tel), 1, linker_file);
            if (strcmp(person[i].name, "")==0 || strcmp(person[i].tel, "")==0) {
                fclose(linker_file);
                break;
            }
            else{
                printf("%s,%s\n",person[i].name,person[i].tel);
            }
        }
    }
}
