# include <iostream>

using namespace std; 

main ( )

{

            double amount, discount, netPayable ;

            amount = 0 ;

            netPayable = 0 ;

            discount = 0 ;

            // prompt the user to enter the bill amount

            cout << "Please enter the amount of the bill     " ;

            cin >> amount ;

            //test the conditions and calculate net payable

           

            if ( amount > 5000 )

            {

                   //calculate amount at 15 % discount

                   discount = amount * (15.0 / 100);                 

                   netPayable = amount - discount;

                   cout << "The discount at the rate 15 % is Rupees     " << discount << endl;                                 cout << "The payable amount is Rupees    " << netPayable ;                     

            }

           else

            {

                   // calculate amount at 10 % discount

                  discount = amount * (10.0 / 100);                   

                  netPayable = amount - discount;

                  cout << "The discount at the rate 10 % is Rupees     " << discount << endl ;  

                  cout << "The payable amount is Rupees    " << netPayable ;                     

            }        

  

}

 
