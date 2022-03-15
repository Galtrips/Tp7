#include "TriAlphab�tique.h"
#include "Tri.h"
#include <algorithm>
#include <iostream>
using namespace std;

bool comparaisonAlphab�tique(Image* i1, Image* i2) {
	return (i1->getNom() < i2->getNom());
}

void TriAlphab�tique::faireTri(vector<Image*>& v1) {
	sort(v1.begin(), v1.end(), comparaisonAlphab�tique);
}