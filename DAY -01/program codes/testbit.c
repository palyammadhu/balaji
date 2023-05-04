#include<stdio.h>
void main(){
int i,n,c=0,c2=0;

printf("enter num\n");
scanf("%d",&n);
for(i=7;i>=0;i--)
{
if(n>>i&1==1)
c++;
else 
c2++;
}
printf("LED ON = %d\n",c);
printf("LED OFF= %d\n",c2);
}
