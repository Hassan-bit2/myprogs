#include <iostream>

using namespace std;

main()
{
	int AmirAge, AmaraAge;
	AmirAge = 0;
	AmaraAge = 0;
	cout << "Please enter Amir's age";
	cin >> AmirAge;
	cout <<"Please enter Amara' Age";
	cin >> AmaraAge;
	
	if(AmirAge>AmaraAge)
	{
		cout<<"\n"<<"Amir is elder than Amara";
	
	}
	
	else{
		cout<<"Amir is younger than Amara";
	}
}
