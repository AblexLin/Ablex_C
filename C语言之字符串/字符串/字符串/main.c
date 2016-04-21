//
//  main.c
//  字符串
//
//  Created by 顾明轩 on 16/4/21.
//  Copyright © 2016年 顾明轩. All rights reserved.
//

#include <stdio.h>
#include <string.h>
int main(int argc, const char * argv[]) {
//    char name[]="你好";//数组大小是7个
//    char *pname=name;
//    printf("%s,%s\n",name,pname);
//    char name[][20]={"顾明轩","王爱平"};
//    char *students[2];
//    students[0]="轩爷";
//    students[1]="老人头";
//    printf("%s,%s\n",*students,students[1]);
//    char *str="12345";
//    int c=0;
//    for (int i=0; i<20; i++) {
//        if (str[i]!='\0') {
//            c++;
//        }
//        else{
//            break;
//        }
//    }
//    printf("%d\n",c);//输出字符串的长度
//    
//    char *sss="轩爷";
//    printf("%d",strlen(sss));//不包含'\0'的函数
//    char sss[]="顾明轩";
//    if (strcmp("顾明轩", sss)==0) {
//        printf("正确\n");
//    }
//    char cp[10];
//    strcpy(cp, sss);
//    printf("%s\n",cp);
//    char cat[20]="帅哥";
//    strcat(cat, sss);
//    printf("%s\n",cat);
    char *name[100];
    char my_name[20];
    for (int i=0; i<2; i++) {
        scanf("%s",my_name);
        name[i]=my_name;
    }
    printf("%s,%s\n",name[0],name[1]);
    return 0;
}










