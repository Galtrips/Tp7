#pragma once
#include <vector>
#include <map>
#include "Image.h"
#include "Tri.h"

using namespace std;
class Album {
private:
	vector<Image*> album;
	multimap<string, Image*> recherche;
	Tri* typeTri = nullptr;
public:
	void tri();
	void RequeteMultiple();
	void trier();
	Tri* getTri() { return typeTri; }
	void setTri(Tri* tri);
	vector <Image*> getAlbum();
	void Affiche();
	void addImage(Image& p);
	std::vector<Image> getImages(const std::string& mot) const;
	friend ostream& operator <<(ostream& o, Album a);

	void loadImage(string path);
};

