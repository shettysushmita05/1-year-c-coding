#include<stdio.h>
struct addition
{
    int a;
    int b;
};
void add(struct addition p);
void main()
{
    struct addition p;
    printf("Enter the value of a and b\n");
    scanf("%d\n%d",&p.a,&p.b);
    printf("%d\n%d",p.a,p.b);
    add(p);
}
void add(struct addition p)
{
    int sum;
    sum=p.a+p.b;
    printf("\nSum of %d",sum);
}

