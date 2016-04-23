//
//  main.c
//  记录学生成绩，教师工资
//
//  Created by 顾明轩 on 16/4/23.
//  Copyright © 2016年 顾明轩. All rights reserved.
//

#include <stdio.h> 
#define STD_COUNT 2
#define TCH_COUNT 2

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
void read_stdinfo_to_file(/* *name */);//声明读学生信息的函数

void write_tchinfo_to_file(/*name,sex,age,salary*/){
    
    FILE *tchinfo=fopen("老师资料", "w");//定义指向文件的指针并打开
    
    if (!tchinfo){
        printf("写入文件失败!\n");
    }
    
    Teacher tch[3]={};
    //也可以直接赋值{{"轩爷","男",20,10000},{"四毛","女",22,20000},{"老人头","男",23,2000}};
   
    for (int i=0;i<TCH_COUNT;i++){
        printf("请输入教师的姓名:");
        scanf("%s",tch[i].teacher_name);
        fwrite(tch[i].teacher_name, 20, 1, tchinfo);
        
        printf("请输入教师的性别:");
        scanf("%s",tch[i].teacher_sex);
        fwrite(tch[i].teacher_sex, sizeof(tch[i].teacher_sex), 1, tchinfo);
        
        printf("请输入教师的年龄:");
        scanf("%d",&tch[i].teacher_age);
        fwrite(&tch[i].teacher_age, 4, 1, tchinfo);//将这个地址往后的4字节，直接保存到磁盘
        
        printf("请输入教师的工资:");
        scanf("%d",&tch[i].teacher_salary);
        fwrite(&tch[i].teacher_salary, sizeof(tch[i].teacher_salary), 1, tchinfo);
    }
    
    fclose(tchinfo);
    
}

void read_tchinfo_to_file(/* *name */){
    FILE *tchinfo=fopen("老师资料", "r");
    if (!tchinfo){
        printf("读取文件失败!\n");
    }
    Teacher tch[TCH_COUNT]={};
    for (int i=0;i<TCH_COUNT;i++){
        fread(tch[i].teacher_name, 20, 1, tchinfo);
        fread(tch[i].teacher_sex, 10, 1, tchinfo);
        fread(&tch[i].teacher_age, 4, 1, tchinfo);
        fread(&tch[i].teacher_salary, 4, 1, tchinfo);
    }
    for (int j=0;j<TCH_COUNT;j++){
        printf("%s:",tch[j].teacher_name);
        printf("%s,",tch[j].teacher_sex);
        printf("%d,",tch[j].teacher_age);
        printf("%d\n",tch[j].teacher_salary);
    }
    fclose(tchinfo);
}

int main(int argc, const char * argv[]) {
    
    write_stdinfo_to_file(/*name,sex,age,score*/);
    read_stdinfo_to_file(/* *name */);
    
    write_tchinfo_to_file(/*name,sex,age,salary*/);
    read_tchinfo_to_file(/* *name */);
    
    return 0;
}

void write_stdinfo_to_file(/*char name[20],char sex[10],int age,int score*/){
    
    FILE *stdinfo=fopen("学生资料", "w");
    
    if (!stdinfo) {
        printf("打开学生资料失败!");
        return;
    }
    Student std[STD_COUNT]={};
    //直接初始化的方式{{"顾明轩","男",20,90},{"王小霖","男",21,80},{"王爱平","女",22,70}};//实例化学生

    for (int i=0; i<STD_COUNT; i++) {
        printf("请输入学生的姓名:");
        scanf("%s",std[i].student_name);
        fprintf(stdinfo,"%s\n",std[i].student_name);
        
        printf("请输入学生的性别:");
        scanf("%s",std[i].student_sex);
        fprintf(stdinfo,"%s\n",std[i].student_sex);

        printf("请输入学生的年龄:");
        scanf("%d",&std[i].student_age);
        fprintf(stdinfo,"%d\n",std[i].student_age);
        
        printf("请输入学生的成绩:");
        scanf("%d",&std[i].student_score);
        fprintf(stdinfo,"%d\n",std[i].student_score);
    }

    fclose(stdinfo);
}

void read_stdinfo_to_file(/* *name */){

    FILE *stdinfo=fopen("学生资料", "r");
    
    if (!stdinfo) {
        printf("读取学生资料失败!");
        return;
    }
    
    Student std[STD_COUNT]={};
    
    for (int i=0; i<STD_COUNT; i++) {
        fscanf(stdinfo, "%s\n",std[i].student_name);
        printf("%s:",std[i].student_name);
        
        fscanf(stdinfo, "%s\n",std[i].student_sex);
        printf("%s,",std[i].student_sex);
        
        fscanf(stdinfo, "%d\n",&std[i].student_age);
        printf("%d,",std[i].student_age);
        
        fscanf(stdinfo, "%d\n",&std[i].student_score);
        printf("%d\n",std[i].student_score);
    }
    
    fclose(stdinfo);
}




