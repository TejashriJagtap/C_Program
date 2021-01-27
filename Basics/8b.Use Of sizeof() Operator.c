#include<stdio.h>
#include<conio.h>

int main()
{
    int n=33;
    char ch='k';

    printf("\n Size For Given Integer In This Environment is %d Byte",sizeof(n));
    printf("\n Size For Given Character In This Environment is %d Byte",sizeof(ch));

    printf("\n\n=========================================================");

    printf("\n\n Size For Integer Data type In This Environment is %d Byte",sizeof(int));
    printf("\n\n Size For Short Integer Data type In This Environment is %d Byte",sizeof(short int));
    printf("\n\n Size For Long Integer Data type In This Environment is %d Byte",sizeof(long int));
    printf("\n\n Size For Unsigned Integer Data type In This Environment is %d Byte",sizeof(unsigned int));
    printf("\n\n Size For Float Data type In This Environment is %d Byte",sizeof(float));
    printf("\n\n Size For Character Data type In This Environment is %d Byte",sizeof(char));
    printf("\n\n Size For Double Data type In This Environment is %d Byte",sizeof(double));

    getch();
    return 0;
}
