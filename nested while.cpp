//Name: Saniya Chatterjee
//Prn: 23070123113
//Class: EnTC B-2
#include <iostream>
using namespace std;

int main() 
{
    int n;
    cout << "Enter the number of rows for the triangle: ";
    cin >> n;
    int i = 1;
    while (i <= n) 
    {
        int j = 1;
        while (j <= i) 
        {
            std::cout << "*";
            j++;
        }
        cout <<endl;
        i++;
    }

    /* OUTPUT:
        Enter the number of rows for the triangle: 5
*
**
***
****
*****

--------------------------------
Process exited after 3.337 seconds with return value 0
Press any key to continue . . . */
    return 0;
}
