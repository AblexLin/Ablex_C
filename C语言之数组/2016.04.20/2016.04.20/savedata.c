//
//  savedata.c
//  2016.04.20
//
//  Created by 顾明轩 on 16/4/20.
//  Copyright © 2016年 顾明轩. All rights reserved.
//

#include "savedata.h"
/* 需求
** 1.要求输入班级个数
** 2.要求输入学员个数
** 3.要求输出班级班号
** 4.要求输出班级平均
*/
int save_data_print_data(){
    int score;
    int class,student;
    printf("请输入班级的个数:");
    scanf("%d",&class);
    printf("请输入学生的个数:");
    scanf("%d",&student);
    int class_data[class][student];
    for (int i=0; i<class; i++) {
        for (int j=0; j<student; j++) {
            printf("请输入第%d个班级的第%d个学生成绩:\n",i+1,j+1);
            scanf("%d",&score);
            class_data[i][j]=score;
        }
    }
    return 0;
}
