#include<iostream>
using namespace std;
class student
{
   int id;
  public:
  student()      //default constructor
{
    id=2;
}
  student(int a)   //parameterised constructor
{
     id=a;
}
student(student &t)   //copy constructor
{
   id=t.id;
}
void display()
{
   cout<<"id is"<<id<<endl;
}
};
int main()
{
   student r(34);   //parameterised constructor
   student t;     //default constructor
   r.display();
   t.display();
   student s(r);    //copy construtor
  s.display();
return 0;
}