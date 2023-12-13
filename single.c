#include<stdio.h>
#include<stdlib.h>
struct node
{
 int data;
 struct node*next;
};
  struct node*push(struct node*,int);
  struct node*pop(struct node*,int *);
  int search(struct node*,int);
  int main()
  {
  struct node*sp=(struct node*)0;
  int option,item,ans;
  do
  {
   printf("\n1.push \n");
   printf("2.pop \n");
   printf("3.search \n");
   printf("4.exit \n");
   printf("option");
   scanf("%d",&option);
   switch(option)
   {
    case 1:printf("data:");
           scanf("%d",&item);
           sp=push(sp,item);
           break;
    case 2:if(sp==(struct node*)0)
           printf("empty stack \n");
           else
           {
            sp=pop(sp,&item);
            printf("poped item=%d \n",item);
           } 
           break;
    case 3:printf("data:");
           scanf("%d",&item);
           ans=search(sp,item);
        if(ans!=0)
           printf("found \n");
        else
           printf("not found");
           break;
    case 4:exit(0);
   }
  }
  while(1);
  }
  struct node *push(struct node*sp,int data)
  {
   struct node *t;
   t=(struct node*)malloc(sizeof(struct node));
   t->data=data;
   t->next=sp;
   return t;
  }
   struct node*pop(struct node*sp,int *item)
   {
   if(sp!=(struct node*)0)
   {
    *item=sp->data;
    struct node*t=sp;
    sp=sp->next;
    free(t);
   }
    return sp;
   }
   int search(struct node* sp,int item)
   {
   while(sp!=(struct node*)0 &&sp->data!=item)
   {
    sp=sp->next;
   }
   if(sp==(struct node*)0)
   {
   return 0;
   }
   else
   {
   return 1;
   }
  }
 
