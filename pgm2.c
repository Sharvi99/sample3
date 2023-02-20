#include<stdio.h>
#include<stdlib.h>
struct btnode()
{
 int node;
 struct btnode *l;
 struct btnode *r;
}
void insert();
void create();
void inorder(struct btnode);
void preorder(struct btnode);
void postorder(struct btnode);
void main()
{
int ch;
printf("\nEnter the choice of operations:");
printf("\n1.Insert an element into tree:");
printf("\n3.Inorder Traversal:");
printf("\n4.Preorder Traversal:");
printf("\n5.Postorder Traversal:");
prinf("\n6.Exit");
}
while(1)
{
 printf("Enter the Element to Insert");
 scanf("%d",&ch);
 switch(ch)
 {
  case 1:insert();
  break;
  case 3:inorder();
  break;
  case 4:preorder();
  break;
  case 5:postorder();
  break;
  case 6:exit(0);
  break;
 }
}
void insert()
{
 printf("Enter the value to be inderted:");
 scanf("%d",&data);
}
void create()
{
 printf("Enter the node to be created:");
 scanf("%d",&data);
}
void inorder()
{
}
void preorder()
{
}
void postorder()
{
}


