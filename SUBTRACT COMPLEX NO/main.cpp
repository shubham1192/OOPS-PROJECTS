#include <iostream>

using namespace std;
class complex{
public:
int real,img,sub;
};
int show(int a ,int b){
    if(b<0){
        cout<<a<<b<<"i"<<endl;
    }
    else
    cout<<a<<"+"<<b<<"i"<<endl;
}
int sub_real(int a,int b){



        return a-b;

}
int sub_img(int a,int b){
    return a-b;

}
int main()
{
    int res1,res2;
    complex a1,b1i,a2,b2i,rsub,isub;
    cout << "Enter real part" << endl; cin>>a1.real;
    cout << "Enter imaginary part" << endl; cin>>b1i.img;
    res1=show(a1.real,b1i.img);
    cout << "Enter real part" << endl; cin>>a2.real;
    cout << "Enter imaginary part" << endl; cin>>b2i.img;
    res2=show(a2.real,b2i.img);
    rsub.sub=sub_real(a1.real,a2.real);
    isub.sub=sub_img(b1i.img,b2i.img);
    if(isub.sub<0){
        cout<<"Sub is "<<rsub.sub<<isub.sub<<"i"<<endl;
    }
    else
    cout<<"Sub is "<<rsub.sub<<"+"<<isub.sub<<"i"<<endl;
    return 0;
}
