#include <iostream>
using namespace std;

// declare a class
class  Wall {

  private:
       //double length,height;
       int *le;
       int *hi;

   public:
    // create a constructo
    Wall(int l1,int h1){
    le=new int;
    *le=l1;
    hi=new int;
    *hi=h1;
    }
    int add(){
        return *le+*hi;
        //cout<<sum;
    }
};


int main() {
int l,h;
cin>>l>>h;
Wall wall5(l,h);
    cout << "Area of Wall 5: " <<endl;
    cout<<wall5.add();

    return 0;
}
