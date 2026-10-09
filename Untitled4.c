#include <stdio.h>
int main()
{
int age = 20;
float marks = 85.5;
char grade = 'a';
printf("age=%d\n",age);
printf("marks= %.2f\n",marks);
printf("grade=%c",grade);
printf("%zu\n",sizeof(age));
printf("%zu\n",sizeof(marks));
printf("%zu\n",sizeof(grade));
	
	return 0;
}
