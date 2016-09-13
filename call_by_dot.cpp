// LANGUAGE : C++


#include<iostream>
using namespace std;

class packet{

  public :
      void showMyName();             // CLASS FUNCTION
};


void packet :: showMyName()         //FUNCTION DEFINITION
{
    string name;                   //LOCAL VARIABLE OF THE FUNCTION
    cout<<"Enter your name: ";
    cin>>name;
    cout<<name;
}


int main()
{
    packet object1;             //CLASS OBJECT-->object1
    object1.showMyName();      //FUNCTION CALL BY DOT OPERATOR
}
