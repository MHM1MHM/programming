#include <iostream>

using namespace std;

main() {
int salary,A;
 cout<<"Please Enter your mountly Salary: ";
 cin>>salary;
if (salary<6000000){
	cout<<"There will be NO TAX for your Salary";
}
else if (salary>=6000000 && salary<8000000){
	A=(salary*95)/100;
	cout<<"Your Salary with TAX apllied on it: "<<A;
}
else if (salary>=8000000 && salary<10000000){
	A=(salary*90)/100; 
	cout<<"Your Salary with TAX apllied on it: "<<A;
}
else if (salary>=10000000 && salary<14000000){
	A=(salary*85)/100;
	cout<<"Your Salary with TAX apllied on it: "<<A;
}
else if (salary>=14000000 && salary<18000000){
	A=(salary*80)/100;
	cout<<"Your Salary with TAX apllied on it: "<<A;
}
else if (salary>=18000000 && salary<25000000){
	A=(salary*75)/100;
	cout<<"Your Salary with TAX apllied on it: "<<A;
}
else {
	A=(salary*65)/100;
	cout<<"Your Salary with TAX apllied on it: "<<A;
}


 }