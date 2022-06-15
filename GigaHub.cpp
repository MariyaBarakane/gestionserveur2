#include "GigaHub.h"

GigaHub::GigaHub()
{
	S = vector<Serveur>();
}

void GigaHub::ajouter_serveur(ServeurST S)
{ 
	this->S.push_back(S);
}

GigaHub::~GigaHub()
{
	this->S.clear();


}
