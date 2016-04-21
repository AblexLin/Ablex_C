//
//  main.c
//  2016.04.21
//
//  Created by 顾明轩 on 16/4/21.
//  Copyright © 2016年 顾明轩. All rights reserved.
//

#include <stdio.h>
#include <string.h>
//别名使用
struct Date{
    int year;
    int month;
    int day;
};

typedef struct tagStudent{
    char name[20];
    char sex[4];
    int age;
    struct Date birthday;//结构的循环嵌套
}Student;



//typedef int INT;//别名的设置和git中的alias一样

int main(int argc, const char * argv[]) {
//    Student zs;//上面使用了别名所以这里的Student = struct Student
/*    struct Date date;
    date.year=2002;
    date.month=2;
    date.day=2;
    Student ls;
    strcpy(ls.name,"王小霖");
    strcpy(ls.sex,"女");
    ls.age=22;
    ls.birthday.year=1991;
    ls.birthday.month=2;
    ls.birthday.day=25;*/
//    Student ss[2];
    Student ss[2]={{"张三","男",22,{2000,2,2}},{"张三2","男",33,{3000,3,3}}};
    return 0;
}














