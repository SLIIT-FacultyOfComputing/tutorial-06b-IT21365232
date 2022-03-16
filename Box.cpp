#include <iostream>
using namespace std;
#include "Box.h"

int main() {

  
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
   
      return 0;
}
