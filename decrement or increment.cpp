#include <iostream>
 
using namespace std;
 
int main()
{
    int num;
    cin >> num;

    if ( num % 4 == 0 )    // in this we are checking if the number is divisible by 4 or not
    {                      // if it is divisible then if() condition is true
        cout << num+1;     //and num will increase by one (n+1)
    }
    else                   // otherwise if false then, else block will execute and 
    {                      // num will decreased by 1
        cout << num-1;     //(num-1)
    }
 
    return 0;
}
