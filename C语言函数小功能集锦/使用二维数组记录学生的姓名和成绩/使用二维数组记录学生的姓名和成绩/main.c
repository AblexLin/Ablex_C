//
//  main.c
//  使用二维数组记录学生的姓名和成绩
//
//  Created by 顾明轩 on 16/4/20.
//  Copyright © 2016年 顾明轩. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    //举例，因为字符串是数组，和字符不一样，所有想保存一个字符串数组，其实是保存一个二维数组
    //1.使用自己赋值的初始化定义，“50”一定要大于字符串的长度
//    char name[100][9]={"xuanye","ablex.gu","顾明轩"};
//    char sss=sizeof("xc");//查看字符串的长度
//    printf("%s,%s,%s,%d\n",name[0],name[1],name[2],sss);
    char ddd[10];
    long xxx[2];

    for (int i=0; i<2; i++) {
        printf("请输入");
        scanf("%s",&ddd);
        xxx[i]=ddd;
        printf("%s,%s\n",*xxx,*(xxx+1));    
    }
   

//    printf("开始录入学生成绩,输入-1表示结束输入...");
//    char *stu_name;          //定义姓名变量
//    int score[100]={0};         //定义分数数组
//    char name[100][10];     //定义姓名数组
//    int count=0;            //定义学生人数
//    while (*score>=0) {
//        count++;
//        printf("请输入学生姓名:");
//        scanf("%s",&*stu_name);
//        printf("%s",stu_name);
////        name[count]=*stu_name;
//        
//        printf("请输入学生成绩:");
//        scanf("%d",&score[count]);
//    }
//    for (int i=0; i<3; i++) {
//        printf("%s:%d\n",name[i],score[count]);
//    }
    
//    printf("请输入姓名来查询成绩:");
//    char student_name;
//    scanf("%s",&student_name);
//    
//    int count=0;
//    int a=sizeof(name)/sizeof(char);
//    for (int i=0; i<a; i++) {
//        if (name[i]==*name) {
//            count = i;
//        }
//    }
//    printf("学生姓名:%s\t学生成绩:%d\n",name,score[count]);
    return 0;
}















