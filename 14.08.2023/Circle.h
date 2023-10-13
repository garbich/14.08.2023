#pragma once
#include <iostream>
#include "GeometricFigure.h"

using namespace std;

const double PI = 3.14;

class Circle :
    public GeometricFigure
{
private:
    double radius;

public:
    Circle(double radius);
    double calculateArea() override;

    double getRadius();
    string getFigureName() override;
};
