//Finding elements using InterpolationSearch 
#include<stdio.h>
#include<stdlib.h>
int BinarySearch(int arr[] , int size, int key) {
	int start = 0,end = size-1;
	int index = start + ((key - arr[start]) * (end-start)) / (arr[end] - arr[start]);
	return index;
}
void main() {
	int size,key;
	printf("Enter Size\n");
	scanf("%d",&size);
	int arr[size]; 
	printf("Enter Array Elements\n");
	for(int i=0;i<size;i++) {
		scanf("%d",&arr[i]);
	}
	printf("Enter Key\n");
	scanf("%d",&key);
	int p = BinarySearch(arr,size,key);
	if(p==-1) {
		printf("Element not exits in the array!!!\n");
		exit(0);
	}
	printf("%d is present in the array at index : %d\n",key,p);
}



