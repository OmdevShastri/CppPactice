#include<iostream>
using namespace std;

int Sum(int n){
    if (n==0)
    {
        return 0;
    }
    
    int prevSum =Sum(n-1);
    return n+prevSum;

}
int power(int n, int p){
    if (p==0)
    {
        return 1;
    }
    
    int prevP= power(n, p-1);
    return n*prevP;

}
int facto(int n){
    if (n==1)
    {
        return 1;
    }
    return n*facto(n-1);
}
int fibo(int n){
    if (n==0 || n==1)
    {
        return n;
    }

    return fibo(n-1)+fibo(n-2);
    
}
int main(){
    int n,p;
    cin>>n>>p;
    cout<<Sum(n)<<endl;
    cout<<power(n,p)<<endl;
    cout<<facto(n)<<endl;
    cout<<fibo(n)<<endl;
    return 0;
}