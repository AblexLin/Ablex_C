//
//  main.c
//  联合和枚举
//
//  Created by 顾明轩 on 16/4/21.
//  Copyright © 2016年 顾明轩. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

union Qubie{
    int score;
    float salary;
};

struct Person{
    int number;
    char name[20];
    int age;
    union Qubie qb;
};

enum Number{
    one=1,two,three=32,four
};

//struct Student{
//    int number;
//    char name[20];
//    int age;
////    int score;
//};
//struct Teacher{
//    int number;
//    char name[20];
//    int age;
////    float salary;
//};

int main(int argc, const char * argv[]) {
////    printf("%d\n",sizeof(struct Student));
//    //struct大小等于 int 4＋char 20 = 24
//    union Teacher xuanye;
////    xuanye.age=12;
//    printf("%d\n",xuanye.age);
////    printf("%d\n",sizeof(xuanye));
    struct Person student;
    student.qb.score=99;
    struct Person teacher;
    teacher.qb.salary=1234.5;
    
    enum Number n;
    n=one;//可以赋值
//    n=five;//赋值就报错
    printf("%d\n",n);//默认值是0，枚举类型的one,two,three,four...
    printf("%d,%d\n",two,four);//输出2和33，递增
    return 0;
}








