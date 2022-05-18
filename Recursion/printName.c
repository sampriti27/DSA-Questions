#include<stdio.h>
void f(int i,int N)
{
if(i>N)
return;
printf("sam \t");
f(i+1,N);

}
void main()
{
    int n;
    scanf("%d",&n);
    f(1,n);
}