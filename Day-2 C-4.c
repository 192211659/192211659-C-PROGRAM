#include<stdio.h>
int main()
{
	int age;
	printf("Enter the age: ");
	scanf("%d",&age);

	    if(age>=18)
            printf("your are elgible for vote!");
        else
            printf("your are not elgible for vote!");
	return 0;
}

