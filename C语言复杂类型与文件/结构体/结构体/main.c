//
//  main.c
//  结构体
//
//  Created by 顾明轩 on 16/4/21.
//  Copyright © 2016年 顾明轩. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct Student//相当于自定义的数据类型
{
    char name[20];
    char sex[4];
    int age;
};

int main(int argc, const char * argv[]) {
    //结构体学习，重点之重点
    //结构体语法
    //struct 结构体名称 {
    //结构数据
    //};
    //基本实现实例化的方法
    struct Student students;//
    strcpy(students.name,"顾明轩");
    strcpy(students.sex,"男");
    students.age=33;
    printf("name=%s,sex=%s,age=%d\n",students.name,students.sex,students.age);
    
    //立即赋值的方式
    struct Student students2={"王爱平","女",40};//和上面注释的一样
    printf("name=%s,sex=%s,age=%d\n",students2.name,students2.sex,students2.age);
    
    //指针实例化的方法
    struct Student *s=malloc(sizeof(struct Student));
    strcpy(s->name, "轩爷");
    strcpy(s->sex, "女");
    s->age=32;
    printf("name=%s,sex=%s,age=%d\n",s->name,s->sex,s->age);
    return 0;
}
