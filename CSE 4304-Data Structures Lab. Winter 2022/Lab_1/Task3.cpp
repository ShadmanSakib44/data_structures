#include<iostream>
using namespace std; 
int binarySearch(int nums[], int n, int target)
{
   
    int low = 0, high = n - 1;
 
   
    while (low <= high)
    {
       
        int mid = (low + high)/2;    
 
     
        if (target == nums[mid]) {
            return mid;
        }
 
        
        else if (target < nums[mid]) {
            high = mid - 1;
        }
 
        
        else {
            low = mid + 1;
        }
    }
 
   
    return -1;
}
 
int main()
{
    int nums[20];
    for(int i=0;;i++)
    {
        cin>>nums[i];
        if(nums[i]<0)
        break;
    }
    int target; 
    cin>>target; 
 
    int n = sizeof(nums)/sizeof(nums[0]);
    int index = binarySearch(nums, n, target);
 
    if (index != -1) {
       cout<<index<<endl;
    }
    else {
      cout<<"Element not found in the array";
    }
 
    return 0;
}