// Cpp Primer Plus
// The practice of the Chapter 2
// By hanyuh554(ljh)
// 2020.20.26

#include<iostream>
#include<string>
using namespace std;

void mice();
void run();
double lightYear(double);
void time(int, int);

int main()
{
	cout << "......" << endl;
	//2.1 output name and address
	string name;
	string address;
	cout << "A: What's your name?" << endl;
	getline(cin, name);
	cout << "B: My name is " << name << "." << endl;
	cout << "A: Where do you live?" << endl;
	getline(cin, address);
	cout << "B: I live in " << address << "." << endl;
	cout << "......" << endl;

	//2.2 distance conversion
	double kilometer;
	cout << "A: How far is it from your home to school?" << endl;
	cin >> kilometer;
	cout << "B:About " << kilometer << " kilometers, equal to " << kilometer * 1000 << " meters." << endl;
	cout << "......" << endl;

	//2.3 call function
	mice();
	mice();
	run();
	run();
	cout << "......" << endl;

	//2.4 age
	int age;
	cout << "Please enter your age: ";
	cin >> age;
	cout << age << " years equals " << age * 12 << " months" << endl;
	cout << "......" << endl;

	//2.5 Celsius and Fahrenheit
	double celsius;
	cout << "Please enter a Celsius value: ";
	cin >> celsius;
	cout << celsius << " degrees Celsius is " << celsius * 1.8 + 32.0 << " degrees Fahrenheit." << endl;
	cout << "......" << endl;

	//2.6 astronomical unit conversion
	double year;
	cout << "Please enter the number of light years: ";
	cin >> year;
	cout << year << " light years = " << lightYear(year) << " astronomical units." << endl;
	cout << "......" << endl;

	//2.7 time conversion
	int hour, minute;
	cout << "Please enter the number of hours: ";
	cin >> hour;
	cout << "Please enter the number of minutes: ";
	cin >> minute;
	cout << "Time: ";
	time(hour, minute);
	cout << "......" << endl;

	return 0;
}

void mice()
{
	cout << "Three blind mice." << endl;
}

void run()
{
	cout << "See how they run." << endl;
}

double lightYear(double year)
{
	double unit = 0;
	unit = year * 63240;

	return unit;
}

void time(int hour, int minute)
{
	cout << hour << " : " << minute << endl;
}