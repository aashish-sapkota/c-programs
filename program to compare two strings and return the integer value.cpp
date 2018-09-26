/* title : program to compare two strings and return the integer value
    date: 27 MAY 2018
    author : aashish sapkota
*/
 #include<iostream>
using namespace std;

int compstr(char* str1, char* str2);

int main()
{
    int result;
    char  str1[50];
    char  str2[50];

    cout<<"enter the first string:"<<endl;
    cin>>str1;

    cout<<"enter second line:"<<endl;
    cin>>str2;

    result=compstr(str1,str2);
    cout<<"the result is"<<result; //-1 is returned if first string comes before second, 0 if both are equal, 1 if second string comes after the first one.

    return 0;
}

int compstr(char* str1, char* str2)
{
char s1char, s2char;
int i=0;
do{

s1char= *(str1+i);
s2char= *(str2+i);

if(s1char<s2char){
    return -1;
    break;
}

if(s1char>s2char){
    return 1;
    break;
}

if(s1char==s2char){
    return 0;
    break;
}
i++;
}while(i<50);

}
