#include <iostream>
using namespace std;
int main()
{
    double n;
    double pi = 1;
    int i;
    cout << "\nIntroduce val lui n: ";
    cin >> n;
    if (n > 0)
    {
        for (i = 1; i <= n; i++)
        {
            pi += pow(-1, i) / ((2 * i) + 1);
            cout << "\n var i= " << i<<" pi = "<<pi;
        }
       pi *= 4;
        cout << "\nPi value: " << pi << endl;
    }
    else
    {
        cout << "\nInvalid value for n";
    }
}