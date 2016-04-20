//
//  accfile.c
//  函数
//
//  Created by 顾明轩 on 16/4/20.
//  Copyright © 2016年 顾明轩. All rights reserved.
//

#include "accfile.h"//这其实是包含了声明
int b;
int acceleratesum(int a)
{
    for (int i=0; i<=a; i++) {
        b+=i;
    }
    return b;
}
