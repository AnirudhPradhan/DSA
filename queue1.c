#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *f=NULL;
struct node *r=NULL;
void main(){
    struct node *r=NULL;struct node *p=malloc(sizeof(struct node)),*q=malloc(sizeof(struct node)),*head=NULL,*ptr,*t;
    head=p;
    f=head;
    p->data=22;
    p->next=q;
    q->data=06;
    q->next=NULL;
    ptr=head;
    while(ptr->next!=NULL){
        ptr=ptr->next;
    }
    r=ptr;
    /* insertion..................
    struct node *a=malloc(sizeof(struct node));
    a->data=5;
    a->next=NULL;
    r->next=a;
    ptr=head;
    while(ptr!=NULL){
        printf("%d  ",ptr->data);
        ptr=ptr->next;
    }*/
    //deletion......................
    t=f;
    f=f->next;
    free(t);
    ptr=f;
    while(ptr!=NULL){
        printf("%d  ",ptr->data);
        ptr=ptr->next;
    }
}