#include<bits/stdc++.h>
using namespace std;
bool sumofsubset(int arr[],int sum, int n)
{
    if(sum==0)
    return true;
    if(n==0)
    return false;
    if(arr[n-1]<=sum)
    {
    return sumofsubset(arr,sum-arr[n-1],n-1) || sumofsubset(arr,sum,n-1);
    }
    else
    {
        return sumofsubset(arr,sum,n-1);
    }

}
int main()
{
    int arr[]={3, 34, 4, 12, 5, 2};
    int n=sizeof(arr)/sizeof(arr[0]);
    int sum=1;
    if(sumofsubset(arr,sum,n)==true)
    {
        cout<<"Subset is found in this array"<<endl;

    }else
    {
        cout<<"Subset not found"<<endl;
    }
    
    return 0;
}