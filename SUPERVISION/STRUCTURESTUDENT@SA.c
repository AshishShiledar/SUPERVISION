#include<stdio.h>
#include<conio.h>
struct student
{
	char name [6];
	int no;
	float per;
};
void main()
{
struct student S1={"ASHISH",1,99};
struct student S2={"LAXMAN",1,98};
printf("Name Is %s\n",S1.name);
printf("Numbers Is %d\n",S1.no);
printf("Percentage Is %f\n",S1.per);
printf("Name Is %s\n",S2.name);
printf("Numbers Is %d\n",S2.no);
printf("Percentage Is %f\n",S2.per);	
getch();	
}
