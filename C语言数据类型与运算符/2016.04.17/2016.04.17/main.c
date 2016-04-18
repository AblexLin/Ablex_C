//
//  main.c
//  2016.04.17
//
//  Created by 顾明轩 on 16/4/18.
//  Copyright © 2016年 顾明轩. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int i,a;
    scanf("%d",&a);
    for (i=a; i>0; i=i-2) {
        printf("%d\n",i);
        break;//跳出循环
        continue;//跳出本次循环，开始下一次
    }
    printf("i=%d\n",i);
    return 0;
}
