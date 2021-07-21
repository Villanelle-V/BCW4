#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>
#include <set>
#include "Order.h"

using namespace std;

class Order;

class Customer {
private:
	string name;
	set<Order*>* orders;
	string id;
	static set<Customer*> allCustomers;
public:
	static string nextCustomerId;

	Customer(const string& name);
	~Customer();

	const string& getName() const;
	string getId() const;
	const set<Order*>& getOrders() const;

	void addOrder(Order* order);

	static const set<Customer*>& getAllCustomers();
};

std::ostream& operator<<(std::ostream& out, const Customer& customer);

#endif //CUSTOMER_H
