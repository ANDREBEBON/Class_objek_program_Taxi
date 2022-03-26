#include <iostream>
#include <string>

using namespace std;

class Taxi{
	public:
	string nama,onduty,number,pickup,dropof;
};

int main(int argc,char const *argv[])
{
	Taxi taxi1;
	taxi1.nama ="andre";
	cout<<" Driver Name 		: "<<taxi1.nama<<endl;
	Taxi taxi2;
	taxi2.onduty = "Yes";
	cout<<" On Duty		: "<<taxi2.onduty<<endl;
	Taxi taxi3;
	taxi3.number = "10";
	cout<<" Number Passenger	: "<<taxi3.number<<endl<<endl;
	Taxi taxi4;
	taxi4.pickup =" Jono sedang menjemput penumpang ";
	cout<<taxi4.pickup<<endl;
	Taxi taxi5;
	taxi5.dropof =" Jono selesai mengantar penumpang ";
	cout<<taxi5.dropof;
	
	return 0;
}
