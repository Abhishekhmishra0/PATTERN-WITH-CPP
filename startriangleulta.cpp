#include <iostream>
using namespace std;
int main()
{
    cout << "Enter number of rows: ";
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}