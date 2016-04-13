class Car {
public:
	virtual void payToll();
};

class SportsCar : public Car {
public:
	void payToll();
};

class ElectricCar : public Car {
public:
	void payToll();
};
void ElectricCar::payToll() {
	cout << "$5";
}

void Car::payToll() {
	cout << "$15";
}

void SportCar::payToll() {
	cout << "$35";
}

int main() {
	Car c;
	c.payToll();
	Sportcar s;
	s.payToll();
	Car* p;
	p = &c;
	p->payToll();  //  (*p).payToll(); // this is slower because it must
	// look at the VFT (one extra pointer indirection)

	//  virtual function calls are slower
	// objects containing virtual are bigger (by one pointer)
	



	
