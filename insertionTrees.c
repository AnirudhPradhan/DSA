#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *right;
    struct node *left;
};

struct node *createNode(int key){
    struct node *p=malloc(sizeof(struct node));
    p->data=key;
    p->left=NULL;
    p->right=NULL;
    return p;
}

struct node insertion(struct node *root,int item){
    struct node *ptr=NULL;
    while(root!=NULL){
        ptr=root;
        if(item < root->data){
            root=root->left;
        }
        else if (item > root->data){
            root=root->right;
        }
    }
        struct node *r=malloc(sizeof(struct node));
        r->data=item;
        if(r->data > ptr->data)
        ptr->right=r;
        else
        ptr->left=r;
    return *r;
}

void main(){
    struct node *p1=createNode(5);
    struct node *p2=createNode(3);
    struct node *p3=createNode(2);
    struct node *p4=createNode(1);
    struct node *p5=createNode(7);

    p1->left=p3;
    p1->right=p5;
    p3->left=p4;
    p3->right=p2;
    insertion(p1,4);
    printf("%d",p2->right->data);
}