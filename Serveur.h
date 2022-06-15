#pragma once
#include "Go.h"
#include<iostream>
using namespace std;
namespace Réseau {
	
	class Serveur
	{

	private:
		string ip;
		Go Ram;
	public:
		Serveur(); 
		Serveur(string ip, Go ram);
		virtual void connexion_service()=0;
		bool comparerip(string ip);
		virtual void info();
		~Serveur();
	};
}

