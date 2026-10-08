#include<stdio.h>
int main(){
    int i;
    for(i=1;i<=20;i++)
    {
     int a, b, sum;

        printf("Enter two numbers: ");
        scanf("%d %d", &a, &b);

        sum = a + b;

        printf("The sum is %d\n", sum);
    }
    return 0;
}
