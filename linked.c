#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
void main(){
    struct node *p=malloc(sizeof(struct node)),*q=malloc(sizeof(struct node)),*head=NULL,*ptr,*t;
    head=p;
    p->data=22;
    p->next=q;
    q->data=06;
    q->next=NULL;
    // insert in the 1st position.............
    /*struct node *a=malloc(sizeof(struct node));
    a->data=9;
    a->next=head;
    head=a;*/

    // inserting at the last position.........
    /*ptr=head;
    while(ptr->next!=NULL){
        ptr=ptr->next;
    }
    struct node*a=malloc(sizeof(struct node));
    ptr->next=a;
    a->data=2002;
    a->next=NULL;
    ptr=head;
    while(ptr!=NULL){
        printf("%d  ",ptr->data);
        ptr=ptr->next;
    }*/
    // inserting at any position..........
    /*ptr=head;
    while(ptr->data!=22){
        ptr=ptr->next;
    }
    t=ptr->next;
    struct node *a=malloc(sizeof(struct node));
    ptr->next=a;
    a->data=5;
    a->next=t;
    ptr=head;
    while(ptr!=NULL){
        printf("%d  ",ptr->data);
        ptr=ptr->next;
    }*/
    // deleting at the 1st position......
    /*struct node *r=NULL;
    r=head;
    head=head->next;
    free(r);
    ptr=head;
    while(ptr!=NULL){
        printf("%d  ",ptr->data);
        ptr=ptr->next;
    }*/
    // deleting at the last position
    /*ptr=head;
    while(ptr->next->next=NULL){
        ptr=ptr->next;
    }
    t=ptr->next;
    ptr->next=NULL;
    free(t);
    ptr=head;
    while(ptr!=NULL){
        printf("%d  ",ptr->data);
        ptr=ptr->next;
    }*/
}