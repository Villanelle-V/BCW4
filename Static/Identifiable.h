#ifndef IDENTIFIABLE_H
#define IDENTIFIABLE_H

class Identifiable {
	private:
	int id;
public:
	static int count;
public:
	Identifiable();
	int getId() const;
	int getCount();
};

#endif // IDENTIFIABLE_H
