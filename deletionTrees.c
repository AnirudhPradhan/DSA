#include<stdio.h>
#include<stdlib.h>
struct node
{
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

struct node *max(struct node *root){
    while(root && root->right!=NULL){
        root=root->right;
    }
    return root;
}

struct node *delete(struct node* root, int item){
    if(root==NULL){
        return root;
    }
    if(root->data > item){
        root->left = delete(root->left,item);
    }
    else if(root->data < item){
        root->right = delete(root->right,item);
    }
    else if( root->data==item){
        if(root->right==NULL){
            struct node *temp=root->left;
            free(root);
            return temp;
        }
        if(root->left==NULL){
            struct node *temp=root->right;
            free(root);
            return temp;
        }
        struct node *temp= max(root->left);
        root->data=temp->data;
        root->left=delete(root->left,temp->data);
    }
}

void inorder(struct node *root){
    if(root!=NULL){
        inorder(root->left);
        printf("%d  ",root->data);
        inorder(root->right);
    }
}

void main(){
    struct node *p=createNode(5);
    struct node *p1=createNode(2);
    struct node *p2=createNode(1);
    struct node *p3=createNode(3);
    struct node *p4=createNode(7);

    p->left=p1;
    p->right=p4;
    p1->left=p2;
    p1->right=p3;
    delete(p,5);
    inorder(p);
}