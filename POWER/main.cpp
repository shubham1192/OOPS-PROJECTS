#include <iostream>

using namespace std;

int main()
{
    int m,n;
    //int t=1;
    int pow,s;
    s=1;
    cin>>m>>n;
    if(n==0){
        cout<<"1"<<endl;
        return 1;
    }
    else
    for(int i=0;i<n;i++)
    {
       //t=t*m;
       pow=s*m;
       s=pow;
    }
    //cout <<t<< endl;
    cout <<pow<< endl;
    return 0;
}
