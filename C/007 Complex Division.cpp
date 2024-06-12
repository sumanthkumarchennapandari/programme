// Write a C program to DIVIDE a set of numbers //
#include<stdio.h>
#include<conio.h>
#include<cmath>
main()
{
	int a[300],i,n;
	float quo;
	printf("How many numbers do you want to DIVIDE :");
	scanf("%d",&i);
	quo=0;
	for(n=0;n<i;n++)
	{
		printf("Enter Value %d =",n+1);
		scanf("%d",&a[i]);
		quo=quo/a[i];
	}
	printf("The Total Quouitent of the given %d Numbers is : %f",n,quo);
}
