
#include <sstream>
#include <iostream>
#include <string>

typedef struct	s_data {
	int i;
}				Data;

uintptr_t serialize(Data* ptr) {
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t ptr) {
	return (reinterpret_cast<Data*>(ptr));
}

int		main() {
	Data d;

	d.i = 123;
	std::cout << deserialize(serialize(&d))->i << std::endl;
}