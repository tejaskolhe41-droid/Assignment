Q) Program to print 5 times "Marvellous" on scrren
#include<stdio.h>

void Display()
{
    int i = 0;
    for (i = 1; i<= 5;i++)
    {

        printf("Marvellous\n");
    }
}

int main()
{
    Display ();
    return 0;
}



Q)Program to print 5 to 1 number on screen
 
#include <stdio.h>

void Display()
{
    int i = 0;
    i = 5;

    while (i >= 1)
    {
        printf("%d", i);
        i--;

    }
}
int main()
{
    Display();
    return 0;
}



Q)Accept one number and check whether is is divisible by 5 or not
#include <stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL Check (int iNo)
{
    if ((iNo % 5) == 0)
    {

        return TRUE;
    }
    else{
        return FALSE;
    }
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("enter number :");
    scanf("%d", &iValue);

    bRet = Check(iValue);
    if (bRet  == TRUE)
    {
        printf("divisible by 5");
    }
    else{
        printf("not by divisible by 5");
    }
    return 0;
}



Q)accept one number from user and print that number of *  on screen 
#include <stdio.h>

void Accept (int iNo)
{
    int iCnt = 0;

    for (iCnt = 1; iCnt <= iNo; iCnt++)

    {
        printf("*");
    }
}

int main()
{
int iValue = 0;
iValue = 5;

Accept (iValue);


return 0;
}
