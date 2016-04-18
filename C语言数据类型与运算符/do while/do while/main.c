//
//  main.c
//  do while
//
//  Created by 顾明轩 on 16/4/18.
//  Copyright © 2016年 顾明轩. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    //for 循环实现水仙花数
    //int i,j,k,n=100;
    /*printf("'water flower'number is:");
    for(n=100;n<1000;n++)
    {
        i=n/100;//分解出百位
        j=n/10%10;//分解出十位
        k=n%10;//分解出个位
        if(n==i*i*i+j*j*j+k*k*k)
        {
            printf("%-5d",n);
        }
    }*/
    //while 循环实现水仙花数
    /*while (n<1000) {
        i=n/100;
        j=n/10%10;
        k=n%100%10;
        if (n==i*i*i+j*j*j+k*k*k) {
            printf("这是水仙花数:%d\n",n);
        }
        n++;
    }*/
    //do while 循环实现水仙花数
    /*do{
        i=n/100;
        j=n/10%10;
        k=n%100%10;
        if (n==i*i*i+j*j*j+k*k*k) {
            printf("这是水仙花数:%d\n",n);
        }
        n++;
    }while(n<1000);*/
    
    return 0;
}
