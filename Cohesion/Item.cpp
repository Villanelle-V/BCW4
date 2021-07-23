#include "Item.h"

Item::Item(const std::string& name, Category* category) {
	this->category = category;
	this->name = name;
	orders = new set<Order*>();

	nextId[0] += 1;
	this->id = nextId;

	this->category->addItem(this);
	allItems.insert(this);
}

Item::~Item() {
	allItems.erase(this);
}

const string& Item::getName() const {
	return this->name;
}

string Item::getId() const {
	return this->id;
}

Category* Item::getCategory() const {
	return category;
}

const set<Order*>& Item::getOrders() const {
	return *orders;
}

void Item::addOrder(Order* order) {
	this->orders->insert(order);
}

void Item::deleteInOrder(Order* order) {
	this->orders->erase(order);
}

const set<Item*>& Item::getAllItems() {
	return allItems;
}

ostream& operator<<(ostream& out, const Item& item) {
		out << " Item '" << item.getName() << "'";
	return out;
}

string Item::nextId = "0 Item";
set<Item*> Item::allItems;

