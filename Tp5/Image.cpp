#include "Image.h"
#include <string>
#include <iostream>
using namespace std;

Image::Image(string n, string d, int t, int lo, int la) {
	nom = n;
	date = d;
	taille = t;
	longueur = lo;
	largeur = la;
}

void Image::addMotCle(string text) {
	motCle.push_back(text);
}