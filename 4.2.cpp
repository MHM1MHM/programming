#include <iostream>

using namespace std;

main() {
int X,Y,Z,first,second,third,fourth,fifth,sixth;
float seventh;
cout<<"Please Enter a Value number for X : ";
cin>>X;
cout<<"Please Enter a Value number for Y : ";
cin>>Y;
cout<<"Please Enter a Value number for Z : ";
cin>>Z;
first=X-Y;
second=X+Z;
 third=first*second;
fourth=X+Y+Z;
fifth=fourth*fourth;
 sixth=fifth++;
seventh= (float) third/sixth;
cout<<"The Answer is : "<<seventh;
}