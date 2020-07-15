#include <stdio.h>
#include<stdlib.h>
int main()
{
    int num1,num2;
    int *n1,*n2;
    n1=&num1;
    n2=&num2;
    float result=0;
    char ch;
    printf("Enter the first number\n");
    scanf("%d",&num1);
    printf("%d\n",num1);
    printf("Enter the sceond number\n");
    scanf("%d",&num2);
    printf("%d\n",num2);
    printf("Choose operator to perform (+,-,*,/,%)\n");
    scanf(" %c\n",&ch);
    printf(" %c\n",ch);
    switch(ch)
    {
        case '+': result=*n1 + *n2;
        printf("%d%c%d=%.4f\n",*n1,ch,*n2,result);
        break;
        case '-': result=*n1 - *n2;
        printf("%d%c%d=%.4f\n",*n1,ch,*n2,result);
        break;
        case '*': result= *n1 * *n2;
        printf("%d%c%d=%.4f\n",*n1,ch,*n2,result);
        break;
        case '/': if(*n2==0)
        {
            printf("math error\n");
            break;
        }
        else
        {
            result=(float)*n1 / (float)*n2;
            printf("%d%c%d=%.4f\n",*n1,ch,*n2,result);
            break;
        }
        case '%': result=*n1 % *n2;
        printf("%d%c%d=%.4f\n",*n1,ch,*n2,result);
        break;
        default:printf("Invalid operation\n");
        exit(0);
    }
}

