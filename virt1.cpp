#include<iostream>
using namespace std;

class car
{
	public:
	virtual void show()
	{
		cout<<"car"<<endl;
	}
};
class bmw:public car
{
	public:
	virtual void show()
	{
		cout<<"bmw"<<endl;
	}
};
class maruthi:public bmw
{
	public:
	virtual void show()
	{
		cout<<"maruthi"<<endl;
	}
};
void display(car *q)
{
	q->show();
}
int main()
{
	bmw b;
	maruthi m;
	car *arr1[5]={&b,&m};
	
		for(int i=0;i<2;i++)
		{
			display(arr1[i]);
		}
	
	return 0;
}
	

