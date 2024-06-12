#include<stdio.h>
#include<conio.h>
main()
{
    int a[20],i,j,n,min,temp;
    printf("Enter numbrler of elements :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the element %d : ",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
            {
                temp=a[j];
                a[j]=a[min];
                a[min]=temp;
            }
        }
    }
    printf("the sorted array is : ");
    for(i=0;i<n;i++)
    {
        printf("\t%d",a[i]);
    }
}

