///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Display
// Parameters    : String
// Return Value  : None
// Description   : It takes filename as input and display only information of that student who has even marks from file
// Author        : Swapnil Ramesh Adhav
// Date          : 27th Sept 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

void Display(char *filename)
{
	int iFd = 0;
	int iRet = 0;
	int iDisplay = 0;
	
	struct Student stud;

	iFd = open(filename,O_RDONLY);
	if(iFd==-1)
	{
		printf("Error : Unable to open %s\n",filename);
		return ;
	}
	else
	{
		while((iRet = read(iFd,&stud,sizeof(stud)))!=0)
		{
			if((stud.marks%2)==0)
			{
				printf("Student name : %s\n",stud.name);
				printf("Roll no : %d\n",stud.rollno);
				printf("Marks : %d\n",stud.marks);
				iDisplay = 1;
			}
		}
	}
	if(iDisplay==0)
	{
		printf("Sorry ! we doesn't have any student whos marks are even\n");
	}
	close(iFd);
}
