#ifndef __client__H__
#define __client__H__
struct client
{
	int Id_client;
	char Nom[20];
	char Prenom[20];
	char Profession[20];
	char Num_tel[20];
};
void creer_client(client* t, int n);
void afficher_client(client* t, int n, int id);
int position_clients(client* t, int n, int id);
void modifier_client(client* t, int n, int id);
void supp_client(client* t, int n, int id);
#endif
