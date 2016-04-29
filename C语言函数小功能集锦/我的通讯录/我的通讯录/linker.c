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

void write_linker(int start, int own_linker_count){
    linker_file=fopen("联系人.data", "wb");
    if (!linker_file) {
        printf("文件写入失败!");
    }
    for (int i=start; i<own_linker_count; i++) {
        fwrite(person[i].name, sizeof(person[i].name), 1, linker_file);
        fwrite(person[i].tel, sizeof(person[i].tel), 1, linker_file);
    }
    fclose(linker_file);
}

void read_linker(int start, int own_linker_count){
    linker_file=fopen("联系人.data", "rb");
    if (!linker_file) {
        printf("文件读取失败!");
    }
    for (int i=start; i<own_linker_count; i++) {
        fread(person[i].name, sizeof(person[i].name), 1, linker_file);
        fread(person[i].tel, sizeof(person[i].tel), 1, linker_file);
    }
    fclose(linker_file);
}

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
    read_linker(0, own_linker_count);
    linker_file =fopen("联系人.data", "wb");
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
        own_linker_count++;//实时更新已有联系人个数
    }
    fclose(linker_file);
}

void del_linker(){
    char del_name[20];
    printf("请输入需要删除的联系人姓名:");
    scanf("%s", del_name);
    for (int i=0; i<own_linker_count; i++) {
        if (strcmp(del_name, person[i].name)==0) {
            for (int j=i; j<=own_linker_count; j++) {
                if (j==own_linker_count) {
                    strcpy(person[j].name, "");//最后的时候写空
                    strcpy(person[j].tel, "");//最后的时候写空
                }
                strcpy(person[j].name, person[j+1].name);//交换姓名
                strcpy(person[j].tel, person[j+1].tel);//交换电话
            }
            own_linker_count-=1;//删除联系人以后，减少已有联系人个数
        }
    }
    write_linker(0, own_linker_count);
}

void modify_linker(){
    char old_name[20];
    char new_name[20];
    char new_tel[12];
    
    printf("请输入需要修改的联系人姓名:");
    scanf("%s",old_name);
    
    read_linker(0, own_linker_count);
    for (int i=0; i<own_linker_count; i++) {
        if (strcmp(old_name, person[i].name)==0) {
            printf("请输入新的姓名:");
            scanf("%s",new_name);
            strcpy(person[i].name, new_name);
            printf("请输入新的电话:");
            scanf("%s",new_tel);
            strcpy(person[i].tel, new_tel);
        }
    }
    write_linker(0, own_linker_count);
}
void find_linker(){
    read_linker(0, own_linker_count);
    char find_name[20];
    printf("请输入姓名查找电话号码:");
    scanf("%s",find_name);
    
    for (int i=0; i<own_linker_count; i++) {
        if (strcmp(find_name, person[i].name)==0) {
            printf("您查找的%s的电话号码是:%s\n",person[i].name,person[i].tel);
        }
    }
}
void show_linker(){
    read_linker(0, own_linker_count);
    for (int i=0; i<own_linker_count; i++) {
        if (strcmp(person[i].name, "")==0 || strcmp(person[i].tel, "")==0) {
            break;
        }
        else{
            printf("%s,%s\n",person[i].name,person[i].tel);
        }
    }
}
