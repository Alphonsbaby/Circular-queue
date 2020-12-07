#include<stdio.h>
# define max 10
int cq_arr[max];
int front=-1;
int rear=-1;
void insert(int item)
{
if(front==0 && rear==max-1)
{
printf("queue is overflow");
return;
}
if (front==-1)
{
front=0;
rear=0;
}
else
{
if(rear==max-1)
{
rear=0;
}
else
{
rear=rear+1;
}
cq_arr[rear]=item;
}   }
void del()
{
if(front==-1)
{
printf("queue is underflow");
return;
}
printf("element deleted from queue is %d",cq_arr[front]);
if(front==rear)
{
front=-1;
rear=-1;
}
else
{
if(front==max-1)
{
front=0;
}
else
{
front=front+1;
}
}
}
 void  display()
 {
 int front_pos=front;
 int rear_pos=rear;
 if (front==-1)
 {
 printf("queue is empty"  );
 return;

}
printf("queue elements");
if(front_pos<=rear_pos)
{
while(front_pos<=rear_pos)
{
printf("%d",cq_arr[front_pos]);
front_pos++;
}
}
else
{
while(front_pos<=max-1)
{
printf("%d",cq_arr[front_pos]);
front_pos++;
}
}
printf("n");
}
int main()
{
int choice,item;
do
{
printf("1.insertion \n");
printf("2.deletion \n");
printf("3.display\n");
printf("4.exit \n");
printf("enter the choice \n");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("input the element in queue");
scanf("%d",&item);
insert(item);
break;
case 2:
del();
break;
case 3:
display();
break;
case 4:
break;
default:
printf("wrong");
}
}
while(choice!=4);

return 0;
}




