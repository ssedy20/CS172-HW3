#include <iostream>
#include <fstream>

using namespace std;

class MyInteger
{
private:
	
	int value;

public:
	int getValue() const
	{
		return value;
	}

	MyInteger(int value)
	{
		this->value = value; 
		//using pointer 'this' to retrieve int value//
	}

	bool isPrime() const
	{
		return isPrime(value);
	}

	static bool isPrime(const MyInteger& o)
	{
		return isPrime(o.getValue());
	}

	//following code will be used to determine whether number is prime or not//
	static bool isPrime(int num)
	{
		if ((num == 1) || (num == 2))
		{
			return true;
		}

		for (int i = 2; i <= num / 2; i++)
		{
			if (num % i == 0)
				return false;
		}

		return true;
	}

	//following code will determine if number is even or not// 
	bool isEven() const
	{
		return isEven(value);
	}

	static bool isEven(int n)
	{
		return n % 2 == 0;
	}

	static bool isEven(const MyInteger& n)
	{
		return isEven(n.getValue());
	}
	
	bool equals(int anotherNum) const
	{
		return value == anotherNum;
	}

	bool equals(const MyInteger& o) const
	{
		return value == o.getValue();
	}
};

int main()
{	// will display if number is even or prime//
	MyInteger n1(5);
	cout << "Is the number even? " << n1.isEven() << endl;
	cout << "Is the number prime? " << n1.isPrime() << endl;
	cout << "Is 5 prime? " << MyInteger::isPrime(5) << endl;

	return 0;
}

