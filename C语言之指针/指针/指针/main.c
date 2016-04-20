//
//  main.c
//  指针
//
//  Created by 顾明轩 on 16/4/20.
//  Copyright © 2016年 顾明轩. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

void swap(int *a,int *b);

int main(int argc, const char * argv[]) {
    //指针变量介绍
    /*//    int a ;
//    a=199;
//    printf("%p\n",&a);
//    printf("%d\n",*&a);
//    //&变量--取地址
//    //*地址--取值
//    //指针变量
//    int a;
//    int *p;//指针变量
//    p=&a;//指针变量初始化
//    *p=100;//其实就是a＝100
//    printf("%d",a);*/
    //指针实例
    //1.在一个函数里想访问另外一个函数里的变量
    int a=1;
    int b=2;
    printf("a=%d,b=%d\n",a,b);
    swap(&a,&b);
    printf("a=%d,b=%d\n",a,b);
    //2.动态的内存申请(在堆里面申请)
    int student_count=5;
    int * students=malloc(sizeof(int)*student_count);
    students[3]=121;
    printf("%d\n",students[3]);
    free(students);//切记释放内存
    return 0;
}
void swap(int *a,int *b){
    int t = *a;
    *a = *b;
    *b = t;
}


