/*Program using " TEMPLATE IN RECTANGLE CLASS."
Author: aashish Sapkota
Batch-2021'A'
Roll-704
*/

#include <iostream>
using namespace std;

template <class T>

class Rectangle{
  private:
      T length;
      T breadth;
    static int count;

  public:
    Rectangle(T length, T breadth);

    T getlength () { return this->length ;}
    T getbreadth () { return this->breadth ;}

   calcArea();
};

template <class T>

Rectangle <T> :: Rectangle (T length, T breadth)
{
    this -> length = length;
    this -> breadth = breadth;
}


template <class T>
T Rectangle <T> :: calcArea()
{

    return (this->length * this->breadth);
}

int main()
{
   int num1 = 10;
   int num2 = 20;

   float f1=22.5;
   float f2= 35.5;

   Rectangle <int> r1(num1,num2);
   Rectangle <float> r2 (f1,f2);

   cout<<r1.calcArea()<<endl;
   cout<<r2.calcArea()<<endl;
}
