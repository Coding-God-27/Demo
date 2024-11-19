#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *link;
};
int main()
{
struct node *start,*ptr;
start=(struct node *)malloc(sizeof(start));
ptr=start;
ptr->data='a';
ptr->link=(struct node *)malloc(sizeof(start));
ptr=ptr->link;
ptr->data='b';
ptr->link=NULL;
ptr=start;
printf("Node content is\n");
printf("%c\t%p\n",ptr->data,ptr);
ptr=ptr->link;
printf("Node content is\n");
printf("%c\t%p\n",ptr->data,ptr);
getch();
printf("End");

}
