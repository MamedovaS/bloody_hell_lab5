#pragma once
#include <stdio.h>         
#include <math.h>  

void Lab_1()
{
	double x = 2.134;
	double y = 0.129;
	double result;

	result = (x * y + pow(x, 2) * pow(y, 2)) / tan(pow(x, 5) * pow(y, 5)) - cos(x * y) + x * pow(y, 5 / 6) + 173.11 * x;

	printf("x=%lf & y=%lf so result is %lf", x, y, result);

}

void main() {
	Lab_1();
}

