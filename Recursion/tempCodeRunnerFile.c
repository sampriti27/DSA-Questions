void f(int i,int N)
{
if(i<1)
return;
f(i-1,N);
printf("%d \t",i);
}
void main()
{
    int n;
    scanf("%d",&n);
    f(n,n);
}