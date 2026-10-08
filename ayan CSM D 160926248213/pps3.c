#include<stdio.h>
int main()
{
    int choice,units;
    float bill;

    printf("electricity bill calculator\n");
    printf("domestic bill\n");
    printf("commercial bill\n");
    printf("industrial bill\n");
    printf("enter your choice:");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        bill=units*2;
        printf("domestic bill=Rs.%2f",bill);
        break;

    case 2:
        bill =units*5;
        printf("commercial bill=Rs.%2f",bill);
        break;

    case 3:
        bill =units*8;
        printf("industrial bill=Rs.%2f",bill);
        break;
    default:
        printf("invalid choice");
}
return 0;
}
