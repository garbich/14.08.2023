#pragma once
#include <iostream>
#include "GeometricFigure.h"

using namespace std;


class Triangle :
    public GeometricFigure
{
private:
    double tri1, tri2;

public:
    Triangle(double tri1, double tri2);
    double calculateArea() override;

    double getTri1();
    double getTri2();

    string getFigureName() override;
};
