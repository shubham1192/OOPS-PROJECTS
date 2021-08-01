#include <iostream> 
using namespace std;
class complex{
public:
int real,img,sum,sub;
int sum_real(int a,int b);
};
int show(int a ,int b){
    if(b<0){
        cout<<"Complex no. is "<<a<<b<<"i"<<endl;
    }
    else
    cout<<"Complex no. is "<<a<<"+"<<b<<"i"<<endl;
    return 0;

}
int complex::sum_real(int a,int b){
    return a+b;
}
int sum_img(int a,int b){
    return a+b;
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
    complex a1,b1i,a2,b2i,rsum,isum,rsub,isub;
    cout<<"*************************"<<endl;
    cout<<"SHUBHAM INDER 05916412819"<<endl;
    cout<<"*************************"<<endl;
    cout<<"Input the complex numbers by choosing the correct options and then proceed further with the operations-"<<endl;
    cout<<"1. Enter first complex number\n2. Enter second complex number\n3. View the complex no.s\n4. Sum\n5. Subtraction"<<endl;
    int n;
    do{
    cin>>n;
    switch(n){
        case 1:
            cout << "Enter real part for 1st complex no." << endl; cin>>a1.real;
            cout << "Enter imaginary part for 1st complex no." << endl; cin>>b1i.img;
            res1=show(a1.real,b1i.img);
            break;
        case 2:
            cout << "Enter real part for 2nd complex no." << endl; cin>>a2.real;
            cout << "Enter imaginary part for 2nd complex no." << endl; cin>>b2i.img;
            res2=show(a2.real,b2i.img);
            break;
        case 3:
            res1=show(a1.real,b1i.img);
            res2=show(a2.real,b2i.img);
            break;
        case 4:
            rsum.sum=rsum.sum_real(a1.real,a2.real);
            isum.sum=sum_img(b1i.img,b2i.img);
             if(isum.sum<0){
                    cout<<"Sum = "<<rsum.sum<<isum.sum<<"i"<<endl;
             }
             else
                cout<<"Sum = "<<rsum.sum<<"+"<<isum.sum<<"i"<<endl;
                break;
        case 5:
             rsub.sub=sub_real(a1.real,a2.real);
             isub.sub=sub_img(b1i.img,b2i.img);
            if(isub.sub<0){
                    cout<<"Subtraction = "<<rsub.sub<<isub.sub<<"i"<<endl;
            }
            else
                cout<<"Subtraction = "<<rsub.sub<<"+"<<isub.sub<<"i"<<endl;
                break;
        default:
            cout<<"Invalid,Please choose the right option or press 0 to exit"<<endl;

    }
    }while(n !=0);
    return 0;
}
