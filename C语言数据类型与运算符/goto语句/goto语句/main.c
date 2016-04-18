//
//  main.c
//  goto语句
//
//  Created by 顾明轩 on 16/4/16.
//  Copyright © 2016年 顾明轩. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
//    cong  shang wang xia zhixing
    int a;
    printf("请输入一个数字:");
    scanf("%d",&a);
    if (a%2 == 0) {
        printf("您输入的%d是一个偶数!\n",a);
    }
//    alt+command+左右按键可以收起或者打开一个{}/*。。*/等等
    //条件可以放常量，变量，运算式，比较式
    return 0;
}
