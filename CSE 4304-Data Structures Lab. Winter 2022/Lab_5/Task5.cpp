#include<iostream> 
#include<queue> 
#include<vector>
using namespace std;
int main()
{
    priority_queue<int> p; 
    int n,a,b; 
    cin>>n; 
    while(n!=-1)
    {
        p.push(n); 
        cin>>n;
    }
   
    while(p.size()>1)
    {
        a=p.top(); 
        p.pop(); 
        if(a==p.top())
        {
            p.pop();
        }
        else
        {
            b=a-p.top(); 
            p.pop(); 
            p.push(b);
        }
    }
    if(p.size()==1)
    {
        cout<<p.top()<<"\n";
    }
    else 
    cout<<0;

}