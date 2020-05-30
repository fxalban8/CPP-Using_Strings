#include <iostream>
using namespace std;

int main(){

	string X= "Hello this is a string";
	cout<<X<<endl;		//Printing a string
	string Y=", I'm greeting you";	//declaring a second string variable
	cout<<X<<Y<<endl;	//printing two strings with a single cout command

	string Z=X+Y;		//concatenating strings
	cout<<Z<<endl;

	return 0;
}
