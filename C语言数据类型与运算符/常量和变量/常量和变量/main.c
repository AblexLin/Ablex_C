//
//  main.c
//  常量和变量
//
//  Created by 顾明轩 on 16/4/15.
//  Copyright © 2016年 顾明轩. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    //打印常量
    printf("%d,%g,%c,%s\n",-12,1.234,'a',"你好");
    //打印变量
    // 字符char 短整型short 整型int 长整型long 单精度浮点型float 双精度浮点型double
    int a = 10;
    char b = 'b';
    printf("%d,%c\n",a,b);
    return 0;
}
