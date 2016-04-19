//
//  main.c
//  switch语句学
//
//  Created by 顾明轩 on 16/4/16.
//  Copyright © 2016年 顾明轩. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a;
    printf("请输入0～9的数字:");
    scanf("%d",&a);
    /*if (a==0) {
        printf("零\n");
    } else if(a==1){
        printf("壹\n");
    } else if(a==2){
        printf("贰\n");
    } else if(a==3){
        printf("叁\n");
    } else if(a==4){
        printf("肆\n");
    } else if(a==5){
        printf("伍\n");
    } else if(a==6){
        printf("陆\n");
    } else if(a==7){
        printf("柒\n");
    } else if(a==8){
        printf("捌\n");
    } else if(a==9){
        printf("玖\n");
    } else {
        printf("无法转换\n");
    }*/
    switch (a) {
        case 1:
            printf("壹\n");
            break;
        case 2:
            printf("贰\n");
            break;
        case 3:
            printf("叁\n");
            break;
        case 4:
            printf("肆\n");
            break;
        case 5:
            printf("伍\n");
            break;
        case 6:
            printf("陆\n");
            break;
        case 7:
            printf("柒\n");
            break;
        case 8:
            printf("捌\n");
            break;
        case 9:
            printf("玖\n");
            break;
        default:
            printf("无法识别\n");
            break;
    }
    return 0;
}
