/* title : program to find out the cartesen product between two sets
   author : aashish sapkota
   deerwalk institute of technology
   */
#include<iostream>
using namespace std;

int main(){
int seta[] = {1,2,3};
int setb[] = {4,5,6};

for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
       cout<<"("<<seta[i]<<","<<setb[j]<<")"<<endl;
    }
}

return 0;
}
