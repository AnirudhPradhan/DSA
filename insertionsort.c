#include<stdio.h>
void insertionsort(int*,int);
void main(){
    int a[6]={10,45,2,6,27,11};
    insertionsort(a,6);
}
void insertionsort(int *a,int n){
    int i,j,item;
    for(i=1;i<=n-1;i++){
      item=a[i];
      j=i-1;
      while(j>=0 && a[j]>item){
        a[j+1]=a[j];
        j--;
      }
      a[j+1]=item;
    }
    for(i=0;i<n;i++){
        printf("%d  ",a[i]);
    }
}
