
#ifndef __compte__H__
#define __compte__H__
struct compte
{
	int Id_compte;
	int Id_client;
	float Solde;
	char Date_Ouverture[20];
};
void ajouter_compte(compte* t, int m);
void affichage_compte(compte* t, int m, int idc);
int position_compte(compte* t, int m, int idc);
void supp_compte(compte* t, int m, int idc);
void verser_solde(compte* t, int m, int idc);
void retirer_solde(compte* t, int m, int idc);
#endif
