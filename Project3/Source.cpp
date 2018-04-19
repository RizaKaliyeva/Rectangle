#include "Header.h"
#include "Rectangle.h"
#include <fstream>

int main() {
	ifstream in;
	ofstream out;
	out.open("write.txt", ios::out);
	in.open("read.txt");
	double xa, ya, xb, yb, xc, yc, xd, yd;
	double xCenter, yCenter, sideA, sideB;
	Vector p(2);
	/*Rectangle *p;
	p = new Rectangle[5];*/
	int i = 0;
	if (!in) {
		cerr << "file open error" << endl;
	}
	else
	{
		while (!in.eof()) {
			//in >> xa >> ya >> xb >> yb >> xc >> yc >> xd >> yd;
			in >> xCenter >> yCenter >> sideA >> sideB;
			//Rectangle R(xa, ya, xb, yb, xc, yc, xd, yd);
			Rectangle R(xCenter, yCenter, sideA, sideB);
			p.push_back(R);
		}
	}

	for (int k = 0; k < p.size(); k++)
	{

	//cout << p[0].getSideA() << endl;
	//p.at(k).resize(2, 10);
	out << p.at(k).getXA() << "\t" << p.at(k).getYA() << "\t" << p.at(k).getXB()
		<< "\t" << p.at(k).getYB() << "\t" << p.at(k).getXC() << "\t" << p.at(k).getYC()
		<< "\t" << p.at(k).getXD() << "\t" << p.at(k).getYD() << endl;
	}



	out.close();
	system("pause");
	return 0;
}