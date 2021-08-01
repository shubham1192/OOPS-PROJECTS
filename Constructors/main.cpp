#include <iostream>
using namespace std;

// declare a class
class  Wall {

  private:
       double length,height;
       double *p;
       double *q;

   public:
    // create a constructor
    Wall() {

        // initialize private variables
        length = 4.78;

        cout << "1. Default constructor called" << endl;
        cout << "Length = " << length << endl;
    }
    Wall(double len) {
        length=len;
        cout << "\n2. One Argument constructor is called" << endl;
        cout<<"Length = "<<len<<endl;

    }
    Wall(double len, double hgt) {
        // initialize private variables
        length = len;
        height = hgt;
        p = new double;
        *p = len;
        q = new double;
        *q = hgt;

        cout << "\n3. Two Argument constructor is called" << endl;
        cout<<"Length = "<<len<<endl;
        cout<<"Height = "<<hgt<<endl;
    }
    // copy constructor with a Wall object as parameter
    Wall(Wall &ob) {
        // initialize private variables
        length = ob.length;
        height = ob.height;
        cout << "\n5. Copy constructor is called" << endl;
    }

    double calculateArea() {
        return length * height;
    }
    void display()
    {
        cout << "\n4. Dynamic constructor" << endl;
        cout <<"Sum(Length+Height) = "<< *p + *q << endl;
    }
};


int main() {

    // create an object
    cout<<"*************************"<<endl;
    cout<<"SHUBHAM INDER 05916412819"<<endl;
    cout<<"*************************\n"<<endl;
    double l,h;
    cout<<"Enter length = "; cin>>l;
    cout<<"Enter height = "; cin>>h;
    Wall wall1;

    Wall wall2(l);

    Wall wall3(l,h);

    cout << "Area(Length x height): " << wall3.calculateArea() << endl;

    wall3.display();

    Wall wall4 = wall3;

    // print area of wall2
    cout << "Area from (TWO ARGUMENT CONSTRUCTOR) is copied which is: " << wall4.calculateArea() << endl;

    return 0;
}
