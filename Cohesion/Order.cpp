#include "Order.h"

Order::Order(Customer* customer, Item* item) {
	this->customer = customer;
	this->addItem(item);
	item->addOrder(this);
	customer->addOrder(this);
	items = new set<Item*>();

	nextId[0] += 1;
	this->id = nextId;

	allOrders.insert(this);
}

Order::~Order() {
	set<Item*>::iterator it = this->items->begin();

	for (; it != this->items->end(); it++) {
		(*it)->deleteInOrder(this);
	}

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

const set<Order*>& Order::getAllOrders() {
		return allOrders;
}

ostream& operator<<(ostream& out, const Order& order) {
	set<Item*> items = order.getItems();
    out << order.getId();

	for (set<Item*>::iterator it = items.begin(); it != items.end(); it++) {
		cout << ' ' << *(*it);
	}
	return out;
}

string Order::nextId = "0 order";
set<Order*>Order::allOrders = set<Order*>();
