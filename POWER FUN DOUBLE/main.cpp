#include <iostream>
#include <iomanip>
//using namespace std;
double power(double x,double y)
{
    double power,s;
    s=1;
    std::cin>>x>>y;
    if(y==0){
        std::cout<<"1"<<std::endl;
        return 1;
    }
    else
    for(int i=0;i<y;i++)
{
       power=s*x;
       s=power;
}
    return power;
    //cout <<power<< endl;

}
int main()
{
    int m,n;
    std::cout<< std::fixed<<power(m,n);
    return 0;
}
