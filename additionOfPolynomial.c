#include<stdio.h>
#include<stdlib.h>
struct node{
    float coef;
    int expo;
    struct node *next;
};
struct node *insert1(struct node*,float,int);
void print(struct node *);
void main(){
    struct node *head1=NULL;
    head1=insert1(head1,5,3);
    head1=insert1(head1,7,2);
    print(head1);
}
struct node *insert1(struct node *head1,float co,int ex){
    struct node *ptr=head1;
    struct node *p=malloc(sizeof(struct node));
        p->coef=co;
        p->expo=ex;
        p->next=NULL;
    if(head1==NULL){
       head1=p;
    }
    else{
        while(ptr->next!=NULL){
            ptr=ptr->next;
        }
        ptr->next=p;
    }
    return head1;
}
void print(struct node *head1){
    struct node *ptr=head1;
    while(ptr!=NULL){
        printf("%0.1fx^%d",ptr->coef,ptr->expo);
        ptr=ptr->next;
        if(ptr!=NULL)
        printf("+");
    }
}