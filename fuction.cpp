#include<stdio.h>
int sum(int a,int b)
{
    int sum;
    sum=a+b;
    return sum;
}
int main()
{
    int a,b,s;
    printf("enter any two numbers:");
    scanf("%d %d",&a,&b);
    s=sum(a,b);
    printf("%d sum",s);
    return 0;
}