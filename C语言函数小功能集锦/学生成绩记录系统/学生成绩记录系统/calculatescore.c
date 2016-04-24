//
//  calculatescore.c
//  学生成绩记录系统
//
//  Created by 顾明轩 on 16/4/24.
//  Copyright © 2016年 顾明轩. All rights reserved.
//

#include "calculatescore.h"

void calculatescore(int *student_count, int *subject_count, char std_name[][20], int std_score[STD_COUNT][STD_SUBJECT]){
    //定义保存学生各科总分的数组
    int all_score[STD_COUNT]={};

    //计算总分并打印出来
    for (int i=0; i<*student_count; i++) {
        for (int j=0; j<*subject_count; j++) {
            all_score[i]+=std_score[i][j];
        }
    }
    
    //打印出来各科总分
    for (int i=0; i<*student_count; i++) {
        printf("%s的各科总分:%d\n",std_name[i],all_score[i]);
    }
    char t_name[20]={};
    //给成绩排序
    for (int i=0; i<*student_count-1; i++) {
        for (int j=i; j<*student_count; j++) {
            if (all_score[i]<all_score[j]) {
                //交换总分
                int t=all_score[i];
                all_score[i]=all_score[j];
                all_score[j]=t;
                //交换姓名
                strcpy(t_name, std_name[i]);
                strcpy(std_name[i], std_name[j]);
                strcpy(std_name[j],t_name);
            }
        }
    }
    for (int i=0; i<*student_count; i++) {
        printf("第%d名:%s\t%d\n",i+1,std_name[i],all_score[i]);
    }
}