class Account {
private:
	double balance;
public:
	Account() : balance(0) {}
	void deposit(double amt) { balance += amt; }
	double getBalance() const {
		return balance;
	}

	void print() const {
		cout << getBalance();
	}
	
};


void dothistomyaccount(Account& acc) {
	acc.balance = 1.2;
}


int main() {
	Account a1;
	a1.deposit(50);

	const Account a2;
	//	a2.deposit(50); // not ok
	cout << a2.getBalance();
	
	int a = 2;
	int*p = &a; // p is pointing to a
	*p = 3; // a just changed

	const int b = 3;
	//p = &b; // this is illegal
	*p = 4;

	const int* q = &b;
	cout << *q;
	//	*q = 5; //illegal

	q = & a;
	a = 19;
}
