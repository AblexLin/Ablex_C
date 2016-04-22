//
//  main.c
//  2016.04.22
//
//  Created by 顾明轩 on 16/4/22.
//  Copyright © 2016年 顾明轩. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    //二进制文件操作，主要是写入和保存
    //打开，读写，关闭
    FILE *name=fopen("abc.py", "r");
    if (!name) {
        printf("文件打开失败!\n");
        return 0;
    }
    int a;
//    fwrite(&a, sizeof(a), 1, name);//二进制的方式写文件
    fread(&a, sizeof(a), 1, name);//读取文件
    printf("%d\n",a);
    fclose(name);
    return 0;
}
