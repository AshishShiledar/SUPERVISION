#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
FILE *fptr;
fptr=fopen("asutosh.txt","w");
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
