#include<iostream>
using namespace std;

int Timkiem(int a[],int n,int x)
{
	int left, right, mid; left=0; right=n-1;
	do{
		mid=(left+right)/2;
		if(a[mid]==x){
			return mid;
		}
		else if(a[mid]<x){
			left=mid+1;
		}
		else{
			right=mid-1;
		}
	}while(left<=right);
	return -1;
}
int main(){
  int a[5]={2,3,4,10,40};
  int n = sizeof(a) / sizeof(a[0];
  int x = 10;
  Timkiem (a , n ,x);
  int c =  Timkiem (a , n ,x);
  if( c == -1 ){
  cout<<"ko co trong mang "<<endl;                           
  }                          
  else{                           
   cout<<"so can tim X o vi tri"<<mid<<endl;                          
  }                      
  endl;
