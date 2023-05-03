#include<stdio.h>
void main()
{
int n;
printf("enter n value\n");
scanf("%d",&n);
printf("before n value: %d\n",n);
n=n|(1<<6);
printf("after set 6-bit value: %d\n",n);
}
