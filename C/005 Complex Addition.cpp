// Write a C program to Add a set of numbers //
#include<stdio.h>
#include<conio.h>
#include<cmath>
main()
{
	int a[300],i,n,sum;
	printf("How many numbers do you want to ADD :");
	scanf("%d",&i);
	sum=0;
	for(n=0;n<i;n++)
	{
		printf("Enter Value %d =",n+1);
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	printf("The Total sum of the given %d Numbers is : %d",n,sum);
}
