#include "Serveur.h"

R�seau::Serveur::Serveur()
{
}

R�seau::Serveur::Serveur(string ip, Go ram)
{
	this->ip = ip;
	this->Ram = ram; 
}

bool R�seau::Serveur::comparerip(string ip)
{
	return this->ip == ip;
}

 void R�seau::Serveur::info()
{
	cout << this->ip << endl;
	this->Ram.afficher();
}
