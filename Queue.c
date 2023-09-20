#include<stdio.h>
#include<stdlib.h>
/*struct node{
    int data;
    struct node* next;
};
struct node *f=NULL;
struct node *r=NULL;
void insert(int);
void main(){
    insert(5);
    insert(6);
    struct node* ptr=malloc(sizeof(struct node));
    ptr=f;
    while(ptr!=NULL){
        printf("%d  ",ptr->data);
        ptr=ptr->next;
    }
}
void insert(int val){
    struct node *newp=malloc(sizeof(struct node));
    newp->data=val;
    newp->next=NULL;
    if(f==NULL){
        f=r=newp;
    }
    else{
        r->next=newp;
        r=newp;
    }
}*/
/*
struct node{
    int data;
    struct node* next;
};
struct node *f=NULL;
struct node *r=NULL;
void delete();
void insert (int);
void main(){
    insert(1);
    insert(2);
    insert(3);
    delete();
    delete();
    struct node *ptr=NULL;
    ptr=f;
    while(ptr!=NULL){
        printf("%d  ",ptr->data);
        ptr=ptr->next;
    }
}
void insert(int val){
    struct node *p=malloc(sizeof(struct node));
    p->data=val;
    p->next=NULL;
    if(f==NULL){
        f=r=p;
    }
    else{
        r->next=p;
        r=p;
    }
}
void delete(){
    struct node*p=malloc(sizeof(struct node));
    p=f;
    if(f==r){
        f=r=NULL;
        free(p);
    }
    else{
        f=f->next;
        free(p);
    }
}
*/
#define size 5
int f=-1;
int r=-1;
int insert(int*,int);
void main(){
    int a[size];
    insert(a,4);
    insert(a,5);
    insert(a,6);
    insert(a,7);
    insert(a,8);
    insert(a,9);
    for(int i=0;i<size+1;i++){
        printf("%d  ",a[i]);
    }
}
int insert(int *a,int val){
    if(f==-1){
        f=r=0;
        a[f]=val;
    }
    // else if(r=size-1){
    //     printf("Queue is full");
    //     return -1;
    // }
    else{
        r++;
        a[r]=val;
    }
}