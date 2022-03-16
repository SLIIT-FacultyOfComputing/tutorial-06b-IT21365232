#include"Student.h"
#include<iostream>
#include<cstring>
using namespace std;
int main(){

void Student::assignDetails(int stid,const char pname[])
{
	
	studentid=sid;
	strcpy_s(name,pname);
  
}
void Student::display(){
	   	cout<<"Student id ="<<studentid<<"Student Name = "<<name<<endl;
	}

return 0;
}