
#include <iostream>

float monster_1;
float monster_2;
float monster_3;
float monster_4;


int HP = 0;
int Damage = 0;
int defense = 0;
int initiative = 0;


int main()
{

	char reponse;


	std::cout << "welcome to the monster fight simulator " << std::endl;
	std::cout << "choose between monster 1, 2, 3, or 4: " << std::endl; 
	std::cout << "1. monster one" << std::endl;
	std::cout << "2. monster two" << std::endl;
	std::cout << "1. monster three" << std::endl;
	std::cout << "2. monster four" << std::endl;
	std::cin >> reponse;

	switch (reponse)
	{
		case '1' :
		case '2' :
		case '3' :
		case '4' :
			std::cout << "you choose monster : " << reponse << std::endl;
	}
}

