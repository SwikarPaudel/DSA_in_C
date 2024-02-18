#include<stdio.h>
int fibo(int n){ 
	if(n==1) return 0;
	else if(n==2) return 1;
	else return (fibo(n-1)+fibo(n-2));
}
int main()
{
	int i,n,f;
	printf("Enter the number of terms n: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		f=fibo(i);
		printf("%d ",f);
	}
	return 0;
}

