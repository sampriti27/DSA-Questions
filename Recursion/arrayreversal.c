#include<stdio.h>
// using 2 pointers

// void f(int l,int *arr,int r)
// {
//     if(l>=r)
//     return;
//     int x;
//     x=arr[l];
//     arr[l]=arr[r];
//     arr[r]=x;
//     f(l+1,arr,r-1);
// }
// void main()
// {
//     int arr[10],n,i;
//     scanf("%d",&n);
//     for(i=0;i<n;i++)
//     scanf("%d",&arr[i]);
//     f(0,arr,n);
//     for(i=0;i<n;i++)
//     printf("%d \t",arr[i]);
    
// }

// using single pointer
void f(int i,int arr[],int n)
{
if(i>=n/2)
return;
int x;
x=arr[i];
arr[i]=arr[n-i-1];
arr[n-1-i]=x;
f(i+1,arr,n);


} 
void main()
{
  int n,i,arr[10];
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  f(0,arr,n);
  for(i=0;i<n;i++)
  printf("%d \t",arr[i]);
}

