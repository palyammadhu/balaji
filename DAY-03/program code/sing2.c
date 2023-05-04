#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
int data;
struct node *next;
}sll;

void print_data(sll*);
void add_begin(sll**);
void add_end(sll**);
void delete_begin(sll**);
void delete_end(sll**);
void pos_add(sll**);
int count_node(sll*);
void pos_del(sll**);
void rev_link(sll**);

int main()
{
sll *headptr=0;
int op;
while(1){
printf("\033[31m enter u r choice \033[0m\n");// 033[31m  \033[0m -> this code for colouring this line otherwise not use this code
printf("\033[32m 1,add_begin 2,print_data 3,add_end 4,delete_begin 5,delete_end 6,pos_add 7,pos_delete 8,reverse link 9,exit\033[0m \n");
scanf("%d",&op);
switch(op){

case 1:add_begin(&headptr);break;
case 2:print_data(headptr);break;
case 3:add_end(&headptr);break;
case 4:delete_begin(&headptr);break;
case 5:delete_end(&headptr);break;
case 6:pos_add(&headptr);break;
case 7:pos_del(&headptr);break;
case 8:rev_link(&headptr);break;
case 9:exit(0);
default:printf("\033[34; user selected wrong choice\033[0m \n");
}
}
}

/************************insert a node always at starting***********/
void add_begin(sll **ptr){
sll *n_node;
n_node=(sll*)malloc(sizeof(sll));
printf("enter data\n");
scanf("%d",&n_node->data);
n_node->next=*ptr;//newly created node next addr is updated
*ptr=n_node;//headptr is updated
}

/************************printing all the records***********/
void print_data(sll *ptr){
printf("\033[34m ************************************************************\n");// this for colour purpose
if(ptr==0){
printf("no records found\n");
return;
}
while(ptr){
printf("%d\n",ptr->data);
ptr=ptr->next;
printf("*******************************************************************\033[0m\n");
}
}
/*********************insert a node always at last******************/
void add_end (sll **ptr){
sll *n_node,*last;
n_node=(sll*)malloc(sizeof(sll));
printf("enter data\n");
scanf("%d",&n_node->data);
n_node->next=0;
if(*ptr==0)
*ptr=n_node;
else{
last=*ptr;
while(last->next)
last=last->next;
last->next=n_node;
}}
/***************delete node********/
void delete_begin(sll **ptr){
if(*ptr==0)
{
printf("no records found\n");
return;
}
sll *del=*ptr;

*ptr=(*ptr)->next;
free(del);
}
void delete_end(sll **ptr){
if(*ptr==0)
{
printf("no records found\n");
return;
}
sll *prev;
sll *temp=*ptr;
if(temp->next==NULL)
{
printf("only one node present\n");
}
while(temp->next!=NULL)
{
prev=temp;
temp=temp->next;
}
prev->next=NULL;
free(temp);
}

void pos_add(sll **ptr){
sll *new;
int count=count_node(*ptr);
int pos,data,d;
new=(sll*)malloc(sizeof(sll));
printf("enter position\n");
scanf("%d",&pos);
if(count<pos-1)
{
printf("wrong position\n");
return;
}
pos+1;
printf("enter the data\n");
scanf("%d",&d);
new->data=d;
new->next=NULL;
sll *temp=*ptr;
if(pos==1)
{
new->next=temp;
*ptr=new;
count++;
return;
}
else
{
for(int i=1;i<pos-1;i++)
{
temp=temp->next;
}
count++;
new->next=temp->next;
temp->next=new;
return;
}
}

int count_node(sll *ptr){
int c=0;
while(ptr){
c++;
ptr=ptr->next;
}
return c;
}

void pos_del(sll **ptr){
int ps;
if(*ptr==NULL)
{
printf("no record found\n");
return;
}
printf("enter position to delete\n");
scanf("%d",&ps);
sll *del=*ptr;
sll *prev;
int c=count_node(*ptr);
int i;
if(ps>=1&&ps<=c)
{
for(i=1;i<=c;i++)
{
if(i==ps)
{
if(ps==1)
*ptr=del->next;
else
prev->next=del->next;
free(del);
return;
}
prev=del;
del=del->next;
}
}
}

void rev_link(sll **ptr){
if(*ptr==0)
{
printf("no record found\n");
return;}
sll **addr,*temp;
int i,c=count_node(*ptr);
temp=*ptr;
addr=(sll**)malloc(sizeof(sll)*c);
for(i=0;i<c;i++){
addr[i]=temp;
temp=temp->next;
}
for(i=1;i<c;i++)
addr[i]->next=addr[i-1];
addr[0]->next=0;
*ptr=addr[c-1];
}


























