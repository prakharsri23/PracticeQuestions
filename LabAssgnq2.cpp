#include<iostream>//including input stream
using namespace std;

class Shape//declaring a class
{
	public://in public
		virtual void area ()//virtual function
		{ 
		cout<<"The area is shown"<<endl;
		}; //virtual function
		virtual void display ()
		{
          cout<<"The name of shape is shown"<<endl;
		} //virtual function
};
class Circle : public Shape//inheriting a class
{ 
  public:
  void display () //function display is overriden in the derived classes
  { 
  cout<<"The shape is a circle"<<endl;
   } 
  void area () //function area is overriden in the dreived classes
  { 
    int r;
    cout<<"Enter value of radius";
    cin>>r;
    double area;
    area=3.14*r*r;
    cout<<"The area is: "<<area<<endl;
}
};
  class Rectangle: public Shape//Shape is a base class
  {
  public: 
    void display ()
    { 
      cout<<"TThe shape is a rectangle"<<endl;
	}
	void area ()
	{ 
	  int a,b;
	  cout<<"Enter length";
	  cin>>a;
	  cout<<"Enter breadth";
	  cin>>b;
	  int area;
	  area=a*b;
	  cout<<"The area is: "<<area<<endl;
	}
  };
  class Trapezoid: public Shape
{ 
  public: 
  void display ()
  { 
    cout<<"The shape is trapezoid"<<endl;
  }
  void area ()
  { 
    int a,b,h;
    cout<<"Enter base";
    cin>>a;
    cout<<"Enter breadth";
    cin>>b;
    cout<<"Enter height";
    cin>>h;
    double c= (a+b)/2;
    double area;
    area= c*h;
    cout<<"The area is: "<<area<<endl;
}
  
};
int main ()
{ 
  Shape *p= new Shape (); //a pointer of the base class is created
  p->display();// the display function in the base class is invoked
  p->area(); //the area and display function are virtual in base class and therefore overriden in the derived classes
  p= new Circle (); //the pointer will now invoke functions of the class Circle
  p->display(); //displays shape circle
  p->area();
   p= new Rectangle ();
  p->display(); //displays shape rectangle
  p->area();
   p= new Trapezoid ();
  p->display();
  p->area();
  return 0;
}

