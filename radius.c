#include <stdio.h>
#include <conio.h>

void main()
{
	float r, c, pi;
	pi= 3.14;
	printf("Count of radius\n");
	printf("circumference:");
	scanf("%f", &c);
	r=c/(2*pi);
	printf("r:%f", r);
	getch();
}
