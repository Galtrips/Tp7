#include "Album.h"
#include "Image.h"
#include "Tri.h"
#include <vector>
#include <map>
#include <string>
#include <iostream>
#include <algorithm>
#include <filesystem>

using namespace filesystem;
using namespace std;

void Album::addImage(Image& p) {
	album.push_back(&p);
	for (auto i : p.getMotClef()) {
		recherche.insert(pair<string,Image*>(i, &p));
	}
}

void Album::setTri(Tri* tri) {
	typeTri = tri;
}

vector <Image*> Album::getAlbum() {
	return album;
}
bool compare(Image* i1, Image* i2) {
	return (*(i1) < *(i2));
}

void Album::tri() {
	sort(album.begin(), album.end(), compare);
}

void Album::trier() {
	typeTri->faireTri(album);
}

void Album::Affiche() {
	int cpt = 0;
	for (auto i : recherche) {
		cpt++;
		cout << "\x1b[31m\x1b[4m\x1b[1mRecherche n " << cpt << "\x1b[0m" << endl;
		cout << "\x1b[32mMot clef : \x1b[0m" << i.first << endl;
		cout << "\x1b[32mImage : \x1b[0m" << (i.second)->getNom() << endl;
		cout << endl;
	}
}

ostream& operator <<(ostream& o, Album a) {
	int cpt = 0;
	for (Image* i : a.album) {
		cpt++;
		o << "\x1b[31m\x1b[4m\x1b[1mImage n"  << cpt << "\x1b[0m" << endl;
		o << "\x1b[33mNom : \x1b[0m" << i->getNom() << endl;
		o << "\x1b[33mDate : \x1b[0m"<<i->getDate() << endl;
		o << "\x1b[33mTaille : \x1b[0m "<<i->getTaille() << endl;
		o << "\x1b[33mLongeur : \x1b[0m "<<i->getLongueur() << endl;
		o << "\x1b[33mLargeur : \x1b[0m "<<i->getLargeur() << endl;
		o << "\x1b[36mMots Clefs :\x1b[0m" << endl;
		bool none = true;
		for (auto j : i->getMotClef()) {
			o << "\x1b[36m - " << j << endl;
			none = false;
		}
		if (none == true) o << "\x1b[44m - " << "NULL" << endl;
		o << "\x1b[0m" << endl;

	}
	return o;
}

vector<Image> Album::getImages(const std::string& mot) const {
	
	vector <Image> ve;

	auto ret = recherche.equal_range(mot);

	for (auto it = ret.first; it != ret.second; it++) {
		ve.push_back(*(it->second));
	}

	return ve;
}

void Album::loadImage(string path) {
	for (const auto& entry : directory_iterator(path)) {
		if (entry.path().extension().string() == ".jpg" || entry.path().extension().string() == ".jpeg" || entry.path().extension().string() == ".JPG") {
			const auto filenameStr = entry.path().filename().string();
			if (entry.is_regular_file()) {
				cout << filenameStr << endl;
			}
		
		}
	}
}

void Album::RequeteMultiple() {

	vector<string> v1;
	vector<string> v2;

	vector<string> v3;
}