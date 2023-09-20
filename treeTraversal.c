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
void postorder(struct node *root){
    if(root!=NULL){
        postorder(root->left);
        postorder(root->right);
        printf("%d  ",root->data);
    }
}
void preorder(struct node *root){
    if(root!=NULL){
        printf("%d  ",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
void main(){
    struct node *p=createNode(1);
    struct node *p1=createNode(2);
    struct node *p2=createNode(3);
    struct node *p3=createNode(4);
    struct node *p4=createNode(5);
    p->left=p1;
    p->right=p2;
    p1->left=p3;
    p1->right=p4;
    inorder(p);
    printf("\n");
    postorder(p);
    printf("\n");
    preorder(p);
}