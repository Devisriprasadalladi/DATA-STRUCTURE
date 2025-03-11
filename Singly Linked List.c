#include <stdio.h>
#include <stdlib.h>
struct node{
  int data;
  struct node*link;
};
int main(){
  struct node*head=NULL;
  int NUM=10;
  struct node *d1=malloc(sizeof(struct node));
  d1->data=NUM;
  d1->link=NULL;
  head=d1;
  
  NUM=20;
   struct node*d2=malloc(sizeof(struct node));
  d2->data=NUM;
  d2->link=NULL;
  
  struct node*TT=head;
  while(TT->link!=NULL){
    TT=TT->link;
  }
  TT->link=d2;
  NUM=45;
  struct node*new=malloc(sizeof(struct node));
  new->data=NUM;
  new->link=NULL;
  TT=head;
  while(TT->link!=NULL){
    TT=TT->link;
  }
  TT->link=new;
  while(head!=NULL){
    printf("%d->",head->data);
    head=head->link;
  }
}
