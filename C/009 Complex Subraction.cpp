// Write a C program to SUBRACT a set of numbers //
#include<stdio.h>
#include<conio.h>
#include<cmath>
main()
{
	int a[300],i,n,dif;
	printf("How many numbers do you want to SUBRACT :");
	scanf("%d",&i);
	dif=0;
	for(n=0;n<i;n++)
	{
		printf("Enter Value %d =",n+1);
		scanf("%d",&a[i]);
		dif=dif-a[i];
	}
	printf("The Total Difference of the given %d Numbers is : %d",n,dif);
}
