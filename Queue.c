#include<stdio.h>
#include<conio.h>
#define MAX 5

typedef Struct Q


{

  int R ,F;
  int data[MAX];

}Q;

void initialize(Q *P)
void empty(Q *P)
void enqueue(Q *P,int x)
int dequeue(Q *P)
void main(){

  Q q;
  int ch,x;
  initialize(&q);
  do{

    printf("\n\n 1)Insert2)Delete 3)Print 4) Quit");
    printf("\nEnter the choice");
    scanf("%d",&ch);

    switch(ch)
    {

      case 1:printf("/nEnter a value");
      scanf("%d"&x);

        if(!full(&q))
        enqueue(&q,x);

      else
      printf("\nQueue is full");
      break;

      case 2:if(!empty(&q)))
      (

        x=dequeue(&q);
        printf("Deleted data=%d",x);

      )
      else
      printf("Queue is empty");
      break;



          }

void initialize(Q *P){

P->R=-1;
P->F=-1;

}
void empty(Q *P){

if(P->R==-1)
return(1);
return(0);


}
int full(Q *P)
{

  if(P->R==MAX-1)
  return(1);
  return(0);
}
void enqueue(Q *P,int x)
{
if(P->R==-1)
{

  P->R=P->F=0;
  P->data=[P->R]=x;

}
int dequeue(Q *P)
{

  int x;
  x=P->data[P->F]
  if(P->R==P->F)
  {
   P->R=-1;
  P->F=-1;

  }
  void print(Q *P){

int i;
if(!empty(P))
{

  printf("/n");
  for(i=P->F;i<=P->R;i++)
  printf("%d",P->data[i]);

}
  }








