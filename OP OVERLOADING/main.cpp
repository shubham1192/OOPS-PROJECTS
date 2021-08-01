//Demonstrate Operator Overloading
#include<iostream>
using namespace std;
class UnaryFriend
{
int a, b, c;
public:
void getvalues()
{
cout<<"*************************"<<endl;
cout<<"SHUBHAM INDER 05916412819"<<endl;
cout<<"*************************\n"<<endl;

cout<<"Get A: ";
cin>>a;
cout<<"Get B: ";
cin>>b;
cout<<"Get C: ";
cin>>c;
cout<<endl<<"Value of A, B, C: "<<endl<<a<<endl<<b<<endl<<c<<endl;
}
void show()
{
cout<<"A = "<<a<<endl<<"B = "<<b<<endl<<"C = "<<c<<endl;
}
void friend operator - (UnaryFriend &x); //Pass by reference
};
void operator - (UnaryFriend &x)
{
x.a = -x.a; //Object name must be used as it is a friend function
x.b = -x.b;
x.c = -x.c;
}
//Driver code
int main()
{
UnaryFriend x1;
x1.getvalues();
cout<<"\tBefore Overloading\n";
x1.show();
cout<<"\tAfter Overloading\n";
-x1;
x1.show();
}
