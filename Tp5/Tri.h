#pragma once
#include <iostream>
#include <vector>
#include "Image.h"
using namespace std;

class Tri
{
public:
	virtual void faireTri(vector<Image*>& v1) = 0 ;
};

