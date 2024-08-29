#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n1;
    int n2;
    // n1 = 30;
    // n2 = 40;
    printf("Enter a number :");
    scanf("%d",&n1);
    printf("Enter a number :");
    scanf("%d",&n2);
    
    printf("addition is :%d\n",n1+n2);
    printf("substraction is :%d\n",n1-n2);
    printf("multiplication is :%d\n",n1*n2);
    printf("division is :%d\n",n1/n2);
    printf("remainder is :%d\n",n1%n2);

    return 0;
}
