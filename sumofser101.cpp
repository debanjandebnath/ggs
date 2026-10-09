//write a c program to find the sum of the following series 1+10+101+1010... 
#include <stdio.h>
int main(){
	int n , s=0 , i=1 ,m;
	printf("enter the number of terms : ");
	scanf("%d",&n);
	while(i<=n){
		if(i%2==0){
			s=s*10;
		} else {
			s=(s*10)+1;
		}
		m=m+s;
		i++;
	}printf("%d",m);
	return 0;
}
