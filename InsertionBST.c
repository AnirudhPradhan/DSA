#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node * left;
    struct node * right;
};
struct node *createNode(int var){
    struct node *q=malloc(sizeof(struct node));
    q->data=var;
    q->right=NULL;
    q->left=NULL;
    return q;
}
void inorder(struct node *root){
    if(root!=NULL){
        inorder(root->left);
        printf("%d  ",root->data);
        inorder(root->right);
    }
}

void main(){
    struct node *p=createNode(9);
    struct node *p1=createNode(4);
    struct node *p2=createNode(11);
    struct node *p3=createNode(2);
    struct node *p4=createNode(7);
    p->left=p1;
    p->right=p2;
    p1->left=p3;
    p1->right=p4;
    //inorder(p);
    
}