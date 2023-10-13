#pragma once
#include <iostream>
#include "GeometricFigure.h"

using namespace std;

class Rectangle :
    public GeometricFigure
{
private:
    double rec1, rec2;

public:
    Rectangle(double rec1, double rec2);
    double calculateArea() override;

    double getRec1();
    double getRec2();

    string getFigureName() override;
};
