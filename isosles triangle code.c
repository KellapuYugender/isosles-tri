#include<stdio.h>
#include<conio.h>

void main() 
{
 int n;
 int a,b,c;

clrscr();

printf("enter the no of sides:\n");
scanf("%d",&n);

if(n==3)
{
    printf("enter all the sides a,b,c:\n");
    scanf("%d%d%d",&a,&b,&c);

    if((a==b)||(a==c)||(b==c))
    {
        printf("it is isosles triangle\n");
    }
    else
    {
        printf("it is not isosles triangle\n");
    }
    
}
else
{
    printf("it is not triangle\n");
}


}



