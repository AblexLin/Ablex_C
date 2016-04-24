//
//  main.c
//  测试排序
//
//  Created by 顾明轩 on 16/4/24.
//  Copyright © 2016年 顾明轩. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int num[10]={0,1,2,3,4,5,6,7,8,9};
    for (int i=0; i<9; i++) {
        for (int j=i; j<10; j++) {
            if (num[i]>num[j]) {
                int t=num[i];
                num[i]=num[j];
                num[j]=t;
            }
        }
    }
    for (int i=0; i<10; i++) {
        printf("%d",num[i]);
    }
    printf("\n");
    return 0;
}
