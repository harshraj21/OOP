#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define size 50

void sel(int *arr,int n){
	int i,min=0;	
	for(i=0;i<n;i++){
		if(min>arr[i]){
			min=arr[i];		
		}
	}
}

void main(){
	int n,i;
	int arr[size];
	printf("Enter the number of element: ");
	scanf("%d",&n);
	printf("Enter the Unsorted Arry: ");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	sel(arr,n);
}

/****************************WORK IN PROGRESS************************/
