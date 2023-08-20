#include<stdio.h>
void main()
{
    int a[10],i,j,size,temp;

    printf("Enter the size : ");
    scanf("%d",&size);

    if(size>10)
    printf("Size limit is exceeding !!");

    else
    {
        printf("Enter the elements\n");
        for(i=0;i<size;i++)
        {
            scanf("%d",&a[i]);
        }

        for(i=0;i<size-1;i++)
        {
            temp=a[i+1];
            for(j=i;j>=0;j--)
            {
                if(a[j]>temp)
                {
                    a[j+1]=a[j];
                    if(j==0)
                    {
                        a[j]=temp;
                    }
                }
                else
                {
                    a[j+1]=temp;
                    break;
                }
            }
        }
        printf("The sorted list is ");
        for(i=0;i<size;i++)
        {
            printf("%d ",a[i]);
        }
    }
}