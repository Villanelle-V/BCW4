#include "Customer.h"

Customer::Customer(const string& name) : name(name) {
	nextCustomerId[0] += 1;
	this->id = nextCustomerId;

	orders = new set<Order*>();
	allCustomers.insert(this);
}
Customer::~Customer() {
	set<Order*>::iterator it = orders->begin();

	for (; it != orders->end(); it++) {
		delete* it;
	}

	allCustomers.erase(this);
};

const string& Customer::getName() const {
	return this->name;

}

string Customer::getId() const {
	return this->id;
}

const set<Order*>& Customer::getOrders() const{
	return *orders;
}

void Customer::addOrder(Order* order) {
	this->orders->insert(order);
}

const set<Customer*>& Customer::getAllCustomers() {
	return allCustomers;
}

ostream& operator<<(ostream& out, const Customer& customer) {
	set<Order*> orders = customer.getOrders();
	out << "Customer " << customer.getName() << " has orders: ";

	set<Order*>::iterator it = orders.begin();

	for ( ; it != orders.end(); it++ ) {
		out << "Customer has orders:" << *(*it) << ", ";
	}
	return out;
}

string Customer::nextCustomerId = "0 Customer";
set<Customer*> Customer::allCustomers = set<Customer*>();
