#include<iostream>
    using namespace std;
int main(){
   int n;
    cout << "Enter number of rows: ";
    cin >> n;
    int a=65;
    for (int i =1; i <= n; i++)
    {
      a= 65+n-i;
        for (int j =1; j <= i; j++)
        {
            char ch =(char)a;
            cout<<ch;
            a++;
        }
        cout << endl;
      
    } 
    return 0;
}