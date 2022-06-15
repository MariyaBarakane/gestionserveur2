#pragma once
#include<iostream>
using namespace std;
namespace Réseau {
	class Go{

        private : 
			int valeur; 
			static string symbole = "Go";
	public:
		Go();
		Go(int val);
		void afficher();

};
}

