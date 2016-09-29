#include <iostream>
#include <string>

using namespace std;

class Fan
{
private: 
	
	//Setting the int, bool, and double variables to private to make them specific to the 'Fan' class. //
	
	int speed;
	bool on; //will display '0' if fan is off and '1' if fan is on//
	double radius;


public: 
	Fan()
	{
		speed = 1;
		on = false; //fan will be off by default//
		radius = 5;
	}

	int getSpeed() //the program will know to display the speed of the fan//
	{ 
		return speed;
	}

	void setSpeed (int speed)
	{
		this->speed = speed; //Usage of pointer to retrieve 'speed'//
	}

	bool isOn()
	{
		return on; //will allow the program to retrieve the true or false value for whether the fan is off or on//
	}

	void setOn (bool trueorFalse)
	{  
		// Using the pointer 'this' to retrieve the boolean to set the fan to 'On'//
		this->on = trueorFalse;
	}

	double getRadius() //will return the value for the radius of fan in the object//
	{
		return radius;
	}

	void setRadius(double radius)
	{
		//I am using the pointer 'this' to retrieve the double to set the radius//
		this->radius = radius;
	}
};

int main()
{
	/*Sets up properties for first object. Fan will be on, have a speed of 3, 
	and have a radius of 10. */
	Fan fan;
	fan.setOn(true); 
	fan.setSpeed(3);
	fan.setRadius(10);
	
	cout << "Properties of First Fan:" << endl;
	cout << "Fan Off/On:" << fan.isOn() << endl; //displays '1' to indicate fan is on//
	cout << "Fan Speed:" << fan.getSpeed() << endl; 
	cout << "Fan Radius:" << fan.getRadius() << endl;

	/*Sets up properties for second object. Fan will be off, have a speed of 2, 
	have a radius of 5.*/
	Fan fan1;
	fan1.setOn(false);
	fan1.setSpeed(2);
	fan1.setRadius(5);

	cout << "Properties of Second Fan:" << endl;
	cout << "Fan Off/On:" << fan1.isOn() << endl; //displays '0' upon running to indicate fan is off//
	cout << "Fan Speed:" << fan1.getSpeed() << endl;
	cout << "Fan Radius:" << fan1.getRadius() << endl;

	return 0;
}