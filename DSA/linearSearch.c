//linear search
#include<stdio.h>
int search(int arr[],int N, int x){
	int i;
	for(i=0;i<N;i++){
		if(arr[i]==x) return i;
	}
	return -1;
}
//Driver code
int main(){
	int arr[100],n,x,i;
	printf("Enter the number of element to sort:");
	scanf("%d",&n);
	printf("Enter the sorted element:\n");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("\n");
	printf("Enter the pivot element:");
	scanf("%d",&x);
	int result ;
	result = search(arr,n,x);
	(result == -1)?printf("Element is not present in array"):printf("Element is present at index %d",result);
	return 0;
}
