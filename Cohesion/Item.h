#ifndef ITEM_H
#define ITEM_H

#include <iostream>
#include <set>
#include <string>
#include "Order.h"
#include "Category.h"

using namespace std;

class Order;
class Category;

class Item {
private:
	string name;
	Category* category;
	set<Order*>* orders;
	string id;
	static set<Item*> allItems;
public:
	static string nextId;

	Item(const string& name, Category* category);
	~Item();

	const string& getName() const;
	string getId() const;
	Category* getCategory() const;
	const set<Order*>& getOrders() const;

	void addOrder(Order* order);
	void deleteInOrder(Order* order);
	
	static const set<Item*>& getAllItems();
};

std::ostream& operator<<(std::ostream& out, const Item& item);

#endif //ITEM_H
