#include<iostream>
using namespace std;
class Enclosing 		             /* start of Enclosing class declaration */
{	 
public:
	int x=7;
	
	class Nested 
    	{              			/* start of Nested class declaration */
	    	int y=2;
			public: 
	   	 void NestedFun(Enclosing e) 
	   	 {
		    	cout<<e.x; 	// works fine: nested class can access 
					// private members of Enclosing class
	   	 }	 
    }; 				// declaration Nested class ends here
}; 					// declaration Enclosing class ends here
int main()
{
	Enclosing ob1;
	ob1.x=7;
	Enclosing :: Nested ob;
	ob.NestedFun(ob1);
}

