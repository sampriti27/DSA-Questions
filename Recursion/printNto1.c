#include<stdio.h>
// by backtracking
// void f(int i,int N)
// {
//     if(i>N)
//     return;
//     f(i+1,N);
//     printf("%d \t",i);
// }
// void main()
// {
//     int n;
//     scanf("%d",&n);
//     f(1,n);
// }

// without backtracking 
void f(int i,int N)
{
    if(i<1)
    return;
    printf("%d \t",i);
    f(i-1,N);

}
void main()
{
    int n;
    scanf("%d",&n);
    f(n,n);
}