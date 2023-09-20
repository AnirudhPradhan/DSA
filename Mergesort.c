#include<stdio.h>
void mergesort(int*,int,int);
void merge(int*,int,int,int);
void main(){
    int a[]={6,4,2,1,9,8,3,5};
    int n=sizeof(a)/sizeof(a[0]);
    mergesort(a,0,n-1);
    for(int i=0; i<n; i++) {
        printf("%d ", a[i]);
    }
}
void mergesort(int*a,int p,int r){
    if(p<r){
        int q=(p+r)/2;
        mergesort(a,p,q);
        mergesort(a,q+1,r);
        merge(a,p,q,r);
    }
}
void merge(int*a,int p,int q,int r){
    int i,j,b[r],k=0;
    i=p;
    j=q+1;
    while(i<=q && j<=r){
        if(a[i]<a[j]){
            b[k]=a[i];
            k++;i++;
        }
        else if(a[i]>a[j]){
            b[k]=a[j];
            k++;j++;
        }
    }
    while(i<=q){
        b[k]=a[i];
        i++;k++;
    }
    while(j<=r){
        b[k]=a[j];
        k++;j++;
    }
    for (i = p; i <= r; i++) {
        a[i] = b[i-p];
    }
}