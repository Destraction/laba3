#include <iostream>
#include <string>
using namespace std;
class PokerFond {
public:
		string nameOfCompany;
		string countryOfCompany;
		void setCountry() {
			this-> countryOfCompany = countryOfCompany;
		}
		string getCountry() {
			return countryOfCompany;
		}
		string setnameOfCompany() {
			this->nameOfCompany = nameOfCompany;
		}
		string getnameOfCompany() {
			return nameOfCompany;
		}
		void print() {
			cout << "Name of company: " << nameOfCompany << "\t Country: " << countryOfCompany << endl;
		}
};
class Employee : public PokerFond {
public:
		string nameOfEmployee;
		int age;
		string setnameOfEmployee() {
			this -> nameOfEmployee = nameOfEmployee;
		}
		string getnameOfEmployee() {
			return nameOfEmployee;
		}
		void setAge() {
			this -> age = age;
		}
		int getAge() {
			return age;
		}

};
class AllBankroll{
public:
	AllBankroll() = default;
	int money;
	int setmoney() {
		this -> money = money;
	}
	int getmoney() {
		return money;
	}


};
class LowBankrollOfEmployee:public AllBankroll{
	unsigned money1;
	unsigned setmoney1() {
		this -> money1 = money1;
	}
	unsigned getmoney1() {
		return money1;
	}


};
class HighBankrollOfEmployee :public AllBankroll{
	unsigned money2;
	unsigned setmoney2() {
		this->money2 = money2;
	}
	unsigned getmoney2() {
		return money2;
	}
};
int main()
{
	return 0;
}
