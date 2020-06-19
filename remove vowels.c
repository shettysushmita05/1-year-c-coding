#include<stdio.h>
#include<string.h> 
int main() 
{	
	char s[20]; 
	int len, i, j; 	
	printf("Enter a string\n ");
	scanf("%s", &s);
	printf("%s",s);
	len=strlen(s); 	
	for(i=0; i<len; i++) 	
	{ 		
		if(s[i]=='a'||s[i]=='e'||s[i]=='i'|| 	s[i]=='o'||s[i]=='u'||s[i]=='A'|| 		s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U') 		  { 			
			for(j=i; j<len; j++) 			
			{ 				
				s[j]=s[j+1]; 			
			} 		
			len--; 
		} 	
	} 	
	printf("\nAfter deleting the vowels,the resultant string is\n %s",s); 	
}

