//
//  main.c
//  尝试字符串数组的循环赋值
//
//  Created by 顾明轩 on 16/4/23.
//  Copyright © 2016年 顾明轩. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#define COUNT 3//数组有多大？我不知，但是定义个宏啊，随时修改，66666666666

int main(int argc, const char * argv[]) {
//    char name[3][20]={{"xuan"},{"shou"},{"wang"}};
    char ha[20];//这个数组干嘛？存键盘输入的数据啊～～当然输入的肯定是字符串啦～～～
    
    char name[COUNT][20]={};//数组定义的时候必须先初始化，那么就先初始化为空嘛
    
    for (int i=0; i<COUNT; i++) {
        printf("请输入:");
        scanf("%s",ha);//这是什么？当人是吧键盘输入的字符串给保存到ha这个数组的首地址啦～～～
        strcpy(name[i], ha);//循环给数组增加内容不就好了么？哈哈哈
//        name[i]=ha;这样的赋值方式只适合一维数组，而name实际是二维数组，只能使用strcpy
    }
    for (int i=0; i<3; i++) {
        printf("%s\n",name[i]);
    }

    return 0;
}
