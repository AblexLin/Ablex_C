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
//    int i,j;
//    for (i=3; i<4; i++)
//    {
//        printf("循环内i=%d\n",i);
//        for (j=2; j<5; j++)
//        {
//             printf("循环内j=%d\n",j);
//        }
//    }
//    printf("循环外i=%d\n",i);
//    int a,b,c;
//    for (a=0;a<10;a++){
//        for (b=0;b<10;b++){
//            for (c=0;c<10;c++){
//                if((a*100+b*10+c)+(c*100+b*10+a)==1333){
//                    printf("a=%d,b=%d,c=%d\n",a,b,c);
//                }
//            }
//        }
//    }
//    return 0;
    int i,j;
    for (i=1; i<6; i++) {
        j+=i*i;
    }
    printf("1～5的阶乘等于%d\n",j);
}
