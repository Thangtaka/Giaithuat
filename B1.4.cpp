#include<iostream> 
using namespace std;
int main(){
    int a, n ;
    cout << " bieu dien don thuc co dang P = ax^n " << endl;
    do {
        cout<< " nhap a ,khac 0 "<< endl;
        cin>> a;
        if ( a == 0 ){
            cout << " moi nhap lai "<< endl;
        }
    }while (a==0);
    cout << " nhap gia tri cua n "<< endl;
    cin>>n;
    if (n == 1){
        cout << " dang thuc co dang P = ax "<< endl;
    }
    else if( n == 0 ){
        cout << " dang thuc co dang P = a^"<< endl; 
    }
    else {
        cout << " dang thuc co dang P = ax^"<<n<< endl;
    }
    return 0; 
    
}
