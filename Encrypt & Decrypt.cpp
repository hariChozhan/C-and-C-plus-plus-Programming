#include<stdio.h>
#include<conio.h>
main()
{
    char a[500];
    int i;
    printf("\nString: ");
    gets(a);
	for(i=0;a[i];i++)
    {
        a[i]=a[i]+i;
    }
    printf("\n\nEncoded:%s",a);
    for(i=0;a[i];i++)
    {
        a[i]=a[i]-i;
    }
    printf("\n\n\nDecoded:%s",a);
    getch();
}

