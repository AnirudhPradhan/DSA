#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node *createNode(int key){
    struct node *p=malloc(sizeof(struct node));
    p->data=key;
    p->next=NULL;
    return p;
}
struct node *reverse(struct node*head){
    struct node*cur,*temp,*prev;
    cur=head;
    prev=NULL;
    while(cur!=NULL){
        temp=cur->next;
        cur->next=prev;
        prev=cur;
        cur=temp;
    }
    return prev;
}

void print(struct node *head){
    if(head==NULL) return;
    print(head->next);
    printf("%d  ",head->data);
}

void main(){
    struct node* head;
    struct node *p1=createNode(1);
    struct node *p2=createNode(2);
    struct node *p3=createNode(3);
    head=p1;
    p1->next=p2;
    p2->next=p3;
    print(head);
    printf("\n");
    head=reverse(head);
    struct node *ptr=head;
    while(ptr!=NULL){
        printf("%d  ",ptr->data);
        ptr=ptr->next;
    }
}
