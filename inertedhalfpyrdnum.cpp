#include<iostream>
int main(){
    using namespace std;
    int rows;
    cout<<"Enter number of rows "   ;
    cin>>rows;
     int a=1;
    for(int i=rows;i>=1;i--){
       
        for(int j=1;j<=i;j++){
            cout<<a;
           
        }
        cout<<endl;
         a++;
    }
    return 0;
}