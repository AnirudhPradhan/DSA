#include<stdio.h>
#define size 5
int visited[size]={0,0,0,0,0};
int matrix[size][size]={
    {0,1,1,0,0},
    {1,0,0,0,1},
    {1,0,0,1,0},
    {0,1,1,0,0},
    {0,1,0,0,0}
    };
void DFS(int i){
    printf("%d ",i);
    visited[i]=1;
    for (int j = 0; j < size; j++)
    {
        if(matrix[i][j]==1 && visited[j]==0)
        DFS(j);
    }
    
}
void main(){
    DFS(0);
}