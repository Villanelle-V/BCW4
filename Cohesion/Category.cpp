#include "Category.h"

Category::Category(const string& name) : name(name) {
	nextId[0] += 1;
	this->id = nextId;

	this->items = new set<Item*>();
	allCategories.insert(this);
}
Category::~Category() {
	allCategories.erase(this);
}

const string& Category::getName() const {
	return this->name;
}

string Category::getId() const {
	return this->id;
}

const set<Item*>& Category::getItems() const {
	if (items->empty()) {
		throw OutOfItems("No items");
	}
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

const set<Category*>& Category::getAllCategories() {
	return allCategories;
}

ostream& operator<<(ostream& out, const Category& category) {
	set<Item*> items = category.getItems();

	set<Item*>::iterator it = items.begin();

	for ( ; it != items.end(); it++) {
		out << "Category name: " << category.getName();
		out << ", items in category: " << *(*it);
	}
		return out;
}

string Category::nextId = "0 Category";
set<Category*> Category::allCategories;
