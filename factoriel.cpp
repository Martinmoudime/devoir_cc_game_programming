#include <iostream>
int main(int argc , char** argv){
	unsigned int n,i,result  = 1;
	std::cout<<"Nom du programme:Factoriel"<<std::endl;
	//Lecture du parametre
	std::cout<<"Entrer le nombre dont vous souhaite obtenir le factoriel"<<std::endl;
	std::cin>>n;
	//Traitement
	for(i = n ; i > 0 ; i --){
		result = result * i;
	}
	//Affichage du resultat
	std::cout<<"Le factoriel de "<<n<<" est "<<result<<std::endl;
	return 0;
}
