#include <iostream>

using namespace std;

class Quadrilateral;

class Square{
	int edge;
public: 
	void setvalue(int i)
	{
		edge = i;
	}
	void display(void);
	friend void convert(Square, Quadrilateral &); 
};
void Square::display(void)
{
	cout << "Edge of Square: "<<edge<<endl;
}
class Quadrilateral
{
	int e1, e2, e3, e4;
public:
	void display(void);
	friend void convert(Square, Quadrilateral &);
};
void Quadrilateral::display(void)
{
	cout<<"Edge 1: "<<e1<<endl;
	cout<<"Edge 2: "<<e2<<endl;
	cout<<"Edge 3: "<<e3<<endl;
	cout<<"Edge 4: "<<e4<<endl;
}

void convert(Square n, Quadrilateral &m)
{
	m.e1 = n.edge;
	m.e2 = n.edge;
	m.e3 = n.edge; 
	m.e4 = n.edge;
}
int main()
{
	Square square;
	square.setvalue(10);
	Quadrilateral quad;
	convert(square, quad);
	square.display();
	cout<<"Edges of the Quadrilateral: "<<endl;
	quad.display();
	return 0;
}
 	

