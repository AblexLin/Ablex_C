//
//  inputinfo.h
//  学生成绩记录系统
//
//  Created by 顾明轩 on 16/4/24.
//  Copyright © 2016年 顾明轩. All rights reserved.
//

#ifndef inputinfo_h
#define inputinfo_h

#include <stdio.h>

#define STD_COUNT 100
#define STD_SUBJECT 10

void inputinfo(int *student_count, int *subject_count, char std_name[STD_COUNT][20], char std_subject[][20], int std_score[STD_COUNT][STD_SUBJECT]);//函数数据录入的声明

//这里如果使用int student_count表示形参而不是int *student_count，那么在calculatescore函数里就不能使用student_count了，数据不对，必须适应指针变量，才能够正确多读取变量的数据

#endif /* inputinfo_h */
