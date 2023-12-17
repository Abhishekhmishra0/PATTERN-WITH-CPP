#include<iostream>
    using namespace std;
int main(){
   int n;
    cout << "Enter number of rows: ";
    cin >> n;
    int a=65;
    for (int i =1; i <= n; i++)
    {
        
        for (int j =1; j <= n; j++)
        {
            char ch =(char)a;
            cout<<ch;
        }
        cout << endl;
        a++;
    } 
    return 0;
}