// queue insertion and deletion using linked list
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *f=NULL;
struct node *r=NULL;
void createNode(int key){
    struct node *a=malloc(sizeof(struct node));
    a->data=key;
    a->next=NULL;
    if(f==NULL){
        f=r=a;
    }
    else{
        r->next=a;
        r=a;
    }
}
struct node dequeue(){
    if(f==r){
        printf("FILE IS EMPTY ");
        f=f->next;
        free(f);
    }
    else{
        struct node *a=f;
        f=f->next;
        free(a);
    }
}
void main(){
    struct node *head=f;
    createNode(1);
    createNode(2);
    createNode(2);
    dequeue();
    dequeue();
    struct node *ptr=f;
    while(ptr!=NULL){
        printf("%d  ",ptr->data);
        ptr=ptr->next;
    }
}