//
//  main.c
//  文件操作
//
//  Created by 顾明轩 on 16/4/21.
//  Copyright © 2016年 顾明轩. All rights reserved.
//

#include <stdio.h>
//文件操作常用函数
//fputc('',文件名) 输入一个字符
//fputs("",文件名) 输入一个字符串
//fprintf(文件名,"%d",变量) 按照printf的方式输入

void write_file_char(){
     FILE *student_score_file=NULL;
     student_score_file=fopen("score", "w");
     if (student_score_file==NULL) {
         printf("打开文件失败");
         return;
     }
//     for (int i='a'; i<='z'; i++) {
//         fputc(i, student_score_file);
//     }
//     for (int i='a'; i<='z'; i++) {
//         fputs("hello\n", student_score_file);
//     }
     for(int i='a'; i<='z'; i++){
         fprintf(student_score_file,"%c",i);
     }
     fclose(student_score_file);
}

void read_file_char(){
    FILE *student_score_file=NULL;
    student_score_file=fopen("score", "r");
    if (student_score_file==NULL) {
        printf("打开文件失败");
        return;
    }
    char score;
    for (int i=0; i<26; i++) {
        fscanf(student_score_file,"%c",&score);
        printf("%c",score);
    }
    fclose(student_score_file);
}

void write_file_string(){
    FILE *write_string=NULL;//先定义一个空文件
    write_string=fopen("writestring5", "w");
    if (!write_string) {
        printf("打开文件失败\n");
        return;
    }
    char name[3][20]={{"张三"},{"李四"},{"王五"}};
//    char *name[3]={{"张三"},{"李四"},{"王五"}};
    for (int i=0; i<3; i++) {
//        fputs(name[i], write_string);
//        fprintf(write_string, "%s",name[i]);//写入字符串
        fprintf(write_string, "%s\n",name[i]);
    }
    
    fclose(write_string);
}
void read_file_string(){
    FILE *read_string=NULL;//先定义一个空文件
    read_string=fopen("writestring5", "r");
    if (!read_string) {
        printf("打开文件失败\n");
        return;
    }
    char name[20];
//    第一种直接使用fscanf读取
//    fscanf(read_string, "%s",name);
//    printf("%s\n",name);
//    第二种直接使用fgets读取
    for (int i=0; i<3; i++) {
        fgets(name, 10, read_string);//从文件里读字符串
        printf("%s\n",name);
    }
    fclose(read_string);
}

void write_file_int();
void read_file_int();

struct Student{
    char name[20];
    int age;
};


int main(int argc, const char * argv[]) {
//    write_file_char();写字符
//    read_file_char();读字符
//    write_file_string();//写字符串
//    read_file_string();//读字符串
//    write_file_int();//写数字
//    read_file_int();//读数字
    struct Student std[3]={{"张三",20},{"李四",25},{"王五",26}};

    FILE *std_info=fopen("stdinfo", "w");
    if (!std_info) {
        printf("问价打开失败!");
        return 0;
    }
    for (int i=0; i<3; i++) {
        fprintf(std_info, "%s\n",std[i].name);
        fprintf(std_info, "%d\n",std[i].age);
    }
    fclose(std_info);
    
    FILE *read_std_info=fopen("stdinfo", "r");
    if (!read_std_info) {
        printf("问价打开失败!");
        return 0;
    }
    char name_read[20];
    int age_read;
    for (int j=0; j<3; j++) {
        fscanf(read_std_info, "%s",name_read);
        fscanf(read_std_info, "%d",&age_read);
        printf("%s:",name_read);
        printf("%d\n",age_read);
    }
    fclose(std_info);
}

void write_file_int(){
    FILE *write_int=NULL;
    write_int=fopen("score_int2", "w");//先打开，才能判断下面®
    if (!write_int) {
        printf("文件打开失败1!\n");
        return;
    }

    for (int i=0; i<10; i++) {
        fprintf(write_int, "%d\n",i);
    }
    fclose(write_int);
}

void read_file_int(){
    FILE *read_int=NULL;
    read_int=fopen("score_int2", "r");
    int score_int_aa;
    if (!read_int) {
        printf("文件打开失败2!\n");
        return;
    }
    for (int i=0; i<10; i++) {
        fscanf(read_int,"%d",&score_int_aa);
        printf("%d\n",score_int_aa);
    }
    fclose(read_int);
}
