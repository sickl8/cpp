
#include <sstream>
#include <iostream>
#include <string>
#include <sys/time.h>

#define PRINTTYPE(x, y) {\
		x *a = dynamic_cast<x*>(y);\
		if (a)\
			std::cout << #x << std::endl;\
		}

class Base {
	public:
		virtual ~Base() {

		};
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

Base	*rA() {
	return dynamic_cast<Base*>(new A());
}

Base	*rB() {
	return dynamic_cast<Base*>(new B());
}

Base	*rC() {
	return dynamic_cast<Base*>(new C());
}

int		RNG() {
	struct timeval tv;
	gettimeofday(&tv,NULL);
	std::srand(tv.tv_usec);
	return std::rand();
}

Base	*generate(void) {
	Base	*(*f[3])() = {rA, rB, rC};
	return f[RNG() % 3]();
}

void	identify(Base *p) {
	PRINTTYPE(A, p);
	PRINTTYPE(B, p);
	PRINTTYPE(C, p);
}

void	identify(Base &p) {
	PRINTTYPE(A, &p);
	PRINTTYPE(B, &p);
	PRINTTYPE(C, &p);
}

int		main() {
	Base *p = generate();
	identify(p);
	identify(*p);
	delete p;
}