#include<iostream>
int main(){
    using namespace std;
    int n;
    cout<<"Enter n ";
    cin>>n;
    int a=n/2;
    for(int i=1;i<=n;i++){
        if(i<(n/2+1)){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int k=1;k<=2*i-1;k++){
            cout<<"*";
        }
        }
        if(i>(n/2+1)){
            
        for(int l=1;l<=i-n/2-1;l++){
            cout<<" ";
        }
        for(int k=1;k<=2*a-1;k++){
            cout<<"*";
            a--;
        }
        }
        cout<<endl;
    }
    return 0;
}