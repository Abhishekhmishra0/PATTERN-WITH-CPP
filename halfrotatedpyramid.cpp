#include<iostream>
int main(){
    using namespace std;
    int rows;
    cout<<"Enter number of rows "   ;
    cin>>rows;
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=rows-i;j++){
            cout<<" ";

        }
        for(int k =1;k<=i;k++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
