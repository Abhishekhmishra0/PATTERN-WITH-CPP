#include<iostream>
int fact(int a){
    if(a<=1)return 1;
    return a* fact(a-1);
}
int combination(int a, int b){
    return fact(a)/(fact(b)*(fact(a-b)));
}
int main(){
    using namespace std;
    int a,b;
    cout<<"Enter a ";
    cin>>a;
    cout<<"Enter b ";
    cin>>b;
    int c = combination(a,b)   ;
    cout<<"The value of "<<a<<" combination "<<b<<" is "<<c;
    return 0;
}