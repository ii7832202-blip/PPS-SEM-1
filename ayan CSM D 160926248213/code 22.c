#include<stdio.h>
int main ()
(
        float marks;
        printf("enter marks (0-100)   :  ");
        scanf("%f",&marks);
        if (marks<0 || marks>100)
            printf("invaled marks  .\n");
        else if(marks <40)
            printf( " result : fail\n");
            printf( " grade ; a+\n")
        else if (marks>=90)
            printf("result :pass with the distinct \n");
            printf( " grade a+\n")
        else if ( marks >=80)
            printf(" result : pass\n")
            printf("grade:a\n");
        else if (marks >=70)
            printf("result : pass\n")
            printf("grade:b+\n")
        else if (marks >=60)
            printf("result : pass\n");
            printf("grade:b\n")
        else if (marks>=50)
            printf("result:pass\n")
            printf("grade: c\n")
            else
            printf("result:pass\n")
            print()
