#include <iostream>
#include <vector>
#include "ComplexFigure.h"
#include "GeometricFigure.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "Circle.h"

using namespace std;






int main()
{
	ComplexFigure mainFigure;


	GeometricFigure* rectangle1 = new Rectangle(5, 2);
	mainFigure.addFigure(rectangle1);


	GeometricFigure* rectangle2 = new Rectangle(8, 7);
	mainFigure.addFigure(rectangle2);


	GeometricFigure* triangle1 = new Triangle(4, 9); 
	mainFigure.addFigure(triangle1);


	GeometricFigure* triangle2 = new Triangle(7, 3.3); 
	mainFigure.addFigure(triangle2);


	GeometricFigure* circle = new Circle(4); 
	mainFigure.addFigure(circle);


	mainFigure.totalArea();

}