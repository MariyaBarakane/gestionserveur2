#pragma once
#include "Serveur.h"
#include "ServeurST.h"
#include<vector>
using namespace Réseau;
class GigaHub
{
private:
	vector<Serveur> S; 

public : 
	GigaHub();
	void ajouter_serveur(ServeurST S);
	~GigaHub();



};

