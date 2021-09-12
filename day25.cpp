#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int T,n;
    
    cin>>T;
    
    while(T){
        bool check=false;
        cin>>n;
        
            for(int i=2; i<n;i++ ){
                if(n%i==0){
                    check=false;
                    break;
                }else {
                check= true;
    
                }
            }
        
        if(check){
            cout<<"Prime"<<endl;
        }else{
            cout<<"Not prime"<<endl;
        }
        T--;
        
    }
    
      
    return 0;
}
