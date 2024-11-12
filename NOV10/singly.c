#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node*head=NULL,*tail=NULL;
void create(){
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    int value;
    printf("Enter the data");
    scanf("%d",&value);
    newnode->data=value;
    newnode=>next=NULL;
    if(head==NULL){
        head=tail=newnode;
    }
    else{
      tail->next=newnode;
      tail=newnode;
    }
}
void insert_at_begin(){
    struct node *newnode=(struct node*)
    malloc(sizeof(struct node));
    int value;
    printf("Enter the data:");
    scanf("%d",&value);
    newnode->data=value;
    newnode->next=NULL;
    newnode->next=head;
    head=newnode;
}
void insert_at_end(){
    struct node *newnode=(struct node*)
    malloc(sizeof(struct node));
    int value;
    printf("Enter the data:");
    scanf("%d",&value);
    newnode->data=value;
    newnode->next=newnode;
    tail->next=newnode;
    tail=newnode;
}
