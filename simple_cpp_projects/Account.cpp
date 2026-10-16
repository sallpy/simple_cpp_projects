#include <iostream>
#include <string>

class Account {
protected:
	int id;
	std::string owner;
	double balance;

public:
	Account(){}
	Account(int id, std::string owner, double balance) {
		this->balance = balance;
		this->id = id;
		this->owner = owner;
	}
	virtual ~Account() = default;

	int getID() const {
		return id;
	}
	string getOwner()const {
		return owner;
	}
	double getBalance()const {
		return balance;
	}
	virtual void printInfo() const {
		std::cout << "ID: " << id << ", owner: " << owner
			<< ", balance: " << balance << std::endl;
	}
	virtual void deposit(double amount) = 0;
	virtual bool withdraw(double amount) = 0;
	virtual std::string getType() const = 0;
};