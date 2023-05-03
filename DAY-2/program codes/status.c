#include<stdio.h>
void main(){
int i;
for(i=0;i<11;i++)
{
printf("%d",i>>1&1);
if(i>>1&1==1)
printf("flag is  set\n");
else
printf("flag is not set\n");

}
}
