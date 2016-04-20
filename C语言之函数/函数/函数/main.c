//
//  main.c
//  函数
//
//  Created by 顾明轩 on 16/4/20.
//  Copyright © 2016年 顾明轩. All rights reserved.
//

#include <stdio.h> //不在函数这个文件夹中的才用<>来载入
#include "accfile.h"//在函数文件夹中到用""即可
int main(int argc, const char * argv[]) {
    int a;
    printf("请输入您需要求和的文件:");
    scanf("%d",&a);
    int sum = acceleratesum(a);
    printf("您输入的数据的和为:%d\n",sum);
    return 0;
}
