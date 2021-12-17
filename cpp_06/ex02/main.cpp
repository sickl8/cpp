
#include <sstream>
#include <iostream>
#include <string>
#include <sys/time.h>

#define PRINTTYPEONE(x) try {\
			x &a = dynamic_cast<x&>(p);\
			(void)a;\
			std::cout << #x << std::endl;\
		}\
		catch(std::exception &e) { (void)e; }
#define PRINTTYPETWO(x) \
			{x *a = dynamic_cast<x*>(p);\
			if (a)\
				std::cout << #x << std::endl;}

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
	PRINTTYPETWO(A);
	PRINTTYPETWO(B);
	PRINTTYPETWO(C);
}

void	identify(Base &p) {
	PRINTTYPEONE(A);
	PRINTTYPEONE(B);
	PRINTTYPEONE(C);
}

int		main() {
	Base *p = generate();
	identify(p);
	identify(*p);
	delete p;
}