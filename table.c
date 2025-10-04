#include<stdio.h>
int main()
{
    int n;
    printf("Enter the digit whose table you want to print: ");
    scanf("%d",&n);
    for(int i = 1;i<11;i++)
    {
        printf("%d*%d=%d \n",n,i,i*n);
    }
    return 0;
}