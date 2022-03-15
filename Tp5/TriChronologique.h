#pragma once
#include "Tri.h"
#include "Image.h"
#include <vector>
using namespace std;
 bool comparaisonChronologique(Image* i1, Image* i2);
class TriChronologique : public Tri
{
public:
    void faireTri(vector<Image*>& v1) override;
};

