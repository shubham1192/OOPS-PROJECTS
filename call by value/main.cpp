#include <iostream>

using namespace std;
void swap(int x,int y){
    int temp,d;
    temp=x;
    x=y;
    y=temp;
    cout<<"After swapping no.s are:"<<endl;
    cout<<"a="<<x<<"\nb="<<y<<endl;
}
int main()
{
    int a,b,z;
    cout << "Enter first no." << endl;
    cin>>a;
    cout << "Enter second no." << endl;
    cin>>b;
    cout<<"Before swapping no.s are:"<<endl;
    cout<<"a="<<a<<"\nb="<<b<<endl;
    swap(a,b);
    return 0;
}
