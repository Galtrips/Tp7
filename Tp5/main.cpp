#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
#include <vector>
#include "Image.h"
#include "Album.h"
#include "TriChronologique.h"
#include "TriAlphabétique.h"
using namespace std;


int main(void) {
	Image p1("Montagne", "2023/07/20", 300, 20, 20);
	Image p2("Riviere", "2019/03/10", 300, 20, 20);
	Image p3("Village", "2023/08/28", 300, 20, 20);
	Image p4("Desert", "2022/07/22", 300, 20, 20);
	Album a1;

	p1.addMotCle("Nature");
	p1.addMotCle("Montagne");
	p1.addMotCle("Hivers");
	p2.addMotCle("Vacances");
	p4.addMotCle("Vacances");
	p4.addMotCle("Nature");

	a1.addImage(p1);
	a1.addImage(p2);
	a1.addImage(p3);
	a1.addImage(p4);
	TriChronologique Tri;
	TriAlphabétique Tri2;
	a1.setTri(&Tri2);

	a1.trier();

	cout << a1;

	a1.Affiche();

	cout << "Mot contenant le mot \"Nature\": " << endl;
	auto p = a1.getImages("Nature");
	for (auto i : p) {
		cout << i.getNom() << endl;
	}
	cout << endl;
	string path = R"(Z:\Documents\ProgObjet\Tp5\Tp5)";
	a1.loadImage(path);


	return EXIT_SUCCESS;
}