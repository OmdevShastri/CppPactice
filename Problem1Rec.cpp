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
string removeDup(string s){
    if(s.length()==0){
        return "";
    }
    char ch=s[0];
    string ans = removeDup(s.substr(1));

    if (ch==ans[0])
    {
        return ans;
    }
    return (ch+ans);
}
string moveAllX(string s){
    if (s.length()==0)
    {
        return "";
    }
    char ch=s[0];
    string ans=moveAllX(s.substr(1));
    if (ch=='x')
    {
        return ans+ch;
    }
    return ch+ans;
}
void subseq(string s, string ans){
    if (s.length()==0)
    {
        cout<<ans<<endl;
        return;
    }
    char ch=s[0];
    int code=ch;//to print ascii values

    string ros=s.substr(1);

    subseq(ros, ans);
    subseq(ros,ans+ch);
    subseq(ros, ans +to_string(code));
 
}
string keypadArr[]={"", "","abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
void keypad(string s, string ans){
    if (s.length()==0)
    {
        cout<<ans<<endl;
        return;
    }
    char ch=s[0];
    string code= keypadArr[ch-'0'];
    string ros=s.substr(1);

    for (int i = 0; i < code.length(); i++)
    {
        keypad(ros,ans+code[i]);
    }
    
}

int main(){
    // string s;
    // cin>>s;
    // rev(s);
    // cout<<endl;
    // replacePi("pippppiiiipi");
    // cout<<endl;

    // towerofHanoi(3,'A','C','B');
    //cout<<removeDup("aaaabbbeeeeeeccccccddddddd")<<endl;
    //cout<<moveAllX("axxxsxsxsdesewxxxy")<<endl;
    //subseq("ABC","");
    //subseq("AB","");
    //cout<<endl;
    keypad("23","");
    return 0;
}