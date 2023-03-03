#include<iostream>
#include<string.h>
using namespace std;
// P(x) = a.n.X^n + a.n-1.X^n-1 + … + a.1.X + a.0 và định nghĩa hàm nhập và hàm xuất cho kiểu dữ liệu này
int main(){
    cout<<" da thuc P(x) = a.n.X^n + a.n-1.X^n-1 + … + a.1.X + a.0 "<< endl;
    int a , n ;
    cout<< "nhap a "<<endl;
    cin>>a;
    do {
    cout <<" nhap n "<< endl;
    cin >>n;
    if(n < 0)
    {
        cout<<" nhap lai , n la so nguyen duong "<< endl;
    }
    }while( n <0 );
    if(a==0 || n ==0){ 
        cout << " dang thuc P =0"<< endl;
    }
    cout <<" dang thuc P(x) co bac "<<n<< endl;
    for( int i = 0; i <=n; i++){
        
        cout<<" so hang thu "<<i<<" la "<<a<<"."<<i<<".X^"<<i<< endl;
    }
        for( int x = 0; x<=n; x++){
        cout<<a<<"."<<x<<".X^"<<x<<" + ";
        }

    return 0;
    
    
}
