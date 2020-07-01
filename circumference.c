#include <stdio.h>
#include <conio.h>

void main()
{
	float pi, r, c;
	pi=3.14;
	printf("Count of circumference\n");
	printf("r:");
	scanf("%f", &r);
	c=2*pi*r;
	printf("Circumference :%f", c);
	getch();

}