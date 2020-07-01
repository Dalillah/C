#include <stdio.h>
#include <conio.h>

void main()
{
	float r, a, pi;
	pi=3.14;
	printf("Count of area circle\n");
	printf("r:");
	scanf("%f:",&r );
	a = pi*r*r;
	printf("Area:%f", a);
	getch();
}