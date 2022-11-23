#include<iostream> 
#include<unordered_map>
using namespace std;

void find_target(int arr[],int n,int sum)
{
    unordered_map<int,int> umap;

    int flag = 0;
    for (int i = 0; i < n; i++) {
        if (umap.find(sum - arr[i]) != umap.end()) {

            cout<<"("<<arr[i]<<","<< (sum-arr[i])<<")";
            flag =1;
        }
        umap[arr[i]]++;
    }
    if(flag==0)
    {
        cout<<"No pairs found";
    }
    return;
    }

int main()
{
    int arr[100];
    int sizee=-1,sum,i=0,n;
    while(n!=-1)
    {
        cin>>n;
        arr[i]=n;
        i++;
        sizee++;
    }
    cin>>sum;

    find_target(arr,sizee,sum);


}