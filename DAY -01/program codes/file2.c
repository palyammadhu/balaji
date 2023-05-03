#include<stdio.h>
void main(){
FILE *fp;
int b[5],i;
fp=fopen("temp","r+");
if(fp==NULL)
{
printf("file not opened\n");
return;
}
for(i=0;i<5;i++)
fscanf(fp,"%d",b+i);

for(i=0;i<5;i++)
printf("%d",b[i]);
fclose(fp);
}

