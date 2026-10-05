// write a c programme to reverse the digits of whole num
#include<stdio.h>
int main(){
	int n,dig,rev=0;
	printf("enter a whole number : ");
	scanf("%d",&n);
	while(n!=0){
		dig=n%10;
		n=n/10;
		printf("%d\n",dig);
		rev=rev*10+dig;
	}
	printf("the reverse of the given digit is %d",rev);
	return 0;
}
