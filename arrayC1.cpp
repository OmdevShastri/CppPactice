#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int mx= -99999;
    int n;
    cout<<"size"<<endl;
    cin>>n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        mx = max(mx, (int)arr[i]);
        cout<<mx<<endl;
    }
    
    
    return 0;
}