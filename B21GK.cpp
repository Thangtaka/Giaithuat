//T(n)=n!
#include<iostream>
using namespace std;
int Tich(int n)
{
    if (n == 1)
        return 1;
    return n * Tich(n - 1);
}
int main()
{
    int n;
    cin >> n;
    cout << "Ket qua can tim la: " << giaiThua(n)<<endl;
    return 0;
}
