//
//  main.c
//  彩票21选5
//
//  Created by 顾明轩 on 16/4/24.
//  Copyright © 2016年 顾明轩. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(int argc, const char * argv[]) {
    srandom((unsigned) time(0));//无符号的数，默认使long型
    int tickets[5];
    int i,j,k;
    for (j=0; j<5; j++) {
        for (i=0; i<5; i++) {
            tickets[i]=random()%21+1;//产生1～21的随机数
            for (k=0; k<i; k++) {//和前面的比较，万一重复了，就break
                if (tickets[i]==tickets[k]) {
                    break;
                }
            }
            if (k==i) {
                printf("%02d ",tickets[i]);
            }
            else{
                i--;//如果有重复，本次循环作废
            }
        }
        printf("\n");
    }
    return 0;
}
