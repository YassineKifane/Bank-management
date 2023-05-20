#include <iostream>
#include "compte.h"
using namespace std;
void verser_solde(compte* t, int m, int idc)
{
	int j, amt;
	if (position_compte(t, m, idc) == -9)
	{
		cerr << "le compte n`existe pas." << endl;
	}
	else
	{
		j = position_compte(t, m, idc);
		cout << "Entrer le montant a verser:" << endl;
		cin >> amt;
		t[j].Solde = t[j].Solde + amt;
		cout << "----Montant verser avec succes----" << endl;
	}
}

// Retirage d'un Montant
void retirer_solde(compte* t, int m, int idc)
{
	int j, amtt;
	if (position_compte(t, m, idc) == -9)
	{
		cerr << "le compte n`existe pas." << endl;
	}
	else
	{
		j = position_compte(t, m, idc);
		cout << "Entrer le montant a retirer:" << endl;
		cin >> amtt;
		t[j].Solde = t[j].Solde - amtt;
		cout << "----Montant retirer avec succes----" << endl;
	}
}
