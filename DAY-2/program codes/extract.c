#include<stdio.h>
void main(){
int n,i;
printf("enter the num\n");
scanf("%d",&n);
printf("before extract 2nd & 6th bit \n");
for(i=31;i>=0;i--)
printf("%d",n>>i&1);
printf("\n");

n=n^(1<<4);

printf("after toggle 4th bit \n");
for(i=31;i>=0;i--)
printf("%d",n>>i&1);

}
