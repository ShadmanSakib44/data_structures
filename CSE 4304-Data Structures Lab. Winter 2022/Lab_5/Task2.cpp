#include <iostream>

using namespace std;

void heapify(int arr[], int N, int i) {

  int smallest = i;

  int l = 2 * i + 1;

  int r = 2 * i + 2;

  if (l < N && arr[l] < arr[smallest])
    smallest = l;

  if (r < N && arr[r] < arr[smallest])
    smallest = r;

  if (smallest != i) {
    swap(arr[i], arr[smallest]);

    heapify(arr, N, smallest);
  }
}

void heapSort(int arr[], int N) {

  for (int i = N ; i >= 0; i--)
    heapify(arr, N, i);

  for (int i = N - 1; i > 0; i--) {

    swap(arr[0], arr[i]);

    heapify(arr, i, 0);
  }
 
 
}
void MinHeap(int arr[], int N) {

  for (int i = N ; i >= 0; i--)
  {
     heapify(arr, N, i);
  }
   
  

  
}
void HeapMinimum(int arr[],int N)
{
    heapSort(arr,N); 
    cout<< arr[0];
}
void Heap_Extract(int arr[], int N)
{
    
    int temp=arr[0]; 
    arr[0]=arr[N-1]; 
    MinHeap(arr,N--);
    cout<<temp;

    
}
void Min_Heap_Insert(int value, int arr[],int N)
{
    N++; 
    arr[N-1]=value;
    MinHeap(arr,N);

}
void printArray(int arr[], int N) {
  for (int i = 0; i < N; ++i)
    cout << arr[i] << " ";
  cout << "\n";

}

int main() {
  int arr[] = {70,90,60,190,80,170,110,20,50,30,130 };
  int N = sizeof(arr) / sizeof(arr[0]);
  
 
  MinHeap(arr,N);
  Heap_Extract(arr,N);
  cout<<endl;
   
 
  cout<<"Min Heap: ";
  printArray(arr,N);



   int value;
   cin>>value;
   
  Min_Heap_Insert(value,arr,N);
  N++; 
  printArray(arr,N);

  
  


}
