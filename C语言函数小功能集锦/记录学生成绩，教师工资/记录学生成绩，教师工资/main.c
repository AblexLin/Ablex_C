//
//  main.c
//  记录学生成绩，教师工资
//
//  Created by 顾明轩 on 16/4/23.
//  Copyright © 2016年 顾明轩. All rights reserved.
//

#include <stdio.h>

typedef struct tagStudent{
    char student_name[20];
    char student_sex[10];
    int student_age;
    int student_score;
}Student;


typedef struct tagTeacher{
    char teacher_name[20];
    char teacher_sex[10];
    int teacher_age;
    int teacher_salary;
}Teacher;

void write_stdinfo_to_file(/*char name[20],char sex[10],int age,int score*/);//声明写学生信息的函数
//void read_stdinfo_to_file(*name);//声明读学生信息的函数

int main(int argc, const char * argv[]) {

//    Teacher tch[];//实例化教师
    char name[20];
    char sex[10];
    int age,score;
    printf("请输入学生的姓名:");
    scanf("%s",name);
    printf("请输入学生的性别:");
    scanf("%s",sex);
    printf("请输入学生的年龄:");
    scanf("%d",&age);
    printf("请输入学生的分数:");
    scanf("%d",&score);
    
    write_stdinfo_to_file(name,sex,age,score);
    return 0;
}

void write_stdinfo_to_file(/*char name[20],char sex[10],int age,int score*/){
    FILE *stdinfo=fopen("学生资料", "w");
    if (!stdinfo) {
        printf("打开学生资料失败!");
        return;
    }
    Student std[3]={{"张三","男",20,90},{"李四","男",21,80},{"王五","女",22,70}};//实例化学生

        
    for (int i=0; i<3; i++) {
        fprintf(stdinfo,"%s\n",std[i].student_name);
        fprintf(stdinfo,"%s\n",std[i].student_sex);
        fprintf(stdinfo,"%d\n",std[i].student_age);
        fprintf(stdinfo,"%d\n",std[i].student_score);
    }

    fclose(stdinfo);
}

//void read_stdinfo_to_file(*name){
//    
//}




