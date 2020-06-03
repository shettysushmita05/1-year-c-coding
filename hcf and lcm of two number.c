#include<stdio.h>

int main()

{
    
   int a,b,gcd,lcm,rem,num,deno;

   printf("enter two numbers\n");
  
   scanf("%d\n%d",&a,&b);
  
   printf("%d\n%d\n",a,b);

   if(a>b)
  
  {
    num=a;

       deno=b;
   
  }
    
  else
  
  {
     num=b;
      
        deno=a;
 
  }
 
    rem=num%deno;
 
    while(rem!=0)
 
   {
    
       num=deno;
    
       deno=rem;
  
       rem=num%deno;
 
   }
    
    gcd=deno;
    
    lcm=(a*b)/gcd;
    
    printf("gcd of %d and %d=%d\n",a,b,gcd);

    printf("lcm of %d and %d=%d\n",a,b,lcm);

}