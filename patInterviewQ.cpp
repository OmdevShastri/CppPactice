#include<iostream>
using namespace std;
void pattern(int i){
    for(int a =1; a<=i;a++){
        for (int j = 1; j <=(2*a+1); j++)
        {
            cout<<"*";
        }
        cout<<a;
        for (int j = 1; j <=(2*a-1); j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
    int i;
    cin>>i;
    pattern(i);
    return 0;

}