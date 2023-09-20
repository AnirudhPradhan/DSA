#include<stdio.h>
#include<stdlib.h>
/*..........................Create Linked List...............................
    struct node{
    int data;
    struct node *link;
};
void count_elements(struct node*);
void main(){
    struct node *p=malloc(sizeof(struct node)),*head,*q;
    q=malloc(sizeof(struct node));
    head=p;
    p->data=64;
    p->link=q;
    q->data=88;
    p->link->link=NULL; // or q.link=NULL;
    printf("%d\n",q->data);

    count_elements(head);
}
............................Count and print the linked list...........................
void count_elements(struct node* head){
    int count=0;
    if(head==NULL)
    printf("Linked list is empty");
    struct node *ptr=NULL;
    ptr=head;
    while(ptr!=NULL){
        //count++;
        printf("%d  ",ptr->data);
        ptr=ptr->link;
    }
    //printf("%d",count);
}*/
//...........................Form multiple linked list...........................
/*struct node{
    int data;
    struct node *link;
};
void main(){
    struct node *head,*p=malloc(sizeof(struct node)),*q,*ptr=malloc(sizeof(struct node)),*t;
    int item;
    head=p;
    for(int i=0;i<5;i++){
        scanf("%d",&item);
        p->data=item;
        q=malloc(sizeof(struct node));
        p->link=q;
        p=q;
    }
    q->link=NULL;
    ptr=head;*/
    /*while(ptr!=NULL){
        printf("%d  ",ptr->data);
        ptr=ptr->link;
    }*/
    
    /*............................Inserting element in first position..........................
    struct node *a=malloc(sizeof(struct node));
    a->data=8;
    a->link=head;
    head=a;
    while(head->link!=NULL){
        printf("%d  ",head->data);
        head=head->link;
    }*/

    /*............................Inserting element at the end position..........................
    while(ptr->link!=NULL){
        ptr=ptr->link;
    }
    struct node *a=malloc(sizeof(struct node));
    ptr->link=a;
    ptr->data=8;
    a->link=NULL;
    ptr=head;
     while(ptr->link!=NULL){
        printf("%d  ",ptr->data);
        ptr = ptr->link;
    }*/

    //.............................Inserting element after a particular element.....................
    /*while(ptr->data!=3){
        ptr=ptr->link;
    }
    t=ptr->link;
    struct node *a=malloc(sizeof(struct node));
    ptr->link=a;
    a->data=7;
    a->link=t;
    ptr=head;
    while(ptr->link!=NULL){
        printf("%d  ",ptr->data);
        ptr = ptr->link;
    }*/

/*struct node{
    int data;
    struct node *link;
};
void main(){
    struct node *head=NULL,*p=malloc(sizeof(struct node)),*ptr=NULL,*q;
    int item;
    head=p;
    for(int i=0;i<5;i++){
        scanf("%d",&item);
        q=malloc(sizeof(struct node));
        p->data=item;
        p->link=q;
        p=q;   
    }
    q->link=NULL;
    ptr=head;
    while(ptr->link!=NULL){
        ptr=ptr->link;
    }
    //free(ptr->link->link);
    ptr->link=NULL;
    ptr=head;
    while(ptr->link!=NULL){
        printf("%d  ",ptr->data);
        ptr=ptr->link;
    }
}*/
// #include<stdio.h>
// #include<stdlib.h>
/*struct node{
    int data;
    struct node *next;
};

int main(){
    struct node *head,*p,*q;
    int item,n;
    head=p;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&item);
        q=malloc(sizeof(struct node));
        p->data=item;
        p->next=q;
        p=q;
    }
    q->next=NULL;
    struct node *ptr,*cur=head,*prev=NULL;
    while(cur->next!=NULL){
        struct node*temp=cur->next;
        cur->next=prev;
        prev=cur;
        cur=temp;
    }
    head=prev;
    ptr=head;
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
    return 0;
}*/
/*
struct node{
    int data;
    struct node *next;
};
void findll(struct node*);
void main(){
    struct node* p=malloc(sizeof(struct node)),*q,*head;
    int i,item,n;
    head=p;
    scanf("%d",&n);
    for (i=0;i<n;i++){
        scanf("%d",&item);
        q=malloc(sizeof(struct node));
        p->data=item;
        p->next=q;
        p=q;
    }
    q->next=NULL;
    findll(head);
}
void findll(struct node *head){
    struct node *slow=head,*fast=head;
    while(fast!=NULL && fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
    }
    printf("%d",slow->data);
}
*/
/*
struct node{
    int data;
    struct node* link;
};
void delete(struct node* head);
void main(){
    struct node *head=NULL,*p=malloc(sizeof(struct node)),*q,*ptr;
    head=p;
    int item;
    int n; scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&item);
        q=malloc(sizeof(struct node));
        p->data=item;
        p->link=q;
        p=q;
    }
    q->link=NULL;
    delete(head);
    ptr=head;
    while(ptr->link!=NULL){
        printf("%d  ",ptr->data);
        ptr=ptr->link;
    }
}

void delete(struct node*head){
    struct node *ptr,*p,*r;
    ptr=head;
    while(ptr->link->data!=3){
        ptr=ptr->link;
    }
    p=ptr->link;
    r=ptr->link->link;
    ptr->link=r;
    free(p);
}
struct node{
    int data;
    struct node *next;
};
struct node insert(struct node*);
void main(){
    struct node *head=NULL,*p=malloc(sizeof(struct node)),*q,*ptr;
    head=p;
    int item;
    for(int i=0;i<5;i++){
        scanf("%d",&item);
        q=malloc(sizeof(struct node));
        p->data=item;
        p->next=q;
        p=q;
    }
    q->next=head;
    insert(head);
    ptr=head;
    while(ptr->next!=head){
        printf("%d  ",ptr->data);
        ptr=ptr->next;
    }
}
struct node insert(struct node* head){
    struct node *ptr,*a,*q=NULL;
    a=malloc(sizeof(struct node));
    a->data=4;
    ptr=head;
    while(ptr->data!=3){
        ptr=ptr->next;
    }
    q=ptr->next;
    ptr->next=a;
    a->next=q;
}
*/
struct node{
    int data;
    struct node *next;
};
struct node *insert(struct node *,int);
struct node *delete(struct node*);
struct node count(struct node *);
void main(){
    struct node *head=NULL,*ptr=NULL;
    head=insert(head,1);
    head=insert(head,2);
    head=insert(head,3);
    head=insert(head,4);
    head=delete(head);
    ptr=head;
    do{
        printf("%d  ",ptr->data);
        ptr=ptr->next;
    }while(ptr!=head);
    printf("\n");
    count(head);
}
struct node *insert(struct node*head,int var){
    struct node *q=malloc(sizeof(struct node));
    struct node *ptr=head;
    q->data=var;
    q->next=NULL;
    if(head==NULL){
    head=q;
    q->next=head;
    }
    else{
        while(ptr->next!=head){
            ptr=ptr->next;
        }
        ptr->next=q;
        q->next=head;
    }
    return head;
}
struct node *delete(struct node *head){
    struct node *p=malloc(sizeof(struct node)),*ptr=head;
    while(ptr->next->next!=head){
        ptr=ptr->next;
    }
    p=ptr->next;
    ptr->next=head;
    free(p);
    return head;
}
struct node count(struct node *head){
    int number=0;
    struct node *ptr=head;
    do{
        number++;
        ptr=ptr->next;
    }while(ptr!=head);
    printf("%d",number);
}