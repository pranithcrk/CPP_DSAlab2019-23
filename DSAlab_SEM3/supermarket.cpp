#include <iostream>
using namespace std;
struct items{
	string name;
	int price[5];
	int quantity[5];
	float total;

}it;
class bigbazar{

public:
	void input(){
		cout <<"enter users name" <<"\n";
		cin >>it.name;
		for(int i=0;i<5;i++){
			cout << "enter quantity of item "<< i+1 <<"\n";
			cin >>it.quantity[i];
			cout << "enter price of item "<< i+1<<"\n";
			cin >>it.price[i];
		}


	}
	float calTotal(){
		for(int i=0;i<5;i++){
			it.total+=(it.quantity[i]*it.price[i]);
		}
		return it.total;
	}
	void display(){
		cout << "user "<<it.name<<" has total purchase amount "<< calTotal() <<"\n";

	}
};

int main() {
	cout << "enter number of users "<<"\n";
	int n;
	cin >>n;
	for(int i=0;i<n;i++){
		bigbazar user;


		user.input();

		user.display();

	}

	return 0;
}
