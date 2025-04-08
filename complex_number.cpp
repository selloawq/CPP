#include <iostream>

struct complex_number
{
	double real;
	double imaginary;
};

complex_number subtract(struct complex_number c1, struct complex_number c2)
{
	complex_number c;
	c.real = c1.real - c2.real;
	c.imaginary = c1.imaginary - c2.imaginary;
	return c;
}

int main()
{
	complex_number num_1 = { 5.5, 5.5 };
	complex_number num_2 = { 5.5, 5.5 };

	complex_number result = subtract(num_1, num_2);
	std::cout << result.real << " : " << result.imaginary;
}