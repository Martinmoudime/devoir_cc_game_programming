#include <iostream>
#include <cmath>
int main(int argc , char** argv){
	float x1,x2,x3,y1,y2,y3,AB,BC,AC;
	std::cout<<"Nom du programme:Determine dimensions"<<std::endl;
	//Recuperation des coordonnees
	std::cout<<"Entrer les coordonnees du point A"<<std::endl;
	std::cin>>x1>>y1;
	std::cout<<"Entrer les coordonnees du point B"<<std::endl;
	std::cin>>x2>>y2;
	std::cout<<"Entrer les coordonnees du point C"<<std::endl;
	std::cin>>x3>>y3;
	//Calcule des distances entre les points a partir des coordonnees
	AB = sqrt(pow(x2 - x1 , 2) + pow(y2 - y1 , 2));
	BC = sqrt(pow(x3 - x2 , 2) + pow(y3 - y2 , 2));
	AC = sqrt(pow(x3 - x1 , 2) + pow(y3 - y1 , 2));
	//Affichage du resultat
	std::cout<<"La distance entre le point A et B est "<<AB<<", la distance entre le point B et C est "<<BC<<" et la distance entre le point A et C est "<<AC<<std::endl;
	return 0;
}