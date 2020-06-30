#include<stdio.h>
int largest(int [],int);
int smallest(int [],int);
int main()
{
    int arr[30],size,large,i,small;
    printf("Enter the size of the array : ");
	scanf("%d",&size);
	printf("%d\n",size);
	printf("Enter the %d integer numbers: \n",size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
		printf("%d\t",arr[i]);
	}
    	large = largest(arr,size);
    	small = smallest(arr,size);
    	printf("\nThe largest element is: %d\n",large);
    	printf("The smallest element is: %d\n",small);
	return 0;
    	
}
int largest(int arr1[],int size1)
{
    	int templ,i;
    	templ=arr1[0];
    	for(i=1;i<size1;i++)
            	{
    			if(arr1[i]>templ)
    				templ=arr1[i];
    		}
    	return(templ);
}
int smallest(int arr2[],int size2)
{
    int temps,j;
    temps=arr2[0];
   for(j=0; j<size2; j++) 
   {
      if(temps>arr2[j])
      {
         temps=arr2[j];
      }
   }
   return(temps);
}

