#include<stdio.h>
#include<conio.h>
void main()
{
	int l,t;
	clrscr();

	printf("Lift Positions\n3,G,6,12,10,11");

	printf("\n\nEnter Your Floor Number: ");
	scanf("%d",&l);

	if(l<=1)
	{
		t=0;
	}
	else if(l<=4 && l>=2)
	{
		t=1;
	}
	else if(l<=7 && l>=5)
	{
		t=2;
	}
	else if(l<=10 && l>=8)
	{
		t=3;
	}
	else if(l==11)
	{
		t=4;
	}
	else if(l==12)
	{
		t=5;
	}

	switch(t)
	{
		case 0:
			printf("The nearest lift is 2");
			break;

		case 1:
			printf("The nearest lift is 1");
			break;

		case 2:
			printf("The nearest lift is 3");
			break;

		case 3:
			printf("The nearest lift is 5");
			break;

		case 4:
			printf("The nearest lift is 6");
			break;
		case 5:
			printf("The nearest lift is 4");
			break;
	}

	getch();
}