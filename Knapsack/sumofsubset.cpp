#include<bits/stdc++.h>
using namespace std;
bool sumofsubset(int arr[],int sum, int n)
{
    int i,j;
    bool subset[n+1][sum+1];
      for (int i = 0; i <= n; i++) 
        subset[i][0] = true; 

    for (int i = 1; i <= sum; i++) 
        subset[0][i] = false; 

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=sum;j++)
        {
            if(arr[i-1]<=sum)
            {
                subset[i][j]=subset[i-1][j] || subset[i-1][j-arr[i-1]];
            }else{
                subset[i][j]=subset[i-1][j];
            }
        }
    }
  return subset[n][sum];

}
int main()
{
    int arr[]={3, 34, 4, 12, 5, 2};
    int n=sizeof(arr)/sizeof(arr[0]);
    int sum=10;
    if(sumofsubset(arr,sum,n)==true)
    {
        cout<<"Subset is found in this array"<<endl;

    }else
    {
        cout<<"Subset not found"<<endl;
    }
    
    return 0;
}