#include<stdio.h>
void main()
{
 int i,n;
printf("enter n value\n");
scanf("%d",&n);
printf("printing each bit position\n");
for(i=7;i>=0;i--)
printf("%d",n>>i&1);
printf("\n");


printf( "6th bit value is %d\n",n>>6&1);

printf("2nd bit value is %d\n",n>>2&1);
}
