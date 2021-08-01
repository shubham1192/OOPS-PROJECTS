#include <iostream>

using namespace std;

class stu
{
    int id;
    char name[50];
public:
    void getstu()
    {
        cout<<"*************************"<<endl;
        cout<<"SHUBHAM INDER 05916412819"<<endl;
        cout<<"*************************\n"<<endl;
        cout<<"Enter ID and Name"<<endl;
        cin>>id>>name;
    }
    void putstu()
    {
        cout<<"ID = "<<id<<endl;
        cout<<"Name = "<<name<<endl;
    }
};

class marks: public stu
{
protected:
    int m1,m2,m3;
public:
    void getmarks()
    {
        cout<<"\nEnter marks of 3 subjects"<<endl;
        cin>>m1>>m2>>m3;
    }
    void putmarks()
    {
        cout<<"M1 = "<<m1<<endl;
        cout<<"M2 = "<<m2<<endl;
        cout<<"M3 = "<<m3<<endl;
    }
};

class sports
{
protected:
    int spmarks;
public:
    void sp()
    {
        cout<<"\nInput 1, if you have participated in any sports \nInput 2, if you have not participated in any sports"<<endl;
        int n;
        cin>>n;
        switch(n)
        {
        case 1:
            spmarks=5;
            cout<<"Sports marks = "<<spmarks<<endl;
            break;
        case 2:
            spmarks=0;
            cout<<"Sports marks = "<<spmarks<<endl;
            break;
        }
    }
};
class result:public marks,public sports
{
    int tot;
    float avg;
public:
    void show()
    {
        tot=m1+m2+m3;
        avg=tot/3.0;
        cout<<"\nAVERAGE = "<<avg<<endl;
        cout<<"\nTOTAL (AVG + SPORTS) = "<<avg+spmarks;
    }
};
int main()
{
    result r;
    r.getstu();
    r.putstu();
    r.getmarks();
    r.putmarks();
    r.sp();
    r.show();
    return 0;
}
