#include<iostream>
#include<math.h>
using namespace std;
float bac3(float x){
    if(x==0){
        return 0;
    }
    else {
        return (exp((log(x)/3)));
        // e mu ln(x)/3
    }
}
int main(){
    float x ;
    cout<<"nhap x"<< endl;
    cin >> x;
    x = bac3(x);
    cout <<" can bac 3 cua x la "<<x<<endl;
    return 0;
}
