//
//  mixcards.c
//  洗牌器
//
//  Created by 顾明轩 on 16/4/24.
//  Copyright © 2016年 顾明轩. All rights reserved.
//

#include "mixcards.h"

void mixcards(int *cards, int mix_count){
    srandom((unsigned) time(0));
    for (int i=0; i<mix_count; i++) {
        int a=random()%54;//随机0～53+1=～1-54
        int b=random()%54;
        int t=cards[a];
        cards[a]=cards[b];
        cards[b]=t;
    }
}