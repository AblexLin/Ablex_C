//
//  accfile.c
//  函数
//
//  Created by 顾明轩 on 16/4/20.
//  Copyright © 2016年 顾明轩. All rights reserved.
//

#include "accfile.h"
int acceleratesum(int a)
{
    for (int i=0; i<=a; i++) {
        a+=i;
    }
    return a;
}
