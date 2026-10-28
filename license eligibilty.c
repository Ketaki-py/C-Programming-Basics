#include<stdio.h>
#include<conio.h>
 int main()
 {
     int age, tstsc, status;

    printf("Please enter age: ");
    scanf("%d", &age);

    if (age>=18)
        {
    printf("Enter test score: ");
    scanf("%d", tstsc);
        {
            if((tstsc>=60)&&(tstsc<=100)&&(tstsc!=0))
                printf("Eligible for license");
            else
                printf("Ineligible for license due to less score.");
        }
    printf("Please enter Learner's license status, 1 for yes, 0 for no: ");
    scanf("%d", &status);
    {
        if (status==1)
            printf("Eligible for license");
        else
            printf("Ineligible for license due to no license status.");
    }
    }
    else
        printf("Ineligible for license due to age being minor.");

    return 0;

 }
