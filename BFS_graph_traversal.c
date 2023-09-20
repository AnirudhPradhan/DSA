#include<stdio.h>
#include<stdlib.h>
#define size 5
int queue[size];
int visited[size]={0,0,0,0,0};
int matrix[size][size]={
    {0,1,1,0,0},
    {1,0,0,0,1},
    {1,0,0,1,0},
    {0,1,1,0,0},
    {0,1,0,0,0}
    };
int f=-1;
int r=-1;
void enqueue(int *queue,int val){
    if(f==-1){
        f=r=0;
        queue[0]=val;
    }
    else{
        r++;
        queue[r]=val;
    }
}
int dequeue(int *queue){
    if(f==-1 || f>r){
        printf("Queue is empty\n");
        return -1;
    }
    else{
        int a=f;
        f++;
        return queue[a];
    }
}
void BFS(int i){
    printf("%d ",i);
    visited[i]=1;
    enqueue(queue,i);  
    while(r>=f){
        int current=dequeue(queue);
        for (int j= 0; j < 5; j++)
        {
            if(matrix[current][j]==1 && visited[j]==0){
                BFS(j);
                /*  OR
                printf("%d",j);
                visited[j]=1;
                enqueue(queue,j);
                */
            }
        }
    }
}
void main(){
    BFS(0);
}