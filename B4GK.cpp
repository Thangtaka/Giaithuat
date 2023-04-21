#include<iostream>
using namespace std;
void Sapxepctt(int a[], int n){
	int min;//
	for(int i=0; i<n-1; i++){
		min = i;
		for(int j=i+1; j<n; j++){
			if (a[j] < a[min]){
				min = j;
			}
		}
		swap(a[min], a[i]);
	}
}
 main()
{
	int a[6] = {41, 23, 4, 14, 56, 1};
	Sapxepctt(a, 6);
	cout<<"Mang sau khi sap xep:"<<endl;
	for(int i=0;i<6;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}
