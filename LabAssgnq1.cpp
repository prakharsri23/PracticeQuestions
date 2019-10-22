#include<iostream>88//including input stream class
using namespace std;

class polygon//declaring a class
{ 
 public: 
 int width, height;//publically declaring a variable
 
 void set_value()//will set value
 { 
 cout<<"Enter value of width";
 cin>>width;//enter value of width
 cout<<"Enter value of height";
 cin>>height;//enter value of height
 }
virtual  void calculate_area ()= 0;
//pure virtual function
};
class Rectangle : public polygon//class rectangle publically inhriting class polygon
{ 
  public: 
  void calculate_area ()
  { 
    int area= width*height;
    cout<<"The area of rectangle is "<<area<<endl;
  }
};
class Triangle : public polygon
{ 
  public: 
  void calculate_area ()
  { 
    int area= 0.5*width*height;
    cout<<"Area of tringle is"<<" "<<area<<endl;
  }
};

int main ()
{  
  polygon *p; //pointer to base class is created
  Rectangle ob1; //object of derived class Rectangle is created
  Triangle ob2;  //object of derived class Triangle is created
  p= &ob1; //pointer is initialised to address of object of Rectangle class
  ob1.set_value();
  p->calculate_area();
  p=&ob2; //pointer is reinitialised to address of object of Triangle class
  ob2.set_value();
  p->calculate_area();
  return 0;
}
