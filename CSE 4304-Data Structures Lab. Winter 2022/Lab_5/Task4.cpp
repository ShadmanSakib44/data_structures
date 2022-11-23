#include<iostream>
#include<queue> 
#include<vector>  
using namespace std; 
int main ()
{
    int n=6,k=7; 
    priority_queue <int, vector<int>, greater<int> > priority_q;
    int c;
    while(n--){
        cin>>c;
        priority_q.push(c); 
    }
    
    int count=0;
    while(priority_q.top()<k)
    {
        if(priority_q.size()==1)
        {
            count=-1;
            break ; 
        }
        int a=priority_q.top(); 
        priority_q.pop();
        int b=priority_q.top(); 
        priority_q.pop(); 

        priority_q.push(a+b*2); 
        count++; 
    }
    cout<<count<<"\n"; 




}