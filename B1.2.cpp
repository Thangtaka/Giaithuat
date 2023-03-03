#include<iostream>
using namespace std;
void nhap( float &b, float &c , float &d, float &honso, float &a ){
    cout << "Nhap gia tri cua phan nguyen" << endl;
    cin>>a;
    cout << "Nhap gia tri cua phan tu" << endl;
    cin>>b;
    do
    {
    cout << "Nhap gia tri cua phan mau, ko dc bang 0 " << endl;
    cin>>c;
    if(c == 0){
        cout << " moi nhap lai,  " << endl;
    }
}while(c==0);
}
int main (){
    float a;
    float d =0;
    float honso =0;
    float b,c;
    nhap(b , c , d , honso , a );
     d = b / c;
     honso = a + d;
    cout <<" hon so rut gon la "<<honso<< endl;    
    return 0;

}
