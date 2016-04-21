//
//  main.c
//  文件操作
//
//  Created by 顾明轩 on 16/4/21.
//  Copyright © 2016年 顾明轩. All rights reserved.
//

#include <stdio.h>
//文件操作常用函数
//fputc 输入一个字符
//fputs 输入一个字符串
//fprintf 按照printf的方式输入

int main(int argc, const char * argv[]) {
    FILE *student_score_file=NULL;
    student_score_file=fopen("studentscore.txt", "w");

    if (student_score_file==NULL) {
        printf("打开文件失败");
    }
    
    fputc('c', student_score_file);
    fclose(student_score_file);
    return 0;
}
