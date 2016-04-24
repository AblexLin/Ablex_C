//
//  showcards.c
//  洗牌器
//
//  Created by 顾明轩 on 16/4/24.
//  Copyright © 2016年 顾明轩. All rights reserved.
//

#include "showcards.h"

void showcards(int *cards, int leng_cards){
    char flower_color[4][8]={"♠️","♥️","♦️","♣️"};
    char cards_number[13][4]={"A","2","3","4","5","6","7","8","9","10","J","Q","K"};

    for (int j=0; j<leng_cards; j++) {
        if (cards[j]==52) {
            printf("小🃏");
        }
        else if (cards[j]==53) {
            printf("大🃏");
        }
        else{
            printf("%s%s ",flower_color[cards[j]/13],cards_number[cards[j]%13]);
        }
        if ((j+1)%18==0) {
            printf("\n");
        }
    }
}