//
//  main.c
//  while循环语句
//
//  Created by 顾明轩 on 16/4/18.
//  Copyright © 2016年 顾明轩. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    printf("1.循环语句学习开头(for做法)\n");
    int sum=0,i;
    for (i=0; i<100; i++) {
        sum = sum + i;
        if (sum==3003) {
            printf("总和为%d\n当前的i＝%d\n",sum,i);
            break;
        }
    }
    printf("2.循环语句学习开头(while做法)\n");
    while (sum<3003) {
        i++;
        sum+=i;
    }
    if (sum==3003) {
        printf("sum=%d,i=%d\n",sum,i);
    }
    else{
        printf("没有找到sum＝3003");
    }

    return 0;
}
