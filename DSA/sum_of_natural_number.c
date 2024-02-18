#include<stdio.h>
int sum(int n)
{
	if(n==0) return 0;
	else return (n+sum(n-1));
}
int main()
{
	int n;
	printf("Enter the number of term n:");
	scanf("%d",&n);
		if(n==0){
		printf("0 is not natural number");
		return 0;
	}
	printf("The sum of %d natural number is:%d",n,sum(n));
	return 0;
}
