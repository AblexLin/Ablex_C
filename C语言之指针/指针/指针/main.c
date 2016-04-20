//
//  main.c
//  指针
//
//  Created by 顾明轩 on 16/4/20.
//  Copyright © 2016年 顾明轩. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
//    int a ;
//    a=199;
//    printf("%p\n",&a);
//    printf("%d\n",*&a);
    //&变量--取地址
    //*地址--取值
    //指针变量
    int a;
    int *p;//指针变量
    p=&a;//指针变量初始化
    *p=100;//其实就是a＝100
    printf("%d",a);
    return 0;
}
