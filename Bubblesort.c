#include<stdio.h>
#include<stdlib.h>
int main(){
	int a[50],size,i,j,temp,flag;
	printf("Enter the total no of elements(with in 50) : ");
	scanf("%d",&size);
	if(size>50)
	{
		printf("Exceeding the size !!");
	}
	else
	{
		printf("\nEnter the elements");
		for(j=0;j<size;j++)
		{
			scanf("%d",&a[j]);
		}
		
		for(i=1;i<=size-1;i++)
		{
			printf("NO %d PASS IS ",i);
			for(j=0;j<=size-2;j++)
			{
				if(a[j]>a[j+1])
				{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1]=temp;
				}
				printf("%d ",a[j]);
				if(j==size-2)
				printf("%d",a[j+1]);
			}
			printf("\n");
		}
	printf("The sorted array is : ");
	for(j=0;j<size;j++)
	{
		printf("%d ",a[j]);
	}
	}
	
}