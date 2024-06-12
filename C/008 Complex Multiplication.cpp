// Write a C program to MULTIPLY a set of numbers //
#include<stdio.h>
#include<conio.h>
#include<cmath>
main()
{
	int a[300],i,n,pro;
	printf("How many numbers do you want to MULTIPLY :");
	scanf("%d",&i);
	pro=1;
	for(n=0;n<i;n++)
	{
		printf("Enter Value %d =",n+1);
		scanf("%d",&a[i]);
		pro=pro*a[i];
	}
	printf("The Total Product of the given %d Numbers is : %d",n,pro);
}
