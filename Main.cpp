#include <iostream>
#include <string>
using namespace std;

void Print(string str);
void Print(int num);
void Print(string str1, string str2);

int main()
{

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