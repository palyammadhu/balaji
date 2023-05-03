#include<stdio.h>
void main(){
int n;
printf("enter num\n");
scanf("%d",&n);
printf("before clear 7th bit value :%d\n",n);
n=n&~(1<<7);
printf("after clear 7th bit value :%d\n",n);
}
