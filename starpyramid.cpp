#include<iostream>
int main(){
    using namespace std;
    int n;
    cout<<"Enter n "   ;
    cin>>n;
    
    for(int i=1;i<=n;i++){
        int nsp = n-i;
         for(int k=1;k<=nsp;k++){
        cout<<" ";
        
    }
    for(int j=1;j<=2*i-1;j++){
        cout<<"*";
    }
   
    
    cout<<endl;
        
    }
    
    return 0;
}