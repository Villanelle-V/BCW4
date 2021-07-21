#include "Category.h"

Category::Category(const string& name) : name(name) {
	nextId[0] += 1;
	this->id = nextId;

	this->items = new set<Item*>();
	allCategories.insert(this);
}
Category::~Category() {
	set<Item*>::iterator it = items->begin();

	for ( ; it != items->end(); it++) {
		delete* it;
	}

	allCategories.erase(this);
}

const string Category::getName() const {
	return this->name;
}

string Category::getId() const {
	return this->id;
}

const set<Item*>& Category::getItems() const {
	return *items;
}

void Category::addItem(Item* item) {
	if (item->getCategory() != this) {
		throw InvalidCategory("This item has category.");
	}

	this->items->insert(item);
}

void Category::deleteItem(Item* item) {
	this->items->erase(item);
}

const set<Category*>& Category::getCategories() {
	return allCategories;
}

ostream& operator<<(ostream& out, const Category& category) {
	set<Item*> items = category.getItems();
	out << "Category: " << category.getName();

	set<Item*>::iterator it = items.begin();

	for ( ; it != items.end(); it++) {
		out << "Category ID : " << (*it)->getId();
		out << "Category name: " << (*it)->getName();
	}
		return out;
}

string Category::nextId = "0 Category";
set<Category*> Category::allCategories = set<Category*>();