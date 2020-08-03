// Lab 1-1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

//input width lenght weight and day of book
void input(double& x, double& y, double& z, double& day);
//change unit inche to cm
void inchestocm(double& x, double& y);
//change unit gram to pound
void gramtopound(double& z);
//calculate price and plus allprice
void setprice(double& x, double& y, double& z, double& day, double& price, double& allprice);
//ask them are you memmber if u r memmber get discount 20%
void setmember(int& member, int& book, double& allprice);

int main()
{
    cout << "Hello World!\n";
	//set variable
	int count = 0;
	int book = 0;
	int member = 0;
	double x;
	double y;
	double z;
	double day;
	double price;
	double allprice = 0;
	// Input num of book
	cout << "Input number of book ";
	cin >> count;
	//store numofbook
	book = count;
	cout << endl;
	//loop of book
	while (count != 0) {
		input(x, y, z, day);
		inchestocm(x, y);
		gramtopound(z);
		setprice(x, y, z, day, price, allprice);

		count--;
	}
	//out of loop and ask you r memmber and get discount
	setmember(member, book, allprice);
	//show all of price
	cout << "All price is : " << allprice << endl;


    return 0;

}

void input(double& x, double& y, double& z, double& day) {
	//input x,y,z and day
	cout << "Input width in inches ";
	cin >> x;
	cout << "Input lenght in inches ";
	cin >> y;
	cout << "Input weight in grams ";
	cin >> z;
	cout << "Input Day ";
	cin >> day;

}
void inchestocm(double& x, double& y) {
	//change unit
	x = x * 2.54;
	y = y * 2.54;

}
void gramtopound(double& z) {
	//change unit
	z = z / 453.59;
}
void setprice(double& x, double& y, double& z, double& day, double& price, double& allprice) {
	//calculate price
	price = (x * y) * z * 10;
	// if day more than 10 discount 1 bath or day more than 30 get discount 2 bath
	if (day > 10 && day <= 30) {
		price = price - 1;
	}
	else if (day > 30) {
		price = price - 2;

	}
	//set allprice
	allprice = allprice + price;
	cout << "Price is : " << price << endl;

}
void setmember(int& member, int& book, double& allprice) {
	//set member
	cout << "Are you member?(1 yes or 2 no) ";
	cin >> member;
	//if u r memmber get discount 20%
	if (member == 1) {

		if (book >= 3) {

			allprice = allprice - (allprice / 5);

		}
	}
	cout << "Welcomr member !!!" << endl;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
