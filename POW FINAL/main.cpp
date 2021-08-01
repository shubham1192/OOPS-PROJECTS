#include <iostream>
#include<iomanip>
//using namespace std;
int power(int x)
{
    int power,s,y;
    s=1;
    //std::cout<<"Enter base"<<endl;
    //cin>>x;
    std::cout<<"Enter exponent"<<std::endl;
    std::cin>>y;

    //cin>>x>>y;
    if(y==0)
    {
        //cout<<"1"<<endl;
        return 1;
    }
    else
    for(int i=0;i<y;i++)
    {
        power=s*x;
        s=power;
        //cout<<"yo";
    }
    std::cout<<"Value of "<<x<<"^"<<y<<" = "<<power;
    //return power;
    //return power;
    //cout <<power<< endl;

}
double power(double x,double y) //function overloading
{
    double power,s;
    s=1;
    //cout<<"Enter base"<<endl;
    //cin>>x;
    std::cout<<"Enter exponent"<<std::endl;
    std::cin>>y;
    //cin>>x>>y;
    if(y==0)
    {
        //cout<<"1"<<endl;
        return 1;
    }
    else
    for(int i=0;i<y;i++)
    {
        power=s*x;
        s=power;
    }
    std::cout<<"Value of "<<x<<"^"<<y<<" = "<<std::fixed<<power;
    //return power;
    //cout <<power<< endl;
}

int main()
{
    std::cout<<"*************************"<<std::endl;
    std::cout<<"SHUBHAM INDER 05916412819"<<std::endl;
    std::cout<<"*************************"<<std::endl;
    double m;
    //double c=123456789.1112131415;
    //std::cout<<std::fixed<<c<<endl;
    int n;
    std::cout<<"Enter base"<<std::endl;
    std::cin>>m;
    int b=static_cast<int>(m);
    //cout<<b<<endl;
    if(m==b)
    {
        power(m);
    }
    else
    //int m;
    //double p,q;
    power(m,n);
    //power(p,q);
    return 0;
}
