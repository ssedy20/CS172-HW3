#include <iostream>
#include <string>

using namespace std;

string sort(string& s)
{  //following lines of code will rearrange letters input by user//
	for (int i = s.length() - 1; i >= 1; i--)

		char currentMax = s[0];
		int currentMaxIndex = 0;

		for (int j = 1; j <= i ; j++)
		{ 
			if (currentMax < s[j])
			{
				currentMax = s[j];
				currentMaxIndex = j;
			}
		}
	// following line of code switches 'i' with 'currentMaxIndex'//
		if (currentMaxIndex != i)
		{
			s[currentMaxIndex] = s[i];
			s[i] = currentMax;
		}
}

return s;

}

int main ()
{
	//prompts user to input string//
	cout << "Enter a string: "; 
	string s;
	getline(cin, s);

	//returns the sorted string// 
	cout << "The sorted string is: " << sort(s) << endl;

	return 0;
}
