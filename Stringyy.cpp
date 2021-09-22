#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){

    string str ="adfwrftvsdf";
    
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i]>='a' && str[i]<='z')
        {
            str[i]-= 32;
        }
        
    }
    cout<<str<<endl;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i]>='A' && str[i]<='Z')
        {
            str[i]+= 32;
        }
        
    }
    cout<<str<<endl;

    string s= "hjntrgfevdf";
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    cout<<s<<endl;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    cout<<s<<endl;

    string s1="895457512362";

    sort(s1.begin(),s1.end(),greater<int>());

    cout<<s1<<endl;
//Frequency of a char in a string
    string s2="hujiknbgvfctgyvvvvvvhb";
    int freq[26];

    for (int i = 0; i < 26; i++)
    {
        freq[i]=0;

    }for (int i = 0; i < s2.size(); i++)
    {
        freq[s2[i]-'a']++;

    }
    char ans='a';
    int maxF =0;
    for (int i = 0; i <26 ; i++)
    {
        if (freq[i]>maxF)
        {
            maxF=freq[i];
            ans=i+'a';
        }
        
    }
    cout<<maxF<<" "<<ans<<endl;
    
    

    return 0;
}