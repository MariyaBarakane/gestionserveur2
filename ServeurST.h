#pragma once
#include "Serveur.h"
using namespace Réseau;
class ServeurST :
    public Serveur
{
   private : 
    string type;
   public :
       ServeurST();
       ServeurST(string ip, Go ram, string type);
       void connexion_service() override ;
       void info()override; 
       bool ping(string ip);
       ~ServeurST();




};

