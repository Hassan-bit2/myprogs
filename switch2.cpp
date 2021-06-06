#include <iostream>

using namespace std;

int main()
{
	int age;
	
	cout << "Enter your age\n";
	cin >> age;
	
	switch (age)
	{
		case 20:
			cout << "You are a genius!\n\n";
			break;
			
		default:
			cout << "You are an idiot!\n";
	}
}
