#include<iostream>
int main(){
    using namespace std;
    int rows;
    cout<<"Enter number of rows "   ;
    cin>>rows;
     int a=1;
    for(int i=1;i<=rows;i++){
       
        for(int j=1;j<=i;j++){
            cout<<" "<<a<<" ";
             a++;
        }
        cout<<endl;
       
    }
    return 0;
}