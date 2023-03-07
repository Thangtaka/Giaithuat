#include<iostream>
using namespace std;
int Tich(int n){
if (n >= 1){
    return Tich(n-1) * n ;
}
else 
{ 
 return 1;
}
}
int main( ){
    int n;
    int Sum = 0 ;
    do{
    cout<<"Nhap n "<< endl;
    cin >> n;
    if( n < 0){ 
        cout <<" tinh so tu nhien ban ei , nhap lai de :"<< endl;
    }
    }while( n < 0);
    Sum = Tich(n);
    cout << " giai thua cua n ! la :  "<<Sum<< endl;
    return 0; 
    
}
