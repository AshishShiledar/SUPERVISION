#include<stdio.h>
#include<conio.h>
union student 
{
	int no;
	char name[6];
	float per;
};
void main()
{
	union student s1={1,"ashish",99.99};	
	
	printf("%d\n",s1.no);
	printf("%s\n",s1.name);
	printf("%f\n",s1.per);
	getch();	
}
	
	
	
	
	
	