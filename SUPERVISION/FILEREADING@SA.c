#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
FILE *fptr;
fptr=fopen("ashish.txt","r");
if(fptr==NULL)
{
	printf("file does not exist");
	}	
	else
	{
		printf("file exist");
	}
	getch();
}
