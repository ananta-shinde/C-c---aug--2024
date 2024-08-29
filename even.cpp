#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num;
    printf("Enter a number");
    scanf("%d",&num);
    if(num%2 == 0){
        printf("number is even");
    }
    if(num%2 != 0){
        printf("number is odd");
    }
    
    return 0;
}
