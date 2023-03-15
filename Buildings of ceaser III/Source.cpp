#include<iostream>
using namespace std;



class Building {

private:
	const char* name;
	

public:
	const char* name2;
	//Default constructor
	Building() {
		name = nullptr;
		
	}


	Building(const char* N) {
		name = N;
	}

	const char* GetName() {

		return name;

	}
	
	
	
};

//Class derived from Building
class Warehouse : public Building {

private:

	int wood;
	int rocks;
	int wheat;
public:
	Warehouse() {

		wood = 0;
		rocks = 0;
		wheat = 0;
	}

	Warehouse(int wood, int rocks, int wheat) {

		this->wood = wood;
		this->rocks = rocks;
		this->wheat = wheat;
	}

	void PrintResources() {
		cout << "wood: " << wood << endl;
		cout << "rocks: " << rocks << endl;
		cout << "wheat: " << wheat << endl;
	}
};




int main() {

	Building* Pantheon = new Building("Pantheon");

	const char* name = Pantheon->GetName();

	cout << name << endl;

	Warehouse* WH1 = new Warehouse( 12, 4, 17);
	

	WH1->name2 = "something";
	
}