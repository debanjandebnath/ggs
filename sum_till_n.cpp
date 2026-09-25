//WACP to
#include<stdio.h>
int main(){
	int i=1,n,j;
	long int sum=0, fact;
	printf("enter n ");
	scanf("%d", &n);
	while (i<=n){
		fact =1;
		j=1;
		while (j<=i){
			fact =fact*j;
			j++;
		}
		sum = sum+fact;
		j++;
		i=i+2;
	}
	printf("%d",sum);
  return 0;
  
}
