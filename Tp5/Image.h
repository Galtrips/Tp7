#pragma once
#include <string>
#include <vector>
using namespace std;
class Image
{
private:
	string nom;
	string date;
	int taille;
	int largeur;
	int longueur;
	vector <string> motCle;;
public:
	string getNom() { return nom; }
	string getDate() { return date; }
	int getTaille() { return taille; }
	int getLargeur() { return largeur; }
	int getLongueur() { return longueur; }
	vector <string> getMotClef() { return motCle; }
	void addMotCle(string text);
	Image(string n, string d, int t, int lo, int la);
	
	bool operator< (Image& i) {
		if (date < i.getDate()) {
			return true;
		}
		else {
			return false;
		}
	};

};

