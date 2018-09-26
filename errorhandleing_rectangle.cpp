/* title : To implement exception handling in Rectangle class.
   author : aashish sapkota
   date : 8 Aug 2018
*/

#include <iostream>
using namespace std;

class Rectangle {
   private:
       int length;
       int breadth;

   public:
     class NegativeEx
     {
     public:
        string funcName;
        int value;

        NegativeEx(string fn, int val): funcName(fn),value(val){};

     };

     class MaxlengthEx
     {
     public:
        string funcName;
        int value;

     MaxlengthEx(string fn , int val) : funcName(fn) , value(val) {};

     };

    void setlength(int length)
    {
        if(length < 0)
            throw NegativeEx("setlength() function", length);

        if(length>999)
            throw MaxlengthEx("setlength() function", length);

        this -> length = length;

    }

     void setBreadth(int brd)
    {
        if(brd < 0)
            throw NegativeEx("setBreadth() function", brd );

        if(brd > 999)
            throw MaxlengthEx("setBreadth() function " , brd);

        this -> breadth = brd;

    }
};

int main()
{
    Rectangle r1;

    try
    {
        r1.setlength (5555);

    }
    try
    {
         r1.setBreadth(-2);
    }

    catch (Rectangle::NegativeEx negex)
    {
        cout << "Error in " << negex.funcName  << "  and the value is : " << negex.value << endl;

    }


    catch (Rectangle::MaxlengthEx maxex)
    {
        cout << "Error in length of  " << maxex.funcName  << "  and the value is : "  <<  maxex.value << endl;
    }

    return 0;
}
