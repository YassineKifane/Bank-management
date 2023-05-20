#include<iostream>
#include<string.h>
#include<fstream>
#include "compte.h"
#include "client.h"
using namespace std;

///////////////////////////////////////
// Projet realiser par Aymane Tchich //
///////////////////////////////////////

int main()
{

	client T[255];
	compte C[255];
	int n = 0, m = 0, idc, id, k, h, x, y;
	do
	{
		cout << "\n----Menu de l'Application----" << endl;
		cout << "01. Gestion des Client" << endl;
		cout << "02. Gestion des Comptes" << endl;
		cout << "03. Gestion des operations" << endl;
		cout << "04. Quitter" << endl;
		cout << "Choisisser de 1 a 4 (1-4) " << endl;
		cin >> x;
		switch (x)
		{
		case 1:
			do
			{
				cout << "\n----Gestion des Client-----" << endl;
				cout << "01. Cree un Client" << endl;
				cout << "02. Modifier un Client" << endl;
				cout << "03. Chercher un Client" << endl;
				cout << "04. Supprimer un Client" << endl;
				cout << "05. Menu General" << endl;
				cout << "Choisisser de 1 a 5 (1-5) " << endl;
				cin >> y;
				switch (y)
				{
				case 1:
					creer_client(T, n);
					n++;
					break;
				case 2:
					cout << "Entrer Identificateur du client: "; cin >> id;
					modifier_client(T, n, id);
					break;
				case 3:
					cout << "Entrer Identificateur du client: "; cin >> id;
					if (position_clients(T, n, id) == -9)
					{
						cerr << "client n`existe pas" << endl;
					}
					else
					{
						cout << "le client existe dans la position : " << position_clients(T, n, id) << endl;
						afficher_client(T, position_clients(T, n, id), id);
					}
					break;
				case 4:
					cout << "Entrer Identificateur du client: "; cin >> id;
					supp_client(T, n, id);
					break;
				case 5:
					cout << "";
					break;
				default:cout << "\a";
				}
			} while (y != 5);
			break;
		case 2:
			do
			{
				cout << "\n----Gestion des Comptes----" << endl;
				cout << "01. Cree un Compte" << endl;
				cout << "02. Consultrer Solde" << endl;
				cout << "03. Fermer un Compte" << endl;
				cout << "04. Menu General" << endl;
				cout << "Choisisser de 1 a 4 (1-4) " << endl;
				cin >> k;
				switch (k)
				{
				case 1:
					ajouter_compte(C, m);
					m++;
					break;
				case 2:
					cout << "Entrer Identificateur du client: "; cin >> idc;
					if (position_compte(C, m, idc) == -9)
					{
						cerr << "compte n`existe pas" << endl;
					}
					else
					{
						cout << "le compte existe dans la position : " << position_compte(C, m, idc) << endl;
						affichage_compte(C, position_compte(C, m, idc), idc);
					}
					break;
				case 3:
					cout << "Entrer Identificateur du client: "; cin >> idc;
					supp_compte(C, m, idc);
					break;
				case 4:
					cout << " ";
				}
			} while (k != 4);
			break;
		case 3:
			do
			{
				cout << "---Gestion des operations---" << endl;
				cout << "01. Retirer un montant" << endl;
				cout << "02. Verser un montant" << endl;
				cout << "03. Menu General" << endl;
				cout << "Choisisser de 1 a 3 (1-3) " << endl;
				getchar();
				cin >> h;
				switch (h)
				{
				case 1:
				{
					cout << "----Retirage d'un montant----\nEntrer Identificater Du Client: " << endl;
					cin >> idc;
					retirer_solde(C, m, idc);
					break;
				}
				case 2:
				{
					cout << "----Versage d'un montant----\nEntrer Identificater Du Client: " << endl;
					cin >> idc;
					verser_solde(C, m, idc);
					break;
				}
				case 3:
				{
					cout << " ";
					break;
				}
				}
			} while (h != 3);
			break;
		case 4:
			remove("client.txt");
			remove("compte.txt");
			cout << "----Sauvegarde des donnees des Clients dans le ficher (client.txt)----" << endl;
			ofstream client("client.txt");
			for (int z = 0; z <= n; z++)
			{
				client << T[z].Id_client << " " << T[z].Nom << " " << T[z].Prenom << " " << T[z].Profession << " " << T[z].Num_tel << endl;
			}
			client.close();
			cout << "----------------------------------------------------------------------" << endl;
			cout << "----Sauvegarde des donnees des Comptes dans le ficher (compte.txt)----" << endl;
			ofstream compte("compte.txt");
			for (int z = 0; z <= m; z++)
			{
				compte << C[z].Id_compte << " " << C[z].Id_client << " " << C[z].Solde << " " << C[z].Date_Ouverture << endl;
			}
			compte.close();
			cout << "----------------------------------------------------------------------" << endl;
			cout << "------------------ Projet Realiser Par Aymane TCHICH -----------------" << endl;
			cout << "----------------------------------------------------------------------" << endl;
			break;
		}
	} while (x != 4);
	return 0;
}
