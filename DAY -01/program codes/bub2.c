#include<stdio.h>
void main(){
int i,j;
int a[10]={2,34,54,456,87,90, 88,22,15,9};
for(i=1;i<10;i++){
for(j=0;j<10-i;j++){
if(a[j]<a[j+1])
{
int temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
printf("\n");
printf("descending sorted elements\n");
for(i=0;i<10;i++)
printf("%d ",a[i]);}
