//
//  main.c
//  学生成绩记录系统
//
//  Created by 顾明轩 on 16/4/24.
//  Copyright © 2016年 顾明轩. All rights reserved.
//

#include <stdio.h>
#include "inputinfo.h"
#include "calculatescore.h"

int main(int argc, const char * argv[]) {
    //初始化数组和变量
    int student_count,subject_count;            //定义保存学生人数，科目总数的变量
    char std_name[STD_COUNT][20]={};            //定义保存学生姓名的字符串数组
    char std_subject[STD_SUBJECT][20]={};       //定义保存科目的字符串数组
    int std_score[STD_COUNT][STD_SUBJECT]={};   //定义保存学生对应科目的成绩数组
    
    inputinfo(&student_count, &subject_count, std_name, std_subject, std_score);//记录成绩
//    printf("%d;%d\t",student_count,subject_count);
    calculatescore(&student_count, &subject_count, std_name, std_score);//计算总分
    //运行结果如下
//    请输入班级学生总人数:2
//    请输入班级的学科总数:3
//    请输入第1科名称:语文
//    请输入第2科名称:数学
//    请输入第3科名称:英语
//    请输入第1个学生姓名:顾明轩
//    请输入顾明轩的语文成绩:86
//    请输入顾明轩的数学成绩:76
//    请输入顾明轩的英语成绩:98
//    请输入第2个学生姓名:王爱平
//    请输入王爱平的语文成绩:96
//    请输入王爱平的数学成绩:95
//    请输入王爱平的英语成绩:48
//    姓名		语文  数学  英语
//    顾明轩     86    76   98
//    王爱平     96	  95   48
    return 0;
}
