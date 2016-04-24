//
//  inputinfo.c
//  学生成绩记录系统
//
//  Created by 顾明轩 on 16/4/24.
//  Copyright © 2016年 顾明轩. All rights reserved.
//

#include "inputinfo.h"

void inputinfo(int *student_count, int *subject_count, char std_name[STD_COUNT][20], char std_subject[][20], int std_score[STD_COUNT][STD_SUBJECT]){
    
    printf("请输入班级学生总人数:");
    scanf("%d",student_count);
    
    printf("请输入班级的学科总数:");
    scanf("%d",subject_count);
    
    for (int i=0; i<*subject_count; i++) {
        printf("请输入第%d科名称:",i+1);
        scanf("%s",std_subject[i]);//语文，数学，英语
    }
    
    for (int i=0; i<*student_count; i++) {
        printf("请输入第%d个学生姓名:",i+1);//顾明轩，王爱平
        scanf("%s",std_name[i]);
        for (int j=0; j<*subject_count; j++) {
            printf("请输入%s的%s成绩:",std_name[i],std_subject[j]);
            scanf("%d",&std_score[i][j]);
        }
    }
    
    //输出阵列
    printf("姓名\t\t");
    for (int i=0; i<*subject_count; i++) {
        printf("%s\t ",std_subject[i]);
    }
    printf("\n");
    for (int i=0; i<*student_count; i++) {
        printf("%s\t",std_name[i]);
        for (int j=0; j<*subject_count; j++) {
            printf("%d\t ",std_score[i][j]);
        }
        printf("\n");
    }
    
}

