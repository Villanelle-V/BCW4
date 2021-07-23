#include <iostream>
#include <set>
#include <string>
#include "Category.h"
#include "Item.h"
#include "Order.h"
#include "Customer.h"

int main() {
	Category* fruit = new Category("fruit");
	Category* plant = new Category("plant");

	Item* banana = new Item("banana", fruit);
	Item* potato = new Item("potato", plant);
	Item* tomato = new Item("tomato", plant);

	Customer* roman = new Customer("Roman");
	Customer* alina = new Customer("Alina");
	Customer* artem = new Customer("Artem");

	Order* first = new Order(artem, potato);

	first->addItem(potato);

	std::cout << artem->getId() << std::endl;

    std::cout << *artem << std::endl;

	std::cout << Item::getAllItems << std::endl;

	std::cout << Category::nextId << std::endl;
	std::cout << Category::getAllCategories << std::endl;

	delete fruit;
	delete plant;
	delete banana;
	delete potato;
	delete tomato;
	delete artem;
	delete roman;
	delete alina;

	return 0;
}