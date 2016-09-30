#include <iostream>

using namespace std;

class EvenNumber
{
	private: 
	 
		int value;
		int next;
		int previous;

	public:
		
		EvenNumber()
		{   
			value = 0; 
			//'value' will be set to 0 by default//
		}
		
	
	/* the following lines of code will let me retrieve the values for 'value', 'previous',
       and 'next' when creating the main function */
		int getValue()
		{
			return value;
		}
		int getNext()
		{
			return next;
		}
		int getPrevious()
		{
			return previous;
		}
		
		//Using the 'this' pointer to retrieve the objects value, next, and previous//
		void getValue(int value)
		{
			this->value = value;
		}
		void getNext(int next)
		{
			this->next = next;
		}
		void getPrevious(int previous)
		{
			this->previous = previous;
		}
};

int main ()
{
	//will set the EvenNumber object value to 16//
	EvenNumber number;
	number.getValue(16);
	number.getNext(18);
	number.getPrevious(14);


	//the computer will display the even number value, previous, and next integers// 
	cout << "Value: " << number.getValue() << endl;
	cout << "Next Value: " << number.getNext() << endl;
	cout << "Previous Value: " << number.getPrevious() << endl;

	return 0;

}
