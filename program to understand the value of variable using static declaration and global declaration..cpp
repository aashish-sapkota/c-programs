/* title : program to understand the value of variable using static declaration and global declaration.
    date: 27 MAY 2018
    author : aashish sapkota
*/
#include<iostream>
using namespace std;

void  counter_fn();
void static_count();

int counter=0;
using namespace std;
 int main()
 {
    int choice;
do{
 cout<<"press 1 to call the function using global variable and 2 to call using static value and 0 to exit"<<endl;
 cin>>choice;
 if(choice==1)
   counter_fn();
 if(choice==2)
    static_count();
 }while(choice!=0);
 }
 void  counter_fn()
 {
     counter++;
     cout<<"i have  been called "<<counter<<" times"<<endl;
     return ;
 }

 void static_count()
 {
     static int counter;
     counter++;
     cout<<"i have been called "<<counter<<" times"<<endl;
 }
