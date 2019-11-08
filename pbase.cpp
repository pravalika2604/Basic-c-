#include<iostream>
using namespace std;

class Base
{
    public:
    virtual void disp()=0;
};
class A:public Base
{
    int val1;
    public:
    A(int x)
    {
       val1=x; 
    }
    void disp()
    {
        cout<<"val1 in class A"<<val1<<endl;
    }
};
class B:public Base
{
    int val2;
    public:
    B(int y)
    {
        val2=y;
    }
    void disp()
    {
        cout<<"val2 in class B"<<val2<<endl;
    }
};
int main()
{
   Base *p;
   A obj1(100);
   B obj2(200);
   p=& obj1;
   p->disp();
   p=& obj2;
   p->disp();
   return 0;
}
