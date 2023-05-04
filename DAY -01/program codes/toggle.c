#include<stdio.h>
void main(){
int n,i;
printf("enter the num\n");
scanf("%d",&n);
printf("before toggle \n");
for(i=31;i>=0;i--)
printf("%d",n>>i&1);
printf("\n");
for(i=31;i>=0;i--)
n=n^(1<<i);// it will toggle bits 1 means 0,0 means 1

printf("after toggle \n");
for(i=31;i>=0;i--)
printf("%d",n>>i&1);

}
