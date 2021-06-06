#include <iostream>

 using namespace std;

main()

{

    //declaration of variables

    int sum, number;

   

    //Initialization of the variables

    sum = 0;

    number = 1;

   

    // using the while loop to find out the sum of first 1000 integers starting from 1

   

    while(number <= 1000)

    {

         // Adding the integer to the contents of sum

         sum = sum + number;

       

         // Generate the next integer by adding 1 to the integer

         number = number + 1;

    }

   

    cout << "The sum of first 1000 integers starting from 1 is " << sum;
}
