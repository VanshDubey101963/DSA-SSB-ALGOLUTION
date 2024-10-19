#include <iostream>
using namespace std;

int parent(int index)
{
    if(index % 2 == 0)
    {
        return index/2 - 1;
    }
    else
    {
        return index/2;
    }
}

void insert(int* arr , int n , int value , int index)
{
    arr[index] = value;
    
    while(index > 0 && arr[index] > arr[parent(index)])
    {
        swap(arr[index] , arr[parent(index)]);
        index = parent(index);
    }
}

void heapify(int* arr , int i , int n)
{
    int largest = i;
    int left = i * 2 + 1;
    int right = i * 2 + 2;
    
    if(left < n && arr[left] > arr[largest])
    {
        largest = left;
    }
    if(right < n && arr[right] > arr[largest])
    {
        largest = right;
    }
    
    if(largest != i)
    {
        swap(arr[largest],arr[i]);
        heapify(arr,largest,n);
    }
}

void buildHeap(int* arr , int n )
{
    for(int i = (n-1) / 2 - 1 ; i >= 0 ; i--)
    {
        heapify(arr,i,n);
    }
}

void heapSort(int* arr , int n)
{
    for(int i = (n-1) / 2 - 1 ; i >= 0 ; i--)
    {
        heapify(arr,i,n);
    }
    
    int j = n - 1;
    
    while (j > 0)
    {
        swap(arr[0],arr[j]);
        heapify(arr,0,n);
        j--;
    }
}

int main() {
    int n = 3;
    int arr[] = {7,2,6,4,5,3,1};
    
    heapSort(arr,7);
    
    for(int i = 0 ; i < 7 ; i++)
    {
        cout << arr[i] << endl;
    }
    
    
    return 0;
}