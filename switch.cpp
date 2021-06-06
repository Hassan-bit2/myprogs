#include <iostream>

using namespace std;

int main()
{
	int num;
	cout << "Enter a number ";
	cin >> num;
	
	switch(num)
	{
		case 20:
			cout << "You entered " << num;
			break;
			
		case 21:
			cout << "You entered " << num;
			break;
			
		case 23:
			cout << "You entered " << num;
			break;
			
		default:
			cout << "Wrong input\n" << num;
			break;
	}
}
