/*
    Problem Statement : Write a program which accept string from user and convert it into
                        upper case.

                        Input : “Marvellous Multi OS”
                        Output : MARVELLOUS MULTI OS
*/

#include "Header.h"

int main()
{
    char cValue[20];

    printf("Enter a String\n");
    scanf("%[^'\n']s",&cValue);

    struprx(cValue);

    printf("Modified String is %s\n",cValue);
    return 0;
}