#include <iostream>
using namespace std;
double si(double p, double n, double r=5)
{
	return (p*n*r)/100;
}
int main()
{
    cout<<"*************************"<<endl;
    cout<<"SHUBHAM INDER 05916412819"<<endl;
    cout<<"*************************\n"<<endl;
	int p, n, r;
	cout<<"Enter principal amount: ";
	cin>>p;
	cout<<"Enter duration (in years): ";
	cin>>n;

	int opt;
	cout<<"\nInput 1 to enter rate\nInput 2 to for default value\n"<<endl;
	cin>>opt;
	switch(opt){
	    case 1:
	        cout<<"\nRate = ";
	        cin>>r;
            cout<<"Simple interest = "<<si(p, n, r);
	        break;
        case 2:
            //cout<<"Input 2 to for default value"<<endl;
            cout<<"\nRate = 5"<<endl;
            cout<<"Simple interest = "<<si(p, n);
            break;
	}
	//cout<<"Enter rate of interest: ";
	//cin>>r;
	//cout<<"Simple interest = "<<si(p, n, r);
	//cout<<"Simple interest = "<<si(p, n);
	return 0;
}
