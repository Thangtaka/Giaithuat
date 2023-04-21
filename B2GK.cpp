#include <iostream> 
using namespace std; 
  
int TImkiemtt(int a[], int n, int x) 
{ 
    int i; 
    for (i = 0; i < n; i++) 
        if (arr[i] == x) 
            return i; 
    return -1; 
} 
  
int main() 
{ 
    int a[] = { 2, 3, 4, 10, 40 }; 
    int x = 10; 
    int n = sizeof(a) / sizeof(a[0]); 
    int c = search(arr, n, x); 
   if(c == -1){ cout<<"ko co trong mang"<<endl; }
   else{ cout<<"nam o vi tri  " <<i<<endl; }
   return 0; 
}
