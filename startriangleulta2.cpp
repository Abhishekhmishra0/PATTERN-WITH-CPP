#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of rows: ";
    cin >> n;
    int nsp = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < nsp; j++)
        {
            cout << " ";
        }
        nsp++;
        for (int k = i; k < n; k++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}