#include <iostream>
using namespace std;
#include "Box.h"

int main() {
  
   // 1. Create a Box type object called box1
  Box box1;
  
   // ======= DO NOT CHANGE THE INPUT ===========
   int height, length, width;
   cout << "Enter the Height of the Box : ";
   cin >> height;
   cout << "Enter the Length of the Box : ";
   cin >> length;
   cout << "Enter the width of the Box : ";
   cin >> width;
   // ===========================================
  
   // 2. Use setters assign height, length, width throw
  void Box::setBox(int l,int w,int h){
  	height=l;
  	width=w;
  	length=l;
  	
  }
  void Box::getBox(){
  	return height,width,length;
  	}
  	
  	int Box::calcVolume(){
  		int area=height*width*length;
  		return area;
	  }
   // === DO NOT CHANGE THE OUTPUT =============
   cout << "Box Height " << box1.getHeight() << endl;
   cout << "Box Length " << box1.getLength() << endl;
   cout << "Box Width " << box1.getWidth() << endl;
   cout << "Volume of Box is " << box1.calcVolume() << endl;
   // ==========================================
      return 0;
}
