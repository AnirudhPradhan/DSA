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
struct node *search (struct node *root,int key){
    if(root!=NULL){
        if (root->data==key){
            return root;
        }
        else if(root->data<key){
            return search(root->right,key);
        }
        else if(root->data>key)
            return search(root->left,key);
    }
    else 
    return NULL;
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
    struct node *value= search(p,8);
    if(value!=NULL)
    printf("%d found",value->data);
    else
    printf("Key not found");
}