#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of rows: ";
    cin >> n;
   
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <n-i; j++)
        {
            cout << " ";
        }
       
        for (int k = 0; k <= i; k++)
        {
            cout <<k+1;
           
        }
        for(int l=i;l>0;l--){
            cout<<l;
        }
        
        cout << endl;
    }

    return 0;
}