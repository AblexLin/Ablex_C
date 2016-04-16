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
//    int a=1;
//    int b,c;
//    b = a++;
//    c = ++a;
//    printf("a=%d,b=%d,c=%d\n",a,b++,c);
    //a=3,b=1,c=3这是运算的结果原因如下＋＋在后的时候赋值，则先使用a的数值，使用后在＋1所以运行来b＝a++后，b＝1，a＝2，再运行c那条的时候，c就是a先加1再赋值了
    //切记除了a++单独写一行，其他任何时候，都需要看是先加还是后加
    int a=1;
    double b=2;
    printf("1/2等于%f\n",a/b);
    printf("1/2等于%g\n",a/b);
    printf("1/2等于%f\n",a/b);
    printf("1/2等于%g\n",a/b);
    //统一运算规则
    //如果1/2这样点，1和2都为int类型的，所以计算的结果默认也是整型的那么输出肯定说0，有2种方式可以打印出0.5来
    //第一种，把2变为2.0
    //第二种，把2变为(double)2
    return 0;
}
