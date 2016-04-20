//
//  main.c
//  数组
//
//  Created by 顾明轩 on 16/4/20.
//  Copyright © 2016年 顾明轩. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    //数组的定义方式
    /*//方式1
    int student_score[] = {0,1,0,0,0,0,0,0,0,0};
    //方式2
    int student[5]={0};
    //方式3
    int score[5]={111,111,222}//剩余的0补齐
    //方式4
    for (int i=0; i<6; i++) {
        student_score[i] = 60 +i;
        printf("student_score[%d]=%d\n",i,student_score[i]);
    }*/
    //一维数据的使用
    /*float student_score[5];
    for (int i = 0; i<5; i++) {
        printf("请输入学生的成绩:");
        scanf("%f",&student_score[i]);
    }
    printf("%g",student_score[3]);*/
    //一维数组排序
    /*float max_min[10];
    for (int i=0; i<10; i++) {
        printf("请输入第%d数据:",i+1);
        scanf("%f",&max_min[i]);
    }
    for (int a=0; a<9; a++) {
        for (int b=a+1; b<10; b++) {
            if (max_min[a]<max_min[b]) {
                int max=max_min[b];
                max_min[b]=max_min[a];
                max_min[a]=max;
            }
        }
    }
    for (int j=0; j<10; j++) {
        printf("%g\t",max_min[j]);
    }*/
    //一维数组的排序技巧
    //先用第1个数和第2～10数比较
    //再用第2个数和第剩下的比较
    return 0;
}
