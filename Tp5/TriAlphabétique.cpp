#include "TriAlphabétique.h"
#include "Tri.h"
#include <algorithm>
#include <iostream>
using namespace std;

bool comparaisonAlphabétique(Image* i1, Image* i2) {
	return (i1->getNom() < i2->getNom());
}

void TriAlphabétique::faireTri(vector<Image*>& v1) {
	sort(v1.begin(), v1.end(), comparaisonAlphabétique);
}