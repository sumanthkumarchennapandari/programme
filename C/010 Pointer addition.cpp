#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c;
	int *aptr,*bptr,*cptr;
	aptr=&a;
	bptr=&b;
	cptr=&c;
	printf("Enter the a Value : ");
	scanf("%d",&a);
	printf("\nEnter the b value : ");
	scanf("%d",&a);
	c=a+b;
	printf("\nThe sum of the numbers is = %d",c);
	printf("\n\nThe Addresses of the variables are as follows : ");
	printf("\n\t\t\t\t\t\taddress of variable a is %d",aptr);
	printf("\n\t\t\t\t\t\taddress of variable b is %d",bptr);
	printf("\n\t\t\t\t\t\taddress of variable c is %d",cptr);
}
