#include <iostream>
#include <cmath>

using namespace std;

class QuadraticEquation
{
private:
	//using 'double' to store values for 'a'. 'b', and 'c'//
	double a;
	double b;
	double c;

public:
	//the following lines of code will allow me to retrieve a, b, and c for the main function//
	double geta()
	{
		return a;
	}

	double getb()
	{
		return b;
	}

	double getc()
	{
		return c;
	}

	//following lines of code are for quadratic equation//
	double getdiscriminant() 
	{
		return b * b - 4 * a * c;
	}

	double getroot1()
	{
		if (getdiscriminant() < 0)
			return 0;
		else
		{
			return (-b + sqrt(getdiscriminant())) / (2 * a); 
		}
	}

	double getroot2()
	{
		if (getdiscriminant() < 0)
			return 0;
		else
		{
			return (-b - sqrt(getdiscriminant())) / (2 * a); 
		}
	}
};

int main()
{
	cout << "Please enter values for a, b, and c:";
	double a, b, c, discriminant, r1, r2;
	cin >> a >> b >> c; //code asks for user input for values of a, b, and c//

	QuadraticEquation equation(a, b, c);
	discriminant = equation.getdiscriminant();
	
	//Using If Else statements to determeine message to display based on whether or not there are roots//
	if (discriminant < 0)
	{
		cout << "The equation has no real roots." << endl;
	}
	else if (discriminant = 0)
	{
		cout << " The root is " << equation.getroot1() << endl;
	}
	else // (discriminant >= 0)
	{
		cout << " The roots are " << equation.getroot1 << " and "
			<< equation.getroot2() << endl;
	}
	return 0;
}

