#pragma once
#include <string>
class Account {

private:

	int id;
	std::string name;
	float balance;

public:
	Account(); // This is the constructor
	void get_name_and_balance() const;
	Account(int id, std::string name, float balance);
	void display_acc_info() const;
	
};