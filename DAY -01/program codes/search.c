#include<stdio.h>
void main(){
int c=0,i,n,a[10]={10,20,30,40,50,60,70,80,90,100};
printf("enter ele u want to search\n");
scanf("%d",&n);

for(i=0;i<10;i++)
if(n==a[i])
c++;

if(c==0)
printf("not found\n");
else
printf("found\n");
}
