#include <stdio.h>
#include<stdlib.h>
 struct node{
   int data;
   struct node *link;
 };
 void add(struct node **node_ref,int item){
     struct node *temp;
     struct node *new_data=(struct node*) malloc(sizeof(struct node));
     temp=(*node_ref);
     new_data->data=item;
     new_data->link=NULL;
     if(*node_ref==NULL)
     {
         *node_ref=new_data;
         return;
     }
     while(temp->link!=NULL){
         temp=temp->link;
     }
     temp->link=new_data;
 }
 void printlist(struct node *head)
 {
     struct node *temp;
     temp=head;
     while(temp!=NULL){
         printf("%d  ",temp->data);
         temp=temp->link;
     }
     printf("\n");
 }
 void find_num(struct node *head,int item){
     int count=1;
     int c=0;
     while(head!=NULL){
         if(head->data==item){
             c=1;
             printf(" item present :%d\n",item);
             printf("position is %d\n",count);
             
         }
         head=head->link;
         count++;
         if(c==1){
             return;
         }
     }
     printf("item %d is not found\n",item);
     
 }
 
 void midnode(struct node *head){
     struct node *p,*q;
     p=head;
     q=head;
     while(q && q->link){
         p=p->link;
         q=q->link->link;
     }
     printf("the middle element is: %d\n",p->data);
 }
int main()
{
	char a[10];
    struct node *head=NULL;
    add(&head,6);
    add(&head,1);
    add(&head,3);
    add(&head,15);
    add(&head,22);
    add(&head,34);
    add(&head,12);
    printlist(head);
    midnode(head);
    find_num(head,22);
    find_num(head,75);
    
	scanf("%c",&a);
    return 0;
}
