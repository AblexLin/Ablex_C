//
//  main.c
//  使用二维数组记录学生的姓名和成绩
//
//  Created by 顾明轩 on 16/4/20.
//  Copyright © 2016年 顾明轩. All rights reserved.
//

#include <stdio.h>
#include <string.h>//包含字符串的函数
#define STD_COUNT 3
//包含后可以使用:strlen,strcmp,strcat,strcpy
int main(int argc, const char * argv[]) {
    
    char name[STD_COUNT][20]={};  //先定义一个二维数组存放姓名
    int score[100]={};            //先定义一个一维数组存放成绩
    
    char std_name[20]={};         //再定义一个一维数组存放输入的字符串
    int std_score;                //再定义一个变量存放输入的分数
    
    char *end_flag_name="end";    //定义输入姓名时结束的标志
    int end_flag_score=-1;        //定义输入分数时结束的标志
    
    printf("开始录入学生成绩...\n");
    for (int i=0; i<STD_COUNT; i++) {
        printf("请输入学生姓名:");
        scanf("%s",std_name);       //用一维数组接受输入的字符串
        if (strcmp(std_name, end_flag_name)==0) {
            break;
        }
        strcpy(*(name+i), std_name);//将字符串赋值给二维数组
    
        printf("请输入学生成绩:");
        scanf("%d",&std_score);     //用变量来接受输入的分数
        if (std_score==end_flag_score) {
            break;
        }
        score[i]=std_score;         //将分数赋值给一维数组
    }
    for (int i=0; i<STD_COUNT; i++) {
        printf("学生姓名:%s\t学生成绩:%d\n",name[i],score[i]);
    }
    
//    input_child_name_score(name,score);
    
//    output_child_name_score(name);
    return 0;
}