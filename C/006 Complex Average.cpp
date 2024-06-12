//Program for the average of the n numbers //
#include<stdio.h>
main()
{
	int a[200],sum,avg,n,i;
	printf("How Many numbers dou you want to find the average of : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter number %d : ",i+1);
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	printf("the sum of the given Numbers is : %d\n",sum);
	avg=sum/n;
	printf("The Average of the given Numbers : %d",avg);
}
