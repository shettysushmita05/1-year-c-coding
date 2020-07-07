#include <stdio.h>
struct add
{
    int a;
    int b;
};
struct sum
{
    int s1;
    struct add a1;
};
int main()
{
    struct sum s;
    printf("Enter the two numbers\n");
    scanf("%d\n%d\n",&s.a1.a,&s.a1.b);
    printf("%d\n%d\n",s.a1.a,s.a1.b);
   s.s1=s.a1.a+s.a1.b;
    printf("\nsum of two numbers = %d",s.s1);
}

