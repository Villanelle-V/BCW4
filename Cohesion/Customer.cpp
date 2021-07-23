#include "Customer.h"

Customer::Customer(const string& name) : name(name) {
	nextCustomerId[0] += 1;
	this->id = nextCustomerId;

	orders = new set<Order*>();
	allCustomers.insert(this);
}
Customer::~Customer() {
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

set<Customer*>& Customer::getAllCustomers() {
		return allCustomers;
}

ostream& operator<<(ostream& out, const Customer& customer) {
	set<Order*> orders = customer.getOrders();

	set<Order*>::iterator it = orders.begin();

	for ( ; it != orders.end(); it++ ) {
		out << "Customer " << customer.getName() << " has orders: " << *(*it);
	}
	return out;
}

string Customer::nextCustomerId = "0 Customer";
set<Customer*> Customer::allCustomers;
