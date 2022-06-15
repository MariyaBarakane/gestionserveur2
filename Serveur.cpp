#include "Serveur.h"

Réseau::Serveur::Serveur()
{
}

Réseau::Serveur::Serveur(string ip, Go ram)
{
	this->ip = ip;
	this->Ram = ram; 
}

bool Réseau::Serveur::comparerip(string ip)
{
	return this->ip == ip;
}

 void Réseau::Serveur::info()
{
	cout << this->ip << endl;
	this->Ram.afficher();
}
