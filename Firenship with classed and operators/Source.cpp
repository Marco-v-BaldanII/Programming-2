#include <iostream>
using namespace std;

class Rectangle {

private:
	int width;
	int height;

public:
	Rectangle() {
		width = 0;
		height = 0;
	}

	Rectangle(int w, int h) {
		width = w;
		height = h;
	}

	void Print() {
		cout << "width :" << width;
		cout << endl;
		cout << "height :" << height;
	}

	friend void Transpose(Rectangle* R);
	friend void Transpose(Rectangle& R);

	friend Rectangle operator - (Rectangle R1, Rectangle R2);
};

//Defines the - operation for Rectangles, neeeds to be declared as a friend to use private prop(width, height)
Rectangle operator - (Rectangle R1, Rectangle R2) {

	Rectangle r(0, 0);
	r.width = R1.width - R2.width;
	r.height = R1.height - R2.height;

	return r;
}


//By reference, dereferenced pointer
void Transpose(Rectangle* R) {

	int aux = (*R).height;
	(*R).height = (*R).width;
	(*R).width = aux;
	
}

//By pointer
void Transpose(Rectangle& R) {

	int aux = R.height;
		R.height = R.width;
	R.width = aux;
	
}

int main() {

	/*Rectangle* R1 = new Rectangle(10, 4);

	Transpose(R1);
	R1->Print();
	cout << endl;
	Transpose(*R1);
	R1->Print();*/

	Rectangle Ra(7, 8);
	Rectangle Rb(9, 2);

	Rectangle MrRect = Ra - Rb;

	MrRect.Print();

}