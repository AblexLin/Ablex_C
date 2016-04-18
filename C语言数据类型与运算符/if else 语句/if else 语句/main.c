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
    if (a<60) {
        printf("%d不及格\n",a);
    }
    else if(a<80){
        printf("%d及格\n",a);
    }
    else if(a<100){
        printf("%d优秀\n",a);
    }
    else{
        printf("%d满分\n",a);
    }
    return 0;
}
