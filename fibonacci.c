#include<stdio.h>
int main ()
{
    int i,fnum,snum,newn,n;
    fnum = 0;
    snum = 1;
    i = 1;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("%d %d ",fnum,snum);
    while (i <= n-2)
    {
        newn = fnum + snum;
        fnum = snum;
        snum = newn;
        printf("%d ",newn);   
        i= i + 1;
    }
    return 0;
}