#include<iostream>
#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <stdio.h>
using namespace std;

class Bank{
	string name, address;
	char acc_type;
	double balance;

public:
	void open_account();
	void deposit_money();
	void withdraw_money();
	void display_account();
};

void Bank::open_account() {
	cout << "Enter the name:";
	cin >> name;
	cout << "Enter the address:";
	cin >> address;
	cout << "account type S & C:";
	cin >> acc_type;
	cout << "Enter how much you want to deposi:";
	cin >> balance;
	cout << "Amponut credited succefully";
}
void Bank::deposit_money() {
	double amount;
	cout << "Enter deposit money:";
	cin >> amount;
	balance += amount;
	cout << "Available Balance:" << balance << endl;
}
void Bank::withdraw_money() {
	double Amount;
	cout << "Enter withdraw money:";
	cin >> Amount;
	balance -= Amount;
	cout << "Available Balance:" << balance << endl;
}
void Bank::display_account() {
	cout << "name:" << name << endl;
	cout << "acc_type:" << acc_type << endl;
	cout << "balance:" << balance << endl;
}
int main()
{
	int choice;
	Bank customer;
	cout << "BANK_MANAGMENT_SYSTEM\n"
	<< "_____________________\n";
	cout << "open account\n"
		<< "_____________________\n";
	customer.open_account();
	cout << "Deposit account\n"
		<< "_____________________\n";
	customer.deposit_money();
	cout << "withdraw money\n"
		<< "_____________________\n";
	customer.withdraw_money();
	cout << "Display account\n"
		<< "_____________________\n";
	customer.display_account();
	return 0;
}
