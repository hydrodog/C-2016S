class Wheel {
	int pressure;
public:
	Wheel(int p) : pressure(p) {}

};

class Engine {
	int hp;
public:
	Engine(int hp) : hp(hp) {}
};

class Car : public Engine {
private:
  Wheel w1, w2, w3, w4;
public:
  Car(int hp, int p) : w3(p), Engine(hp), w1(p), w2(p),  w4(p) {}
};

class Car {
private:
	Engine e;
  Wheel w1, w2, w3, w4;
public:
  Car(int hp, int p) : e(hp), w1(p), w2(p), w3(p), w4(p) {}
};

class Employee {
private:
	int ssn;
public:
	Employee(int ssn) : ssn(ssn) {}

};

class Secretary : public virtual  Employee {
public:
	Secretary(int ssn) : Employee(ssn){}
};

class Temporary : public virtual Employee {
	Date endDate;
public:
	Temporary(int ssn, Date end) : Employee(ssn), endDate(end) {}
};

class TemporarySecretary : public Temporary, public Secretary {
public:
	
};

class A extends B implements C, D, E {};

class Y {
public:
	virtual void f() = 0;
};

Y y1; // error, y is abstract

class X : public Y {};

X x1;
