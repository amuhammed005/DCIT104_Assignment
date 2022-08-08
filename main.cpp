//ADAM MUHAMMED 10965154

//A CODE THAT SUMS UP ALL PRIME NUMBERS FROM 2 TO ANY CHOSEN NUMBER
#include <iostream>

using namespace std;

int main()
{
    //cout << "Hello world!" << endl;
    //return 0;
      int num, i, upto, sum = 0;
      double primecount = 0;

    // Take input from user
    cout << "Find sum of all prime numbers from 1 to : ";
    cin >> upto;

    for(num = 2; num <= upto; num++) {

        for(i = 2; i <= (num / 2); i++) {

            if(num % i == 0) {
                i = num;
                break;
            }
        }

        // If the number is prime then add it.
        if(i != num) {
            sum += num;
            primecount ++;


            cout << " prime numbers are " <<num<< endl;
        }

    }
     cout << "The average is "<< sum/primecount <<endl;
    cout << endl << "Sum of all prime numbers up to " << upto << " : " << sum;

    return 0;
}
