class Account  {
private:
	double money;
public:
	Account(double amt = 0) : money(amt){}
	void deposit(double amt) {
		money += amt;
	}

	void withdraw(double amt) {
		money -= amt;
	}

	double getBalance() const {
		return money;
	}
};

int main() {
	const Account a;

}
	
