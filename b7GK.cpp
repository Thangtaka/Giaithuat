#include <iostream> 
  
using namespace std; 
void gom(int arr[], int n, int i) 
{ 
    int largest = i;  
    int l = 2*i + 1; 
    int r = 2*i + 2; 
  
   
    if (l < n && arr[l] > arr[largest]) 
        largest = l; 
  
   
    if (r < n && arr[r] > arr[largest]) 
        largest = r; 
  
   
    if (largest != i) 
    { 
        swap(arr[i], arr[largest]); 
  
       
        heapify(arr, n, largest); 
    } 
} 
  

void sapxepcay(int arr[], int n) 
{ 
   
    for (int i = n / 2 - 1; i >= 0; i--) 
        heapify(arr, n, i); 
  

    for (int i=n-1; i>0; i--) 
    {
        swap(arr[0], arr[i]); 
  
        heapify(arr, i, 0); 
    } 
} 
  

void xuatmang(int arr[], int n) 
{ 
    for (int i=0; i<n; ++i) 
        cout << arr[i] << " "; 
    cout << "\n"; 
} 
  

int main() 
{ 
    int arr[] = {41, 23, 14, 4, 56, 1}; 
    int n = sizeof(arr)/sizeof(arr[0]);
  gom(arr , n , i )
    sapxepcay(arr, n); 
    cout << " mang da sap xep la  "<<endl; 
    xuatmang(arr, n); 
    return 0;
}
