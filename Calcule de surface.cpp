#include <iostream>
int main(int argc , char** argv){
	const float PI = 3.14;
	unsigned int choix1,choix2;
	float L,l,r,c1,c2,c3,b,h,p,a;
	std::cout<<"Nom du programme:Calcule de surface"<<std::endl;
	//Affichage du menu
	do{
		std::cout<<"-----------------------Veuillez choisir votre figure geometrique:---------------------"<<std::endl;
		std::cout<<"---- 1.Rectangle"<<std::endl;
		std::cout<<"---- 2.Cercle"<<std::endl;
		std::cout<<"---- 3. Triangle"<<std::endl;
		std::cout<<"---- 4. Sortir"<<std::endl;
		std::cin>>choix1;
		switch(choix1){
			//Option1
			case 1:
				std::cout<<"---- 1.1 Perimetre"<<std::endl;
				std::cout<<"---- 1.2 Aire"<<std::endl;
				std::cin>>choix2;
				switch(choix2){
					case 1:
						std::cout<<"Entrer la longueur et la largeur du rectangle"<<std::endl;
						std::cin>>L>>l;
						p = (L + l) * 2;
						std::cout<<"Le perimetre est : "<<p<<std::endl;
						break;
					case 2:
						std::cout<<"Entrer la longueur et la largeur du rectangle"<<std::endl;
						std::cin>>L>>l;
						a = (L * l);
						std::cout<<"L'aire est : "<<a<<std::endl;
						break;
				}
			break;
			//Option2
			case 2:
				std::cout<<"----- 2.1 Perimetre"<<std::endl;
				std::cout<<"----- 2.2 Aire"<<std::endl;
				std::cin>>choix2;
				switch(choix2){
					case 1:
						std::cout<<"Entrer le rayon du cercle"<<std::endl;
						std::cin>>r;
						p = PI * r * 2;
						std::cout<<"Le perimetre est : "<<p<<std::endl;
						break;
					case 2:
						std::cout<<"Entrer le rayon du cercle"<<std::endl;
						std::cin>>r;
						a = PI * r * r;
						std::cout<<"L'aire est : "<<a<<std::endl;
						break;
				}
			break;
			//Option3
			case 3:
				std::cout<<"------ 3.1 Perimetre"<<std::endl;
				std::cout<<"------ 3.2 Aire"<<std::endl;
				std::cin>>choix2;
				switch(choix2){
					case 1:
						std::cout<<"Entrer les trois cotes du triangle"<<std::endl;
						std::cin>>c1>>c2>>c3;
						p = c1 + c2 + c3;
						std::cout<<"Le perimetre est : "<<p<<std::endl;
						break;
					case 2:
						std::cout<<"Entrer la base et la hauteur du tiangle"<<std::endl;
						std::cin>>b>>h;
						a = ( b * h) / 2;
						std::cout<<"L'aire est : "<<a<<std::endl;
						break;
				}
			break;
			default:
				std::cout<<"Entrer un nombre entre 1 et 4"<<std::endl;
				break;
		}
		//Condition d'arret de la boucle
	}while(choix1!=4);
	return 0;
}


















