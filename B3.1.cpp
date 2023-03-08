#include<iostream>
#include<algorithm>
using namespace std;
void nhapMang(int arr[], int &n)
{
    do{
	cout << "Nhap so luong phan tu n : ";
	cin >> n;
    if(n > 50){
    cout << "nhap mang moi tay lam , duoi 50 thoi "<< endl ;
    }
    }while( n  > 50);

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];

	}
}
void xuatMang(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "arr[" << i << "] = " << arr[i] << endl;
	}
}
int main()
{
    int arr[50];
    int n;
    nhapMang(arr, n);
    xuatMang(arr, n);
    sort(arr , arr + n);
     cout << endl << "Day so sap xep tang dan: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << "  ";
    }
    return 0;
}
