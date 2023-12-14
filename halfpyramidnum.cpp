#include<iostream>
int main(){
    using namespace std;
    cout<<"Enter number of rows "   ;
    int rows;
    cin>>rows;
    for(int i=1;i<=rows;i++){
        int a=1;
        for(int j=1;j<=i;j++){
            cout<<a;
            a++;
        }
        cout<<endl;
    }
    return 0;
}