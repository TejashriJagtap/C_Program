#include<stdio.h>
#include<conio.h>

int main()
{
    int RN=0,CN=0,SNo=0,ENo=0;

    printf("\n Enter The Table Range From & To =\n\n");
    scanf("%d%d",&SNo,&ENo);

    printf("\n Table From %d To %d=\n\n",SNo,ENo);
    for(RN=1;RN<=10;RN++)
    {
        for(CN=SNo;CN<=ENo;CN++)
        {
            printf("%3d",CN*RN);
        }
     printf("\n");
    }
    getch();
    return 0;
}
