#include<stdio.h>
void main(){
int n,i;
printf("enter decimal num\n");
scanf("%d",&n);
for(i=31;i>=0;i--)
printf("%d",n>>i&1);
}

