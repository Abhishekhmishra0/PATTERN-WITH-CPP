#include<iostream>
int main(){
    using namespace std;
    cout<<"Enter number of rows "   ;
    int rows;
    cin>>rows;
    int a=1;
    for(int i=1;i<=rows;i++){
    
        for(int j=1;j<=i;j++){
            cout<<a;
        
        }
        cout<<endl;
        a++;
    }
    return 0;
}