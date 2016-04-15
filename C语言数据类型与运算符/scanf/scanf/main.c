//
//  main.c
//  scanf
//
//  Created by 顾明轩 on 16/4/15.
//  Copyright © 2016年 顾明轩. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    //scanf语法
    //scanf("数据类型的占位符",地址)
    int a,b;
    printf("请输入第一个数:");
    scanf("%d",&a);
    printf("请输入第二个数:");
    scanf("%d",&b);
    printf("%d+%d=%d\n",a,b,a+b);
    return 0;
}
