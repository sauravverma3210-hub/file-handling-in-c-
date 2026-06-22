#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    try
    {
        if(num < 0)
        {
            throw num;
        }
        else
        {
            cout << "Number is positive";
        }
    }

    catch(int x)
    {
        cout << "Exception caught!" << endl;
        cout << "Negative number is not allowed"<<num;
    }

    return 0;
}