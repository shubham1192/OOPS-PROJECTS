#include <iostream>

using namespace std;
class complex{
public:
int real,img;
};
int show(int a ,int b){
    cout<<a<<"+"<<b<<"i"<<endl;
}
int main()
{
    int res;
    complex a,b;
    cout << "Enter real part" << endl; cin>>a.real;
    cout << "Enter imaginary part" << endl; cin>>b.img;
    res=show(a.real,b.img);
    return 0;
}
