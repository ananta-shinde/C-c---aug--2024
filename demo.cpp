#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num = 120;  //initialization
    int count;  // declaration
    char note;
    printf("%d\t",num); // reading variable
    num = 250; // updation
    printf("%d\t",num);
    printf("enter a number :");
    scanf("%d",&num); // updation 
    printf("enter a character :");
    scanf("%c",&note); // updation 
    printf("%d\t",num);
    printf("%s\t","20");
    printf("%c",note);
    return 0;
}
