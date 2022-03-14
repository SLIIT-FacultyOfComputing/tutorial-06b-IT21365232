#include<Student.h>
#include <iostream>

using namespace std;

void Student::setassignsDetails(int sid,char n[]){
	studentid=sid;
	name[20]=n[20];
}
void Student::assignsDetails(){
	   	cout<<"Student id ="<<studentid<<endl<<"Student Name = "<<name[20]<<endl;
	}
	int main(){
		Student s1,s2;
		
		s1.setassignsDetails(55,binu);
		s1.assignsDetails(); 
		
		return 0;
	}