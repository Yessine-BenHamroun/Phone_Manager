#ifndef PROJET_H_INCLUDED
#define PROJET_H_INCLUDED
struct information
{
    int num ;//num de tel
    char nom[50] ;
    char prenom[50] ;
    unsigned pos ;//position d'insertion
    char jc[50] ;//jour de naissance
    char mc[50] ;//mois de naissance
    char ac[50] ;//année de naissance
    char ville[50] ;
    char email[150];//email
    char rue[50] ;//rue
    unsigned ps;//code postal
};
typedef struct information contact ;
struct element
{
    contact info ;
    struct element *suivant ;
};
void creer_liste();
void ajouter_apres_dernier(contact);
unsigned liste_vide();
char * moins1(char *);
void creation() ;
void ajout_en_queue() ;
void ajout_en_tete() ;
void ajout_position();
void supprimer_pos() ;

void supprimer_telephone_donnes();
void supprimer_ville_donnes();
void supprimer_indicatif_donnes();
void modifier_adresse();
void modifier_telephone();
void afficher();
void recherche_par_num() ;
void recherche_par_nom();
void recherche_par_ind();
void recherche_par_ville();
struct element * reference_par_ville(char *);
struct element * reference_par_nom(struct element *,char *);
unsigned verif_num(char *) ;
unsigned verif_nom(char *) ;
unsigned verif_jour(char *);
unsigned verif_mois(char *);
unsigned verif_annee(char *);
unsigned verif_email(char *);
unsigned verif_villerue(char *);
unsigned verif_code(char *);
unsigned verif_ps(unsigned);
unsigned verif_choix(char *);
unsigned verif_ind(char *);
unsigned verif_position2(char *);
void changement_de_position(char*);
char * ind(char *);
struct element * reference_par_ind(char *);
struct element * reference_par_ind2(struct element *,char *);

void supprimer1(struct element*);
void supprimer_premier();
void supprimer_dernier();
void supprimer_premier_element() ;
struct element * referencee(int );
void decrementer_apartir_pos(struct element *);
void supprimer_en_queue();
void supprimer_telephone_donnes() ;
struct element * reference_par_num(char *);
struct element * reference_par_ville2(struct element *,char *);

void enregistrement();
void chargement() ;


void tri() ;
#endif // PROJET_H_INCLUDED

