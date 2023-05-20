#include <iostream>
#include "client.h"
using namespace std;
// Creation des clients
void creer_client(client* t, int n)
{
	cout << "----Creation un client----" << endl;
	cout << "Saisie l'ID du client" << endl;
	cin >> t[n].Id_client;
	cout << "Saisie le nom du client" << endl;
	getchar();
	cin >> t[n].Nom;
	cout << "Saisie le prenom du client" << endl;
	getchar();
	cin >> t[n].Prenom;
	cout << "Saisie la profession du client" << endl;
	getchar();
	cin >> t[n].Profession;
	cout << "Saisie le numero du tel du client" << endl;
	getchar();
	cin >> t[n].Num_tel;
}

// Affichage des clients
void afficher_client(client* t, int n, int id)
{
	cout << "----Affichage du client----" << endl;
	cout << "ID du Client: " << t[n].Id_client << endl;
	cout << "Nom du Client: " << t[n].Nom << endl;
	cout << "Prenom du client: " << t[n].Prenom << endl;
	cout << "Profession du Client: " << t[n].Profession << endl;
	cout << "Num de tel du Client: " << t[n].Num_tel << endl;
}

// Recherche Clients
int position_clients(client* t, int n, int id)
{
	int p = -9, i;
	i = 0;
	while (i <= n)
	{

		if (t[i].Id_client == id)
		{
			p = i;
		}
		i = i + 1;
	}
	return(p);
}

// Modification des Clients
void modifier_client(client* t, int n, int id)
{
	int j;
	if (position_clients(t, n, id) == -9)
	{
		cerr << "le client n`existe pas." << endl;
	}
	else
	{
		j = position_clients(t, n, id);
		cout << "Entrer le nouveau nom du client : " << endl;
		getchar();
		cin >> t[j].Nom;
		cout << "Entrer le nouveau prenom du client : " << endl;
		getchar();
		cin >> t[j].Prenom;
		cout << "Entrer la nouvelle profession du client : " << endl;
		getchar();
		cin >> t[j].Profession;
		cout << "Entrer le nouveau numero de telephone du client : " << endl;
		getchar();
		cin >> t[j].Num_tel;
		cout << "----les information du client ont etait bien  modifiee.----" << endl;
	}
}

// Suppresion des Clients
void supp_client(client* t, int n, int id)
{
	int ct = 0;
	for (int i = 0; i < n; i++) {
		if (t[i].Id_client == id)
		{
			for (int j = i; j < n; j++)
			{
				t[j] = t[j + 1];
			}
			ct++;

		}
	}
	if (ct == 0)
	{
		cout << "le client n`existe pas." << endl;
	}
	else
	{
		cout << "----le client a etait bien supprimer----" << endl;
	}
}
