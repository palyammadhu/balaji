#include<stdio.h>
struct student
{
char name[20];
int idno;
float age;
}s1,s2,s3,s4,s5;

void main(){
printf("enter name id age \n");
scanf("%s%d%f",s1.name,&s1.idno,&s1.age);
printf("%s %d %f",s1.name,s1.idno,s1.age);
}
