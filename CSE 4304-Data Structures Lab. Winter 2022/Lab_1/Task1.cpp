#include<iostream>
using namespace std;

int main()
{
    int n,num_array[20];

    num_array[0]=0;

    for(int i=0;i<20;i++)
    {
        num_array[i]=0;
    }

    for(int i=0;;i++)
    {
        cin>>n;
        if(n<=0)
        break;
        num_array[n]++;  
    }

    int max=-1;

    for(int i=0;i<20;i++)
    {
        if(num_array[i]>=max)
            max=num_array[i];
    }

    while(max>0){
        for(int i=0;i<20;i++)
        {
            if((num_array[i]==max)&& (max==1)){
                
                cout<<i <<" occur: "<<  num_array[i] << "time" << endl;
            }
            else if(num_array[i]==max)
            {
               
                 cout<<i <<" occur: "<<  num_array[i] << "times" << endl;
            }
        }
        max--;
    }

    return 0;

}

