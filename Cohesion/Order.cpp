#include "Order.h"

Order::Order(Customer* customer, Item* item) {
	this->customer = customer;
	customer->addOrder(this);
	this->item = item;

	item->addOrder(this);
	items = new set<Item*>();

	nextId[0] += 1;
	this->id = nextId;

	allOrders.insert(this);
}

Order::~Order() {
	allOrders.erase(this);
}

string Order::getId() const {
	return this->id;
}

const set<Item*>& Order::getItems() const {
	return *items;
}

Customer* Order::getCustomer() const {
	return customer;
}

void Order::addItem(Item* item) {
	this->items->insert(item);
	item->addOrder(this);
	this->customer->addOrder(this);
}

void Order::deleteItem(Item* item) {
	this->items->erase(item);
	item->deleteInOrder(this);
}

set<Order*>& Order::getAllOrders() {
		return allOrders;
}

ostream& operator<<(ostream& out, const Order& order) {
	set<Item*> items = order.getItems();

	set<Item*>::iterator it = items.begin();

	out << order.getId();

	for ( ; it != items.end(); it++ ) {
		out << ". items in order:" << *(*it);
	}
	return out;
}

string Order::nextId = "0 order";
set<Order*>Order::allOrders;