#include<stdio.h>
void selectionsort(int*,int);
void main(){
    int a[7]={15,28,17,12,18,9,6};
    selectionsort(a,7);
    for(int i=0;i<7;i++){
        printf("%d ",a[i]);
    }
    }
void selectionsort(int *a,int n){
    int i,j,temp,key;
    for(i=0;i<n;i++){
        temp=i;
     for(int j=i+1;j<n;j++)
     { 
        if(a[temp]>a[j])
            temp=j;
     }
     //swap(&a[i],&a[j]);
      key=a[i];
      a[i]=a[temp];
      a[temp]=key;
    }
}