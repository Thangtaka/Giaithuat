#include<iostream>
using namespace std;
void  nhap( int &x , int &y)
{
    cout <<"nhap toa do diem x "<< endl;
    cin >>x;
    cout <<"nhap toan do diem y "<< endl;
    cin >>y;
    
}
int main(){
   int x,y;
   nhap(x, y);
   cout << " toa di cua diem tren mat phang 0xy la :"<<x<<"  "<<y<<endl;
   return 0;
}
