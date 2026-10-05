// write a c programme to print fibonacci series
#include<stdio.h>
int main(){
	int a=0,b=1,c=1,d,n,i=1;
	printf("enter number of terms ;");
	scanf("%d",&n);
	while(i<=n){
		printf("%d\n",a);
	    d=a+b+c;
	    a=b;
	    b=c;
	    c=d;
	    i++;
		
		
	}
	
	return 0;
}
