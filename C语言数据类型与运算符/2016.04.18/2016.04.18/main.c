//
//  main.c
//  2016.04.18
//
//  Created by 顾明轩 on 16/4/18.
//  Copyright © 2016年 顾明轩. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    //for 计算学生成绩的平均分(学生人数要自己输入)
    /*int student_count;
    int student_score;
    int student_allsc;
    printf("请输入学生总人数:");
    scanf("%d",&student_count);
    for (int i=1; i<=student_count; i++) {
        printf("请输入第%d个学生成绩:",i);
        scanf("%d",&student_score);
        student_allsc+=student_score;
    }
    printf("学生的平均分:%g\n",student_allsc*1.0/student_count);*/
    //while 计算学生成绩的平均分(不需要知道有多少学生)
    int student_score;
    int student_allsc;
    int student_count;
    printf("请输入第%d个学生成绩:",student_count+1);
    scanf("%d",&student_score);
    while (student_score>=0) {
        student_count++;
        student_allsc+=student_score;
        printf("请输入第%d个学生成绩:",student_count+1);
        scanf("%d",&student_score);
    }
    printf("学生总人数:%d\n学生平均分:%g\n",student_count,student_allsc*1.0/student_count);
    return 0;
}
