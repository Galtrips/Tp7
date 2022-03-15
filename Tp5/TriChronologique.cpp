#include "TriChronologique.h"
#include "Tri.h"
#include <algorithm>
#include <iostream>
using namespace std;

bool comparaisonChronologique(Image* i1, Image* i2) {
	return (i1->getDate() < i2->getDate());
}

void TriChronologique::faireTri(vector<Image*>& v1) {
	sort(v1.begin(), v1.end(), comparaisonChronologique);
}