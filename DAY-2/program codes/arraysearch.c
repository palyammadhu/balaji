#include<stdio.h>
void main(){
int a[10]={10,20,30,40,50,60,70,80,90,100};
int ele,i,index=-1;
int *p;
printf("enter element to search\n");
scanf("%d",&ele);
p=a;
for(i=0;i<10;i++)
{
if(ele==*p)
{
index=i;
break;}
p++;
}
if(index==-1)
printf("element is not found\n");
else
printf("element is found in %d\n",i);
}
