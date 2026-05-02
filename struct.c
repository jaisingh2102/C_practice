#include<stdio.h>
typedef struct student
{
    int enrollment;
    char name[20];
    float marks1;
    float marks2;
    float marks3;
    float marks4;
    float marks5;
    float marks6;
}student;
int main()
{
    student s;
    printf("enter student enrollment number\n");
    scanf("%d",&s.enrollment);
    printf("enter student name\n");
    scanf("%s",s.name);
      printf("enter student marks in probability and statistics\n");
    scanf("%f",&s.marks1);
    printf("enter student marks in data structure\n");
    scanf("%f",&s.marks2);
    printf("enter student marks in database management system\n");
    scanf("%f",&s.marks3);
    printf("enter student marks in indian constitution\n");
    scanf("%f",&s.marks4);
    printf("enter student marks in digital fundamental\n");
    scanf("%f",&s.marks5);
    printf("enter student marks in PCE\n");
    scanf("%f",&s.marks6);
    printf("details are....\n");
    printf("student enrollment number = %d\n",s.enrollment);
    printf("student name= %s\n",s.name);
    printf("student marks in probability and statistics = %.2f\n",s.marks1);
    printf("student marks in data structrue = %.2f\n",s.marks2);
    printf("student marks in database management system = %.2f\n",s.marks3);
    printf("student marks in indan constitution = %.2f\n",s.marks4);
    printf("student marks in digital fundamental = %.2f\n",s.marks5);
    printf("student marks in PCE = %.2f\n",s.marks6);
    return 0;
}