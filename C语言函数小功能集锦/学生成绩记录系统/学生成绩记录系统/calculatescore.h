//
//  calculatescore.h
//  学生成绩记录系统
//
//  Created by 顾明轩 on 16/4/24.
//  Copyright © 2016年 顾明轩. All rights reserved.
//

#ifndef calculatescore_h
#define calculatescore_h

#include <stdio.h>

#define STD_COUNT 100
#define STD_SUBJECT 10

void calculatescore(int *student_count,int *subject_count, char std_name[][20], int std_score[STD_COUNT][STD_SUBJECT]);

#endif /* calculatescore_h */
