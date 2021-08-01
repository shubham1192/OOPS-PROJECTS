#include<iostream>
using namespace std;
class B {
   public:
      virtual void s() {
         cout<<"In Base \n";
      }
};
class D: public B {
   public:
      void s() {
         cout<<"In Derived \n";
      }
};
int main(void) {
    B b;
    D d; // An object of class D
    B *bptr; // A pointer of type B* pointing to d
    bptr=&b;
    bptr->s(); // prints "D::s() called"
    bptr=&d;
    bptr->s();
   return 0;
}
