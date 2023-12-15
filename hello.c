#include<stdio.h>
void bin(int num){
	int temp = num;
	int a[7];
	int i=0,j;
	while(temp!=0){
		a[i] = temp%2;
		temp /= 2;
		i++;
	}
	printf("\nBinary equivalent = ");
	for(j=i-1;j>=0;j--)
		printf("%d",a[j]);
}
void oct(int num){
	int temp = num;
	int b[7];
	int i=0,j;
	while(temp!=0){
		b[i] = temp % 8;
		temp /= 8;
		i++;
	}
	printf("\nOctal equivalent = ");
	for(j=i-1;j>=0;j--)
		printf("%d",b[j]);
}
int main(){
	int dec;
	printf("Enter a decimal number:");
	scanf("%d",&dec);
	bin(dec);
	oct(dec);
}
