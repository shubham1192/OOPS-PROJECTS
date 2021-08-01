#include <iostream>

using namespace std;
class complex{
public:
int real,img,sum;
};
int show(int a ,int b){
    if(b<0){
        cout<<a<<b<<"i"<<endl;
    }
    else
    cout<<a<<"+"<<b<<"i"<<endl;
}
int sum_real(int a,int b){
    return a+b;
}
int sum_img(int a,int b){
    return a+b;

}
int main()
{
    int res1,res2;
    complex a1,b1i,a2,b2i,s,reals,imgs;
    cout << "Enter real part" << endl; cin>>a1.real;
    cout << "Enter imaginary part" << endl; cin>>b1i.img;
    res1=show(a1.real,b1i.img);
    cout << "Enter real part" << endl; cin>>a2.real;
    cout << "Enter imaginary part" << endl; cin>>b2i.img;
    res2=show(a2.real,b2i.img);
    reals.sum=sum_real(a1.real,a2.real);
    imgs.sum=sum_img(b1i.img,b2i.img);
    if(imgs.sum<0){
        cout<<"Sum is "<<reals.sum<<imgs.sum<<"i"<<endl;
    }
    else
    cout<<"Sum is "<<reals.sum<<"+"<<imgs.sum<<"i"<<endl;
    return 0;
}
