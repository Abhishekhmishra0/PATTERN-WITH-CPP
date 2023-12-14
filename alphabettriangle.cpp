#include<iostream>
int main(){
    using namespace std;
    int n;
    cout<<"Enter n "  ;
    cin>>n;
    int a=65;
    for(int i=0;i<n;i++){
    for(int j=0;j<=i;j++){
        char ch =(char)a;
        cout<<" "<<ch;
        a++;
        
    }
        cout<<endl;
    }
     
    return 0;
}