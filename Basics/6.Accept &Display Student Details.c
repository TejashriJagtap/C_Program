#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int Roll_no=0;
    char Name[70]="";
    float Per=0.0;
    char Grade='A';

    printf("\nEnter Student Details ");

    printf("\n\tEnter Student Roll Number =");
    scanf("%d",&Roll_no);

    printf("\n\tEnter Student Name =");
    scanf("%s",&Name);

    printf("\n\tEnter Student Percentage =");
    scanf("%f",&Per);

    printf("\n\tEnter Student's Grade =");
    scanf(" %c",&Grade);

    system("cls");

    printf("\nStudent's Information\n ");
    printf("\n=====================********=========================== \n");

    printf("\n\tRoll Number = %d.\n\tName       =%s.\n\tPercentage =%0.2f.\n\tGrade     =%c",Roll_no,Name,Per,Grade);

    printf("\n\n=====================********=========================== ");
}
