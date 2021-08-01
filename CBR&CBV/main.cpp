#include <iostream>
using namespace std;
void CBV(int,int);
void CBR(int & ,int & );
int main()
{
    cout<<"026 Shivam Yadav \n\n";
    int x,y;
    cout << "\tEnter the first number x : ";
    cin >> x;
    cout << "\n\tEnter the second number y : ";
    cin >> y;
    cout<<"\n\tInput numbers are :";
    cout<<"\n\t"<<"x = "<<x<<"\t"<<"y= "<<y<<endl;
    CBV(x,y);
    CBR(x,y);
    return 0;
}
void CBV(int a,int b)
{
    int t;
    t = a;
    a = b;
    b = t;
    cout<<"\n\tBy Call by Value\n";
    cout<<"\n\t x = "<<a<<"\t"<<"y = "<<b<<endl;
}
void CBR(int & a,int & b)
{
    int t;
    t = a;
    a = b;
    b = t;
    cout<<"\n\tBy Call by Reference\n";
    cout<<"\n\t x = "<<a<<"\t"<<"y = "<<b<<endl;
    cout<<"\n\n   *******************************************************";
}

