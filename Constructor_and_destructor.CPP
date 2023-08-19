#include <iostream.h>
#include <conio.h>
class Ratio {
	public:
	Ratio() {
	   cout<<"OBJECT IS BORN \n";
	}
	void ratiox() {
	   cout<<"NOW OBJECT IS ALIVE \n";
	}
	~Ratio() {
	   cout<<"OBJECT DIES \n";
	}
};
void main() {
	clrscr();
	{
	Ratio r1;
	r1.ratiox();
	}
	getch();
}