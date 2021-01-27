#include<stdio.h>
#include<conio.h>

int main()
{
    int n1=0,n2=0;

    printf("\n Enter Two Numbers:");
    scanf("%d%d",&n1,&n2);

    printf("\n First Number Before Swapping:%d ",n1);
    printf("\n Second Number Before Swapping:%d ",n2);

    n1=n1+n2;
    n2=n1-n2;
    n1=n1-n2;

    printf("\n\n First Number After Swapping:%d ",n1);
    printf("\n Second Number After Swapping:%d ",n2);

    getch();
    return 0;
}
