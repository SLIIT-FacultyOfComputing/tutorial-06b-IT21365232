#include <iostream>
#include "Student.h"
using namespace std;
int main() {
  
// == DO NOT CHANGE THE MAIN PROGRAM =================
   Student mystd;
   mystd.assignDetails(1212, "Amalinga");
   mystd.display();
//==========================
   return 0;
}
/*#include<iostream>
using namespace std;
class Student{
	private :
		int studentid;
		char name[20];
	
	public :
	    void setassignsDetails(int stid,char name);
		void assignsDetails();
		
};
void Student::setassignsDetails(int sid,char name){
	studentid=sid;
	name=name[20];
}
void Student::assignsDetails(){
	   	cout<<"Student id ="<<studentid<<endl<<"Student Name = "<<name[20]<<endl;
	}
	int main(){
		Student s1,s2;
		
		
		s1.setassignsDetails(55, bosdjvb);
		s1.assignsDetails(); 
		
		return 0;
	}
*/