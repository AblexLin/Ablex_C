//
//  get_average.c
//  函数
//
//  Created by 顾明轩 on 16/4/20.
//  Copyright © 2016年 顾明轩. All rights reserved.
//

#include "get_average.h"
int accelerateaverage(){
    int count=0;
    double average_score=0.0,total_score=0.0,score=0.0;
    printf("请输入学生的成绩:");
    scanf("%lf",&score);
    while (score>=0) {
        count++;
        total_score+=score;
        printf("请输入学生的成绩:");
        scanf("%lf",&score);
    }
    average_score=total_score/count;
    printf("学生总人数为:%d\n学生总分数:%.3f\n平均分为:%.3f\n",count,total_score,average_score);
    return average_score;
}