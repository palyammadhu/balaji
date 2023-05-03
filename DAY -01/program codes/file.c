#include<stdio.h>
void main(){
FILE *fp;
char a[128];
fp=fopen("data","w");
if(fp==NULL)
{
printf("file not opened\n");
return;
}
printf("enter data\n");
scanf("%s",a);
fputs(a,fp);
fclose(fp);
}

