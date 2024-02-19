//Selection sort
#include<stdio.h>
#include<conio.h>
void selectionSort(int array[],int size){
	int i,j, imin;
	for(i=0;i<size-1;i++){
		imin = i; //get index of minimum data
		for(j=i+1;j<size;j++){
			if(array[j]<array[imin]){
				imin=j;
			}
		}
		//placing in correct position
		int temp;
		temp = array[i];
		array[i] = array[imin];
		array[imin] = temp;
	}
}
int main(){
	int i,n,a[100];
	printf("Enter the number of element to sort:");
	scanf("%d",&n);
	printf("Enter the elements to be sorted:\n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Array before sorting:\n");
	for(i=0;i<n;i++){
		printf("%d",a[i]);
	}
	
	selectionSort(a,n);
	printf("\n");
	printf("Array after sorting:\n");
	for(i=0;i<n;i++){
		printf("%d",a[i]);
	}
	printf("\n");
}
