//
//  main.c
//  if else 语句
//
//  Created by 顾明轩 on 16/4/16.
//  Copyright © 2016年 顾明轩. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a;
    printf("请输入一个数字:");
    scanf("%d",&a);
    if (a%2==0) {
        printf("%d是一个偶数！\n",a);
    }
    else{
        printf("%d是一个奇数！\n",a);
    }
    return 0;
}
