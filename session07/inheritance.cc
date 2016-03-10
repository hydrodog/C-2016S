
/*
all have name, age
*/


class Animal {
private:
	string name;
	int age;

public:
	Animal(const string& name, int age) : name(name), age(age) {}
	
};

// zebra also has stripes
class Zebra : public Animal { // a Zebra IS_A Animal
public:
};

class Giraffe : public Animal {
public:

	
};

class Elephant : public Animal {
private:
	string name;
	int age;
public:

}
