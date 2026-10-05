// write a c programme to count the digits of a whole number
#include<stdio.h>
int main(){
	int n,dig,sum=0;
	printf("enter a whole number : ");
	scanf("%d",&n);
	while(n!=0){
		dig=n%10;
		n=n/10;
		sum=sum+1;
	}
	printf("the sum of digit is %d",sum);
	return 0;
}
