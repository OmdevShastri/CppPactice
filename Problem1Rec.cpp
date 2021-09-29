#include<iostream>
using namespace std;

void rev(string s){
    if(s.length()==0){
        return;
    }

    string ros = s.substr(1);
    rev(ros);
    cout<<s[0];
}
void replacePi(string s){
    if(s.length()==0){
        return;
    }
    if (s[0]=='p'&&s[1]=='i')
    {
        cout<<"3.14";
        replacePi(s.substr(2));

    }else
    {
        cout<<s[0];
        replacePi(s.substr(1));
    }
    
    
}
void towerofHanoi(int n, char src, char dest, char helper){
    if(n==0){
        return;
    }
    towerofHanoi(n-1,src,helper, dest);
    cout<<"Move from "<<src<<" to "<<dest<<endl;
    towerofHanoi(n-1,helper, dest,src);
}
int main(){
    string s;
    cin>>s;
    rev(s);
    cout<<endl;
    replacePi("pippppiiiipi");
    cout<<endl;

    towerofHanoi(3,'A','C','B');

    return 0;
}