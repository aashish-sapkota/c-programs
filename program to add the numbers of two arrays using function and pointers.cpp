/* title : program to add the numbers of two arrays using function and pointers
    date: 27 MAY 2018
    author : aashish sapkota
*/
#include<iostream>
#define SIZE 5
using namespace std;

void addarray(float* list1,float* list2,float* result, int num);

int main()
{

 float array1[SIZE]={1.25,2.1,3.0,4.57,5.5}, array2[SIZE]={6.77,7.45,8.45,9.0,1.0};
 float result[SIZE];

 addarray(array1,array2,result,SIZE);

cout<<"the sum of array elements is"<<endl;
for(int i=0;i<5;i++)
cout<<*(result+i)<<"\t";
return 0;
}
void addarray(float* list1,float* list2,float* result, int num)
{
    for(int i=0; i<num;i++)
    {
        *(result+i)= *(list1+i) + *(list2+i);
    }
    return ;
}

