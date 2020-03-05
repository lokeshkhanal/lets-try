#include<stdio.h>
int g(int a,int b,int c)
{
    int g;
    if(a>b && a>c)
    return a;
    else if(b>a && b>c)
    return b;
    else 
    return c;

}
int main()
{
    int a,b,c,greatest;
    printf("enter any number:");
    scanf("%d%d%d",&a,&b,&c);
    greatest=g(a,b,c);
    printf("the greatest num is:%d",greatest);
    return 0;
    }