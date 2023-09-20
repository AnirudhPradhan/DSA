#include<stdio.h>
int partition(int *,int,int);
void quicksort(int*,int,int);
void swap(int*,int*);
void main(){
    int a[]={35,50,15,25,80,20,90,45};
    int n=sizeof(a)/sizeof(a[0]);
    quicksort(a,0,n-1);
    for(int i=0;i<n;i++){
        printf("%d  ",a[i]);
    }
}
void quicksort(int* a,int p,int r){
    if(p<r){
        int q= partition(a,p,r);
        quicksort(a,p,q-1);
        quicksort(a,q+1,r);
    }
}
int partition(int*a, int p,int r){
    int i,j,pivot;
    i=p;
    pivot=p;
    j=r;
    do{
        while(a[i]<=a[pivot] && i<r){                                                                  
        i++;
    }
        while(a[j]>a[pivot]){
        j--;
    }
     if(i<j)
     swap(&a[i],&a[j]);
    }while(i<j);
    swap(&a[j],&a[pivot]);
    return j;
}

void swap(int *p,int* q){
    int temp=*p;
    *p=*q;
    *q=temp;
}