#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

bool Subset(vector<int> sub, vector<int> main)
{
	if(sub.size()>main.size()) return false; 
	unordered_map<int,bool> mp; 
	for(int i=0;i<main.size();i++)
	{
		mp[main[i]]=true;
       

	}
	for(int j=0;j<sub.size();j++)
	{
		if(mp.count(sub[j])==0)
		{
			return false;
		}
	}
	return true; 
}

int main()
{
	vector<int> sub_array;
	vector<int> main_array; 
	while(true)
	{
		int j; 
		cin>>j; 
		if(j==-1) break;
		main_array.push_back(j);
	}
	while(true)
	{
		int i; 
		cin>>i; 
		if(i==-1) break ; 
		sub_array.push_back(i);
	}
	
	bool ans=Subset(sub_array,main_array);
	if(ans==true) cout<<"YES"<<endl; 
	else cout<<"NO"<<endl;

}

