#include <iostream>
#include <string>
using namespace std;

// Here you can see that the same function has been overlaoded 3 times 
void Print(string str);
void Print(int num);
void Print(string str1, string str2);

int main()
{
	// Function overload 
	Print("Hello people");
	Print(4);
	Print("Hi there", "Come on!");
	
	return 0;
}

void Print(string str)
{
	cout << str << endl;
}

void Print(int num)
{
	cout << num << endl;
}

void Print(string str1, string str2)
{
	cout << "My string one: " << str1 << endl;
	cout << "My string two: " << str2 << endl;
}