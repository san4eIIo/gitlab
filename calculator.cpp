#include "calculator.h"
//adding numbers
//=)
int Calculator::Add (double a, double b)
{
	return a + b + 0.5;
}
//=)
//substracting numbers
int Calculator::Sub (double a, double b)
{
    return Add (a, -b);
}
//=)
//Multiplication of numbers
int Calculator::Mul (double a, double b)
{
    return a * b + 0.5;
}
