#include "ServeurST.h"

ServeurST::ServeurST(string ip, Go ram, string type):Serveur(ip , ram )
{
	this->type = type; 
}

void ServeurST::connexion_service()
{
	cout << "bienvenu " << "le type de serveur est " << this->type;
}

void ServeurST::info()
{
	this->connexion_service();
	this->Serveur::info();
}

bool ServeurST::ping(string ip)
{
	if (comparerip(ip)) {
		cout << "le serveur est de type" << this->type; 
		return true;
	}
	else {
		return false; 

	}
}
