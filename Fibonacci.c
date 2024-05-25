#include<Stdio.h>
#include<conio.h>
void main()
{
    int i,n,n1=0,n2=1,n3;
    printf("enter the value of n : ");
    scanf("%d", &n);
    printf("%d\t%d\t", n1,n2);
    for (i=2;i<n;i++)
    {
        n3 = n1+n2;
        printf("%d \t", n3);
        n1=n2;
        n2=n3;
    }
    getch();
}
