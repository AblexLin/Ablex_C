//
//  main.c
//  洗牌器
//
//  Created by 顾明轩 on 16/4/24.
//  Copyright © 2016年 顾明轩. All rights reserved.
//

#include <stdio.h>

#include "mixcards.h"
#include "showcards.h"

int main(int argc, const char * argv[]) {
    
//    initcards();

    int cards[54]={};               //初始化数组
    int mix_count=100;               //定义两两打乱的次数
    int leng=sizeof(cards)/sizeof(int);
    for (int i=0;i<leng;i++){
        cards[i]=i;
    }
    
    mixcards(cards,mix_count);          //把数组传递给函数
    
    showcards(cards, leng);                   //把牌的数组传递给显示函数
    
    return 0;
    
}
