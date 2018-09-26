
/* title : program to convert the given hours, minutes, seconds to seconds by passing to function by reference
    date: 27 MAY 2018
    author : aashish sapkota
*/
#include<iostream>

using namespace std;

long int hms_to_secs(int& hrs, int& mins, int& secs);

int main()
{
long int seconds;
int hour,minutes,secs,choice;

do{
 do{
cout<<"enter time in hours: "<<endl;
cin>>hour;

 if(hour>24){
     do{
    cout<<"enter the hours less than 24"<<endl;
    cin>>hour;

 }while(hour>24);
 }
 }while(hour>24);


  do{
cout<<"enter time in minutes: "<<endl;
cin>>minutes;

if(minutes>60){
     do{
    cout<<"enter the minutes less than 60"<<endl;
    cin>>minutes;
 }while(minutes>60);
}
 }while(minutes>60);


do{
cout<<"enter time in secs: "<<endl;
cin>>secs;
if(secs>60){
     do{
    cout<<"enter the seconds less than 60"<<endl;
    cin>>secs;
 }while(secs>60);
}
}while(secs>60);

seconds=hms_to_secs(hour,minutes,secs);
cout<<"the time in seconds is :"<<seconds<<endl;

cout<<"press 1 to continue and 0 to exit"<<endl;
cin>> choice;
cout<<"\n\n";
}while(choice!=0);
}


long int hms_to_secs(int& hrs, int& mins, int& secs)
{

 long int result;
 int hrs_sec, mins_sec;
 int seconds;

 hrs_sec = hrs*60*60;
 mins_sec = mins*60;
 seconds = secs;
 result = hrs_sec + mins_sec + seconds;

 return result;
}
