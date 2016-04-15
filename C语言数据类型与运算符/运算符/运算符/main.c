//
//  main.c
//  运算符
//
//  Created by 顾明轩 on 16/4/16.
//  Copyright © 2016年 顾明轩. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int a=1;
    int b,c;
    b = a++;
    c = ++a;
    printf("a=%d,b=%d,c=%d\n",a,b,c);
    //a=3,b=1,c=3这是运算的结果原因如下＋＋在后的时候赋值，则先使用a的数值，使用后在＋1所以运行来b＝a++后，b＝1，a＝2，再运行c那条的时候，c就是a先加1再赋值了
    return 0;
}
