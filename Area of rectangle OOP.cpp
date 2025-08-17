#include<iostream>
using namespace std;
class Rectangle
{
	public:
	float length,width,area;
	void input()
	{
		cout<<"Enter Rectangle Dimensions"<<endl<<"1.Length"<<endl<<"2.Width"<<endl;
		cin>>length>>width;
	}
	void output()
	{
		area = length*width;
		cout<<"You entered Rectangle Dimensions"<<endl<<"1.Length = "<<length<<endl<<"2.Width = "<<width<<endl;
		cout<<"Area of Rectangle is "<<area;
	}
};
int main()
{
	Rectangle rec;
	rec.input();
	rec.output();
	return 0;
}
