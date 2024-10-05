#include <iostream>
int main(int argc , char** argv){
	unsigned int c1,c2,c3;
	std::cout<<"Nom du programme:Identification de triangle"<<std::endl;
	//Lecture des donnees
	std::cout<<"Entrer les cotes du triangle"<<std::endl;
	std::cin>>c1>>c2>>c3;
	//Verification 
	if(c1 == c2 & c2 ==c3){
		//affichage
		std::cout<<"c'est un triangle equilateral"<<std::endl;
	}
	else if(c1 == c2 | c2 == c3 | c1 == c3){
		//affichage
		std::cout<<"C'est un triangle triangle isocele"<<std::endl;
	}
	else{
		//affichage
		std::cout<<"C'est un triangle quelconque"<<std::endl;
	}
	return 0;
}