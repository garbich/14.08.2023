#include "ComplexFigure.h"


void ComplexFigure::addFigure(GeometricFigure* figure){
	figures.push_back(figure);
}


void ComplexFigure::totalArea(){
	double totalArea = 0.0;
	for (int i = 0; i < figures.size(); i++){
		
		cout << figures[i]->getFigureName() << figures[i]->calculateArea() << endl;
		totalArea += figures[i]->calculateArea();
	}
	cout << "The total area of all figures is: " << totalArea << endl;
}