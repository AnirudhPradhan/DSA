#include<stdio.h>
#include<stdlib.h>
struct node{
    float coef;
    int expo;
    struct node *next;
};
struct node *insert(struct node*,float,int);
void print(struct node *);
void main(){
    struct node *head=NULL;
    head=insert(head,5,3);
    head=insert(head,7,2);
    print(head);
}
struct node *insert(struct node *head,float co,int ex){
    struct node *ptr=head;
    struct node *p=malloc(sizeof(struct node));
        p->coef=co;
        p->expo=ex;
        p->next=NULL;
    if(head==NULL){
       head=p;
    }
    else{
        while(ptr->next!=NULL){
            ptr=ptr->next;
        }
        ptr->next=p;
    }
    return head;
}
void print(struct node *head){
    struct node *ptr=head;
    while(ptr!=NULL){
        printf("%0.1fx^%d",ptr->coef,ptr->expo);
        ptr=ptr->next;
        if(ptr!=NULL)
        printf("+");
    }
}