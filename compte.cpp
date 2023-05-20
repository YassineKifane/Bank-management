#include <iostream>
#include "compte.h"
using namespace std;
// Creation des Comptes
void ajouter_compte(compte* t, int m)
{
	cout << "----Creation du compte----" << endl;
	cout << "Donner l'ID du Compte:" << endl;
	cin >> t[m].Id_compte;
	cout << "Donner l'ID Client:" << endl;
	cin >> t[m].Id_client;
	cout << "Donner le solde du Client:" << endl;
	cin >> t[m].Solde;
	cout << "Donner la date d'ouverture de ce compte:" << endl;
	getchar();
	cin >> t[m].Date_Ouverture;
}

// Affichage des Comptes
void affichage_compte(compte* t, int m, int idc)
{
	cout << "----Affichage du Solde:----\n" << endl;
	cout << "ID du client:\n" << t[m].Id_client << endl;
	cout << "solde:\n" << t[m].Solde << endl;
}

// Recherche des Comptes
int position_compte(compte* t, int m, int idc)
{
	int p = -9, i;
	i = 0;
	while (i <= m)
	{

		if (t[i].Id_client == idc)
		{
			p = i;
		}
		i = i + 1;
	}
	return(p);
}

// Suppresion d'un Compte
void supp_compte(compte* t, int m, int idc)
{
	int ct = 0;
	for (int i = 0; i < m; i++) {
		if (t[i].Id_client == idc)
		{
			for (int j = i; j < m; j++)
			{
				t[j] = t[j + 1];
			}
			ct++;

		}
	}
	if (ct == 0)
	{
		cout << "le compte n`existe pas." << endl;
	}
	else
	{
		cout << "----le compte a etait bien supprimer----" << endl;
	}
}
