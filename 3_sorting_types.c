#include<stdio.h>
void print_array(int a[],int size){
	int i;
	for(i=0;i<size;i++)
		printf("%d ",a[i]);
}
void swap(int *x,int *y){
	int temp = *x;
	*x = *y;
	*y = temp;
}
void bubble_sort(int a[],int size){
	int i,j;
	for(i=0;i<size-1;i++){
		for(j=0;j<size-i-1;j++){
			if(a[j] > a[j+1])
				swap(&a[j],&a[j+1]);
		}
	}
}
void selection_sort(int a[],int size){
	int i,j,min_i;
	for(i=0;i<size-1;i++){
		min_i = i;
		for(j=i+1;j<size;j++){
			if(a[j] < a[min_i])
				min_i = j;
		}
		swap(&a[i],&a[min_i]);
	}
}
void insertion_sort(int a[],int size){
	int i,j,change;
	for(i=1;i<size;i++){
		change = a[i];
		for(j=i-1;j>=0 && a[j] > change;j--)
			a[j+1] = a[j];
		a[j+1] = change; 
	}
}
int main(){
	int i,op,n;
	printf("Enter the size:");
	scanf("%d",&n);
	int a[n];
	printf("Enter the array:");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	print_array(a,n);
	printf("Enter 1-bubble,2-selection,3-insertion:");
	scanf("%d",&op);
	switch(op){
		case 1:
			bubble_sort(a,n);
			break;
		case 2:
			selection_sort(a,n);
			break;
		case 3:
			insertion_sort(a,n);
			break;
		default:
			break;
	}
	print_array(a,n);
	return 0;
}
