//
//  main.c
//  数组和指针的关系
//
//  Created by 顾明轩 on 16/4/20.
//  Copyright © 2016年 顾明轩. All rights reserved.
//

#include <stdio.h>
void acc(int *p);
int main(int argc, const char * argv[]) {
    //一维数组的
    /*int a[10];
    for (int i=0; i<10; i++) {
        a[i]=i+1;
    }
    int * p=a;
    printf("一维数组a[2]=%d,p[2]=%d\n",*a+2,*(p+2));
    
    for (int i=0; i<10; i++) {
        printf("a[%d]=%d\n",i,*(a+i));//数组的遍历
    }
    acc(a);//这其实是把首地址传递进来，数组的名字就是首地址*/
    //数据类型sizeof(type or 表达式expression)
    //printf("%d\n",sizeof(double));
    /*int a[3]={0};
    for (int i=0; i<sizeof(a)/sizeof(int); i++) {
        printf("%d\n",a[i]);//sizeof(a)/sizeof(int)能算出数组有多少个变量
    }*/
    //二维数组不能用指针，直接传递a[][]
    //字符串
    char ch[]="hello";
    char *p="hellow";//这说明字符串也是地址
    char *name="顾明轩";//中文也属于字符串，不能使用字符变量来定义
    char name2[]="顾明轩";
    printf("%s,%s,%s,%s\n",ch,p,name,name2);
    return 0;
}
void acc(int *p){
    printf("一维数组%d\n",*(p+2));
    printf("一维数组%d\n",p[10]);
}
