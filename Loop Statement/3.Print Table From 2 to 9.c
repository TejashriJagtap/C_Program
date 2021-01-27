#include<stdio.h>
#include<conio.h>

int main()
{
    int RN=0,CN=0;

    printf("\n Print Table From 2 To 9 =\n\n");

    for(RN=1;RN<=10;RN++)
    {
        for(CN=2;CN<=9;CN++)
        {
            printf("%3d",CN*RN);
        }
     printf("\n");
    }
    getch();
    return 0;
}
