#include<stdio.h>
/* Insertion 
void main(){
    int arr[5]={8,7,3,5},p=2,i,temp=0;
    for(i=5;i>=2;i--){
        arr[i+1]=arr[i];
    }
    arr[2]=18;
    for(i=0;i<5;i++){
        printf("%d  ",arr[i]);
    }
}*/
/*
void deletion(int* );
void main(){
    int arr[]={8,7,3,5};
    deletion(arr);
}
void deletion(int *x){
    for(int i=2;i<5;i++){
        x[i]=x[i+1];
    }
    for(int i=0;i<5;i++){
        printf("%d  ",x[i]);
    }
}*/
/*void sort(int*);
void main(){
    int arr[5]={1,5,9,2,15};
    sort(arr);
}
void sort(int *arr){
    // for(int i=2;i<5;i++){
    int i,j,temp;
    // j=i+1;
    // temp=arr[j];
    // while(arr[i]>temp && i>=0){
    //     arr[i]=arr[i+1];
    //     i++;
    // }
    // arr[i+1]=temp;
    // }int temp, j;
        temp = arr[i];
        j = i - 1;
        while ((temp < arr[j]) && (j >= 0))
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = temp;

    for(int i=0;i<5;i++){
        printf("%d  ",arr[i]);
    }
}*/
/*
//void search(int *);
void main(){
    int a[7]={4,6,3,1,7};
    //search(a);
     int i=2,k=0,temp=a[0];
    //  for(i=0;i<5;i++){
    //  if(a[i]<temp && i>0){
    //     temp=a[i];
    //  }}
    while(i<5){
        if(a[i]<temp && i>0){
        temp=a[i];
        k=i;
        }
        i++;
    }
    printf("Position=%d",k);

}
// void search(int *a){
//     int i=1,temp=a[0];
//     while(a[i]<temp && i>0){
//         temp=a[i];
//         i=i+1;
//     }
//     printf("Position=%d",temp);
// }*/

/*void main(){
    int a[]={1,4,5,8,9};
    int b[]={2,3,6,7,10};
    int c[10];
    int r;
    for(int i=0;i<5;i+2){
        r=(a[i]<b[i])?a[i]:b[i];
        c[i]=r;
        // t=(a[i]<b[i])?b[i]:a[i];
        // c[i+1]=t;
    }
    for(int i=0;i<5;i++){
        printf("%d   ",c[i]);
    }
}
*/


