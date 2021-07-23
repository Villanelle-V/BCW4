#include <iostream>
#include <set>
#include <string>
#include "Category.h"
#include "Item.h"
#include "Order.h"
#include "Customer.h"

int main() {
	Category* fruit = new Category("fruit");
	Category* vegetable = new Category("plant");

	Item* banana = new Item("banana", fruit);
	Item* potato = new Item("potato", vegetable);
	Item* tomato = new Item("tomato", vegetable);

	Customer* alina = new Customer("Alina");
	Customer* artem = new Customer("Artem");

	Order* first = new Order(artem, potato);

	first->addItem(potato);

	artem->addOrder(first);

	std::cout << *(first->getCustomer()) << std::endl;

	std::cout << Category::nextId << std::endl;
	std::cout << *fruit << std::endl;
	std::cout << Customer::getAllCustomers << std::endl;

	delete fruit;
	delete vegetable;
	delete banana;
	delete potato;
	delete tomato;
	delete artem;
	delete alina;

	return 0;
}