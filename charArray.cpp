#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    cin.ignore();
    char arr[n+1];

    cin.getline(arr,n);
    cin.ignore();

    int i=0;
    int currLen =0, maxLen =0;
    int st=0, maxst =0;

    while (1)
    {
        if(arr[i]==' '|| arr[i] =='\0'){
            if(currLen>maxLen){
                maxLen =currLen;
                maxst =st;
            }
            currLen=0;
            st=i+1;
        }
        else
        currLen++;

        if(arr[i]=='\0')
            break;
        i++;
    }
    cout<<maxLen<<endl;
    for (int i = 0; i < maxLen; i++)
    {
        cout<<arr[i+maxst];
    }
    
    ////cin>>arr;

    ////bool check=1;

    // int i=0;

    // while (arr[i]!='\0')
    // {
    //     cout<<arr[i]<<endl;
    //     i++;
    // }

    //check palindrome
    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i]!=arr[n-1-i])
    //     {
    //         check =0;
    //         break;
    //     }
        
    // }
    // if(check){
    //     cout<<"is a palindrome"<<endl;
    // }else{
    //     cout<<"is not a palindrome"<<endl;
    // }
    
    return 0;
}