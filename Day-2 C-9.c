#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value n: ");
    scanf("%d",&n);
    if(n==0)
    printf("neither positive or negative");
    else if(n<0)
    printf("negitive");
    else
    printf("positive");
    return 0;
}
