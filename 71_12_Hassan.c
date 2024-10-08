#include<stdio.h>
#include<stdlib.h>
int front=-1;
int rear=-1;
int a[5];
void enqueue(int x)
{
	if(front==(r+1)%5)
	{
	 printf("queue is full");
	}
	else
	{ if(front==-1 && r==-1)
	{
	  front=0;
	  r=0;
	  a[r]=x;
	}
	else
	{
	  r=(r+1)%5;
	  a[r]=x;
	}
}
}//function to enqueue element
void dequeue()
{ if(front==-1 && r==-1)
	printf("\n queue is empty");
 else if(r==f)
 { printf("\n %d element dequed ",a[f]);
    f=-1,r=-1;
 }
  else
  { printf("\n %d element dequeued ",a[f]);
  	f=(f+1)%5;
  	
  }	
  }//function to dequeue element
 void display()
	{ if(f!=-1 && r!=-1)
	{for(int i=f;i!=r;i=(i+1)%5)
	{ printf("\n %d",a[i]);
	}
	    printf("\n %d",a[r]);
	}
	else
	printf("queue is empty");
	}//function to dispaly
void main()
{ int ch,n1;
 while(1)//while loop untill condition false
{
printf("\n queue operator");
printf("\n 1. enter 1 for queue");
printf("\n 2. enter 2 for dequeue");
printf("\n 3. enter 3 for display");
printf("\n 4. enter 4 for exit");
printf("\n enter your choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:{
	printf("enter the number ");
	scanf("%d",&n1);
	enqueue(n1);
	break;
	}//element will be added
case 2:{
	dequeue();
	break;
	}//element will be removed
case 3:{
	display();
	break;
	}
case 4: {
		exit(1);
		break;
		}
default: printf("wrong choice");
		}	
	}//end of switch case
	}//end of main
