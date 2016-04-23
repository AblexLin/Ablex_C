//
//  main.c
//  预编译的命令
//
//  Created by 顾明轩 on 16/4/23.
//  Copyright © 2016年 顾明轩. All rights reserved.
//

#include <stdio.h>
#define paixu 20
int main(int argc, const char * argv[]) {
    int num[paixu];
    for (int i=0; i<paixu; i++) {
        scanf("%d",&num[i]);
    }
    for (int i=0; i<paixu-1; i++) {
        for (int j=0; j<paixu; j++) {
            if (num[i]>num[j]) {
                int t=num[i];
                num[i]=num[j];
                num[j]=t;
            }
        }
    }
    for (int x=0; x<paixu; x++) {
        printf("%d",num[x]);
    }
    return 0;
}
