#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num;
    printf("Enter a signle digit number :");
    scanf("%d",&num);

     switch(num){
        case 0 : printf("ZERO");
            break;
        case 1 : printf("ONE");
            break;
        case 4 : printf("FOUR");
            break;
        case 2 : printf("TWO");
            break;
        case 3 : printf("ThREE");
            break;
        default:printf("Invalid input");
     }

    return 0;
}
