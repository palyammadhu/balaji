#include<stdio.h>
struct student
{
char name[20];
int idno;
int age;
};

void main(){
int i;
struct student s[5];
for(i=0;i<5;i++)
{
printf("enter name id age \n");
scanf("%s%d%d",s[i].name,&s[i].idno,&s[i].age);
}
for(i=0;i<5;i++)
printf("name:%s idno:%d age:%d\n",s[i].name,s[i].idno,s[i].age);
}
