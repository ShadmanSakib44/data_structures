
#include<iostream>
#include<stack> 
#include<queue>

using namespace std;

bool checkPreorder(int arr[], int n)
{
	queue<int> q;

	
	int root=0;

	
	for (int i=0; i<n; i++) // 5 2 1 3 6
	{
		
		if (arr[i] < root)
			return false;
      

		
		while (!q.empty() && q.front()<arr[i]) 
		{
			root = q.front();
			q.pop();
		}
    q.push(arr[i]); //5 2 1 3 6

		
		
	}
	return true;
}

int main()
{
	int a[] = {5,2,1,3,6};
	int n = sizeof(a)/sizeof(a[0]);
  if(checkPreorder(a, n))
  {
    cout << "Valid Preorder Sequence\n";

  }
  else
  {
    cout << "Invalid Preorder Sequence\n";
  }
  
	 
							
	int b[] = {5,2,6,1,3};
	n = sizeof(b)/sizeof(b[0]);
	if(checkPreorder(b, n))
  {
    cout << "Valid Preorder Sequence\n";

  }
  else
  {
    cout << "Invalid Preorder Sequence\n";
  }

	return 0;
}
