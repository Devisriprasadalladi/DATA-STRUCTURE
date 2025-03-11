#include <stdio.h>
#include <stdlib.h>
struct node{
  int data;
  struct node *link;
};
int main(){
  struct node *d1=malloc(sizeof(struct node));
  d1->data=10;
  d1->link=NULL;
  
  struct node *d2=malloc(sizeof(struct node));
  d2->data=20;
  d2->link=NULL;
  
  struct node *d3=malloc(sizeof(struct node));
  d3->data=30;
  d3->link=NULL;
  
  struct node *d4=malloc(sizeof(struct node));
  d4->data=40;
  d4->link=NULL;
  
  d1->link=d2;
  d2->link=d3;
  d3->link=d4;
  
  struct node *head=d1;
  
  while(head!=NULL){
    printf("%d->",head->data);
    head=head->link;
  }
}
