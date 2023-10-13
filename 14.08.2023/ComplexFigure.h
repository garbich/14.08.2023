#pragma once
#include <iostream>
#include <vector>
#include "GeometricFigure.h"

using namespace std;


class ComplexFigure :
    public GeometricFigure
{
private:
    vector<GeometricFigure*> figures;

public:
    void addFigure(GeometricFigure* figure);
    void totalArea();
};
