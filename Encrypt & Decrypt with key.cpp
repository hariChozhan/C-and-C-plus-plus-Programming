#include<stdio.h>
#include<conio.h>
main()
{
    char a[500],k;
    int i;
    printf("\nString: ");
    gets(a);
    printf("\nKey: ");
	scanf("%d",&k);
	for(i=0;a[i];i++)
    {
        a[i]=a[i]+k;
    }
    printf("\n\nEncoded:%s",a);
    for(i=0;a[i];i++)
    {
        a[i]=a[i]-k;
    }
    printf("\n\n\nDecoded:%s",a);
    getch();
}

