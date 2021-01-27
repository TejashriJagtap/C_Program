#include<stdio.h>
#include<conio.h>

int main()
{
    int sal=0,stud=0;

    printf("\n Enter Your Salary =");
    scanf("%d",&sal);

    printf("\n Enter 1 if you are student= ");
    scanf("%d",&stud);

    if(sal<=0)
    {
        if(stud==1)
        {
            printf("\n Candidate Is Student");
        }
        else
        {
            printf("\n Candidate Is Fresher");
        }
    }
    else
    {
        if(stud>50000)
        {
            printf("\n Candidate Is An Expert Employee");
        }
        else
        {
            printf("\n Candidate Is An Beginner Employee");
        }
    }

    printf("\n Thanks For Interacting");

    getch();

    return 0;
}
