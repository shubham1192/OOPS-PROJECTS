#include <iostream>
using namespace std;
    int si(int p,int t,int r=10)
    {

        return (p*t*r)/100;
    }
int main()
{
    int p,r,t;
    cout<<"Enter Principal"<<endl;
    cin>>p;
    cout<<"Enter Time"<<endl;
    cin>>t;
    cout<<"Principal ="<<p<<endl;
    cout<<"Time ="<<t<<endl;
    cout<<"SI="<<si(p,t)<<endl;
}
