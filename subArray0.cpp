#include<iostream>
#include<climits>
using namespace std;

int kadane(int arr[],int n){
    int currentsum=0;
    int maxsum=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        currentsum+=arr[i];
        if(currentsum<0){
            currentsum=0;
        }
        maxsum=max(maxsum,currentsum);
    }
    return maxsum;
}
int main(){

    // int n;
    // cin>>n;
    // int arr[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin>>arr[i];
    // }
    // int maxSum=INT_MIN;
    // for (int i = 0; i < n; i++)
    // {
    //     for(int j=i; j<n; j++){
    //         int sum=0;
    //         for (int k = i; k <=j; k++)
    //         {
    //             sum+=arr[k];
    //             //cout<<arr[k]<<" ";
    //         }//cout<<endl;
    //         maxSum=max(maxSum,sum);
    //     }
    // }
    // cout<<maxSum<<endl;

    //optimised
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    //int currSum[n+1];
    //currSum[0]=0;
    int currSum =0;
    int maxSum= INT_MIN;

    // for (int i = 1; i <= n; i++)
    // {
    //     currSum[i]= currSum[i-1]+arr[i-1];
    // }
    // int maxSum= INT_MIN;
    // for (int i = 1; i <=n; i++)
    // {
    //     int sum=0;
    //     for (int j = 0; j < i; j++)
    //     {
    //         sum=currSum[i]-currSum[j];
    //         maxSum= max(sum, maxSum);
    //     }
        
    // }

    //kaden's Algo
    // for(int i=0; i<n; i++){
    //     currSum+=arr[i];
    //     if(currSum<0){
    //         currSum=0;
    //     }
    //     maxSum=max(maxSum,currSum);

    // }

    //circular max subarray sum
    int wrapsum;
    int nonwrapsum;

    nonwrapsum=kadane(arr,n);
    int totalSum=0;
    for (int i = 0; i < n; i++)
    {
        totalSum+=arr[i];
        arr[i]=-arr[i];
    }
    wrapsum=totalSum +kadane(arr,n);
    cout<<max(wrapsum,nonwrapsum)<<endl;
    
    //cout<<maxSum<<endl;

    return 0;

}
