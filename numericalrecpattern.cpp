#include<iostream>
int main(){
    using namespace std;
    int n;
    cout<<"Enter n "   ;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            cout<<j;
        }
        for(int k=1;k<i;k++){
            cout<<k;
        }
        cout<<endl;
    }
    return 0;
}
