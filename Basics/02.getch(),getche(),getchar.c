#include<stdio.h>
#include<conio.h>

int main()
{
    char c ='\0';  // \0 Represent Null

    c=getchar();   // getchar() accept character display it stop accepting after enter display first character

    printf("\n Welcome To India!!!!!!\n");
    printf("\nValue Of Given Character=%c",c);

    getche();         // getche() accept character display it to output screen
    getch();          //getch() accept character does't display....pouse the program for input character

    return 0;
}
