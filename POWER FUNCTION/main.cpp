#include <iostream>
using namespace std;
int power(int x,int y)
{
    int power,s;
    s=1;
    cin>>x>>y;
    if(y==0){
        cout<<"1"<<endl;
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
    cout<<power(m,n);
    return 0;
}
