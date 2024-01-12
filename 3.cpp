/*
2. WAP to create a class to read and add two times.

enter time in seconds :5200
HH-MM-SS=1 : 26 : 1600
*/
#include<iostream>

using namespace std;

class Time{
	public :
	int sec;
	int s;
	int min;
	int hour;
	
};

int main(){
	Time t;
	
	cout<<"enter time in seconds :";
	cin>>t.sec;
	t.hour=t.sec/3600;
	t.sec=t.sec%3600;
	t.min=t.sec/60;
	t.s=t.sec%60;
	cout<<"HH-MM-SS="<< t.hour<<" : "<<t.min<<" : "<<t.sec;
	
    return 0;
}
