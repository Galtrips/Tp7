#pragma once
#include "Tri.h"
#include "Image.h"
#include <vector>
using namespace std;
bool comparaisonAlphab�tique(Image* i1, Image* i2);
class TriAlphab�tique :
    public Tri
{
public:
    void faireTri(vector<Image*>& v1) override;
};

