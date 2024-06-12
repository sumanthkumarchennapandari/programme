#include<stdio.h>
#include<conio.h>
main()
{
	int a[20],n,i,j,temp,m;
	printf("Enter number of elements :");//Size of the array//
	scanf("%d",&n);
	for(i=0;i<n;i++)//taking input to the array//
	{
		printf("Enter the elememnt %d : ",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)//Bubble Sort//
	{
		for(j=0;j<n;j++)
		{
			if(a[j]>a[j+1])
			{
				temp = a[j];//Swapping//
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	printf("The sorted array is :");
	for(i=0;i<n;i++)//Printing onto the screen//
	{
		printf("\t%d",a[i+1]);
	}
}
