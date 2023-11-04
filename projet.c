#include <stdio.h>
#include <stdlib.h>
#include "projet.h"
#include <malloc.h>
#include <string.h>
#include <windows.h>

struct liste
{
    struct element *premier ;
    struct element *dernier ;
};

struct liste  l ;

/**************************************************/


void creer_liste()
{

      l->premier = NULL ;
      l->dernier = NULL ;
}

unsigned liste_vide()
{
    return (l-premier == NULL) ;
}

/**************************************************/

void ajouter_avant_premier(contact info)
{
    struct element *p;
    p=(struct element *)malloc(sizeof(struct element ));
    p->cle=info;
    p->suivant=ll->premier;
    ll->premier=p;
    if(ll->premier==NULL)
    {
        ll->dernier=p;
    }
}


/**************************************************/

void ajouter_apres_dernier(contact info)
{
    struct element * p;
    p=(struct element *)malloc(sizeof(struct element));
    p->cle=info;
    p->suivant==NULL;
    if(!liste_vide())
        ll->dernier=p
    else
        ll->dernier->suivant=p;
    ll->dernier=p;
}
/*
void inserer_avant_premier(int info, struct liste *ll)
{
    struct noeud *q;
    q=(struct noeud *)malloc(sizeof(struct noeud));
    q->cle=info;
    q->suivant = ll->premier;
    ll->premier=q;
    */
/**************************************************/

unsigned verifind(char *ch)
{
int j ;
char *jo ;
jo = ch ;
if (strlen(ch)!=2)
    return 0 ;
while (*ch)
{
    if( !(*ch>='0' && *ch<='9') )
            return (0);
        ch++;
}

return 1 ;

}

/**************************************************/

int maxposition()
{
    if(liste_vide())
        return 0 ;
    struct element *e ;
    e = l.premier ;
    int max,a ;
    max = atoi(e->info.ps) ;
    while(e)
    {
        a = atoi(e->info.ps) ;
        if (max <a)
            max =a ;
        e = e->suivant ;
    }
    return max ;
}
/**************************************************/

unsigned verifposition2(char *ch)
{
   int p ;
   p = atoi(ch) ;
    if(liste_vide() && p!=1)
        return 0 ;
    if (p>maxposition()+1)
        return 0 ;
    return 1 ;
}

/**************************************************/

char * moins1(char *ch)
{
    char ch1[50] ;
    int n = atoi(ch) ;
    n--;
    itoa(n,ch1,10);
    return (ch1) ;
}
/**************************************************/

char * plus1(char *ch)
{
    char ch1[50] ;
    int n = atoi(ch) ;
    n++;
    itoa(n,ch1,10);
    return (ch1) ;
}
/**************************************************/


void changement_de_position(char *pos)
{
    int a,b ;
    a = atoi(pos) ;
    struct element *e ;
    e = l->premier ;
        while(e)
        {
            b = atoi(e->info.ps) ;
            if(b>=a)
                strcpy(e->info.ps,plus1(e->info.ps));
            e = e->suivant ;
        }


}
/**************************************************/

unsigned verif_num(char *ch)
{
    if (strlen(ch)!=8)
        return 0 ;
    while(*ch)
    {
        if (*ch<'0' || *ch>'9' )
            return (0);
        ch++;
    }
    return (1) ;
}
/**************************************************/

unsigned verif_nom(char *ch)
{
if(strlen(ch)==0)
        return 0 ;

         while(*ch)
    {
         if( !(*ch>='a' && *ch<='z') && !(*ch>='A' && *ch<='Z')  || *ch =="")
            return (0);
        ch++;
    }
    return (1) ;
}
/**************************************************/

unsigned verif_jour(char *ch)
{
int j ;
char *jo ;
jo = ch ;
if (strlen(ch)>2)
    return 0 ;
while (*ch)
{
    if( !(*ch>='0' && *ch<='9') )
            return (0);
        ch++;
}
j = atoi(jo) ;
if(j<1 ||j>31)
    return 0 ;
return 1 ;

}
/**************************************************/

unsigned verif_mois(char *ch)
{
int j ;
char *jo ;
jo = ch ;
if (strlen(ch)>2)
    return 0 ;
while (*ch)
{
    if( !(*ch>='0' && *ch<='9') )
            return (0);
        ch++;
}
j = atoi(jo) ;
if(j<1 ||j>12)
    return 0 ;
return 1 ;

}
/**************************************************/

unsigned verif_annee(char *ch)
{
int j ;
char *jo ;
jo = ch ;
if (strlen(ch)>4)
    return 0 ;
while (*ch)
{
    if( !(*ch>='0' && *ch<='9') )
            return (0);
        ch++;
}
j = atoi(jo) ;
if(j<1900 ||j>2021)
    return 0 ;
return 1 ;
}
/**************************************************/


unsigned verif_email(char *ch)
{
    int n = strlen(ch) ;
    if(n<10)
        return 0 ;
    char G[50]; //Gmail
    char H[50]; //Hotmail
    char Y[50]; //Yahoo
    char O[50]; //Outlook
    char I[50]; //ISIMM
    strcpy(G,ch+n-10) ;
    strcpy(H,ch+n-12);
    strcpy(Y,ch+n-9);
    strcpy(O,ch+n-12);
    strcpy(I,ch+n-20);
    if((strcmp(G,"@gmail.com") == 0)||(strcmp(H,"@hotmail.com")==0)||(strcmp(Y,"@yahoo.fr") == 0)||(strcmp(O,"@outlook.com") == 0)||(strcmp(I,"@isimm.u-monastir.tn") == 0))
        return 1 ;
    return 0 ;
}
/**************************************************/

unsigned verif_villerue(char *ch)
{
    if(!*ch)
        return 0 ;
    while(*ch)
    {
        if( !(*ch>='a' && *ch<='z') && !(*ch>='A' && *ch<='Z') )
            return 0 ;
        ch++;
    }
    return 1 ;
}
/**************************************************/

unsigned verif_code(char *ch)
{
    if(strlen(ch)!=4)
        return 0 ;
    while (*ch)
{
    if(!( *ch>='0' && *ch<='9') )
            return (0);
        ch++;
}
return 1 ;

}
/**************************************************/

unsigned verifps(char *ch)
{
int j ;
char *jo ;
jo = ch ;
if (!strlen(ch))
    return 0 ;
while (*ch)
{
    if( !(*ch>='0' && *ch<='9') )
            return (0);
        ch++;
}
j = atoi(jo) ;
if(j<1 )
    return 0 ;
return 1 ;

}
/**************************************************/

unsigned verifchoix(char *ch)
{
int j ;
char *jo ;
jo = ch ;
if (strlen(ch)!=1)
    return 0 ;
if(*ch!='0' && *ch!='1')
    return 0 ;
return 1 ;

}

/**************************************************/



void creation()
{


contact info ;
char e[50],n1[50];
int n ;
do
{

gotoxy(41,1);
printf("�������������������������������������ͻ\n");
gotoxy(41,2) ;
printf("�   CREATION DE LA LISTE DE CONTACT   �");
gotoxy(41,3);
printf("�������������������������������������ͼ\n") ;
gotoxy(60,27);
gotoxy(24,4);
printf("�����������������������������������������������������������������������Ŀ") ;
gotoxy(24,5);
printf("�               Numero              �                                   �");
gotoxy(24,6);
printf("�����������������������������������������������������������������������Ĵ") ;
gotoxy(24,7);
printf("�                Nom                �                                   �");
gotoxy(24,8);
printf("�����������������������������������������������������������������������Ĵ") ;
gotoxy(24,9);
printf("�              Prenom               �                                   �");
gotoxy(24,10);
printf("�����������������������������������������������������������������������Ĵ") ;
gotoxy(24,11);
printf("�   Date de naissance (JJ/MM/AAAA)  �         /            /            �");
gotoxy(24,12);
printf("�����������������������������������������������������������������������Ĵ") ;
gotoxy(24,13);
printf("�  Adresse :                                                            �");
gotoxy(24,14);
printf("�����������������������������������������������������������������������Ĵ") ;
gotoxy(24,15);
printf("�               E-Mail              �                                   �");
gotoxy(24,16);
printf("�����������������������������������������������������������������������Ĵ") ;
gotoxy(24,17);
printf("�               Ville               �                                   �");
gotoxy(24,18);
printf("�����������������������������������������������������������������������Ĵ") ;
gotoxy(24,19);
printf("�                Rue                �                                   �");
gotoxy(24,20);
printf("�����������������������������������������������������������������������Ĵ") ;
gotoxy(24,21);
printf("�            Code postale           �                                   �");
gotoxy(24,22);
printf("�����������������������������������������������������������������������Ĵ") ;
gotoxy(24,23);
printf("�              Position             �                                   �");
gotoxy(24,24);
printf("�������������������������������������������������������������������������") ;
gotoxy(35,25);
printf("������������������������������������������������ͻ") ;
gotoxy(35,26) ;
printf("� pour ajouter ce contact tapez 1 sinon tapez 0  �");
gotoxy(35,27);
printf("������������������������������������������������ͼ\n") ;
gotoxy(59,28);
printf(" ");

do
{
   gotoxy(61,5);
   gets(info.num);
   if (!verif_num(info.num))
   {    gotoxy(61,5);
       printf("                                  ");
  MessageBox(0,"Numero invalide","Erreur",0);
  }

}while(!verif_num(info.num)) ;

do
{
   gotoxy(61,7);
   gets(info.nom);
   if (!verif_nom(info.nom))
   {    gotoxy(61,7);
       printf("                                  ");
  MessageBox(0,"Nom invalide","Erreur",0);
  }
}while(!verif_nom(info.nom)) ;

do
{
    gotoxy(61,9);
   gets(info.prenom);
   if (!verif_nom(info.prenom))
   {    gotoxy(61,9);
       printf("                                  ");
  MessageBox(0,"Prenom invalide","Erreur",0);
  }
}while(!verif_nom(info.prenom)) ;

do
{
   gotoxy(66,11);
   gets(info.jc) ;
   if(!verif_jour(info.jc))
   {
       gotoxy(61,11);
       printf("         /            /            �");
       MessageBox(0,"jour invalide","Erreur",0);
   }
}while(!verif_jour(info.jc)) ;

do
{
   gotoxy(76,11);
   gets(info.mc) ;
   if(!verif_mois(info.mc))
   {
       gotoxy(74,11);
       printf("         /            �");
       MessageBox(0,"mois invalide","Erreur",0);
   }
}while(!verif_mois(info.mc)) ;

do
{
   gotoxy(87,11);
   gets(info.ac) ;
   if(!verif_annee(info.ac))
   {
       gotoxy(87,11);
       printf("         �");
       MessageBox(0,"annee invalide","Erreur",0);
   }
}while(!verif_annee(info.ac)) ;

do
{
    gotoxy(61,15);
    gets(info.email) ;
   if(!verif_email(info.email))
   {
       gotoxy(61,15);
       printf("                                  ");
       MessageBox(0,"E-mail invalide","Erreur",0);
   }
}while(!verif_email(info.email)) ;

do
{
    gotoxy(61,17);
    gets(info.ville);
   if(!verif_villerue(info.ville))
   {
       gotoxy(61,17);
       printf("                                  ");
       MessageBox(0,"Ville invalide","Erreur",0);
   }
}while(!verif_villerue(info.ville)) ;

do
{
    gotoxy(61,19);
    gets(info.rue);
   if(!verif_villerue(info.rue))
   {
       gotoxy(61,19);
       printf("                                  ");
       MessageBox(0,"rue invalide","Erreur",0);
   }
}while(!verif_villerue(info.rue)) ;


do
{
gotoxy(61,21);
gets(info.pos) ;
   if(!verif_code(info.pos))
   {
       gotoxy(61,21);
       printf("                                  ");
       MessageBox(0,"code postale invalide","Erreur",0);
   }
}while(!verif_code(info.pos)) ;

do
{
gotoxy(61,23);
gets(info.ps) ;
   if(strcmp(info.ps,"0")==0 || !verifps(info.ps) || !verifposition2(info.ps))
   {
       gotoxy(61,23);
       printf("                                  ");
       MessageBox(0,"position invalide","Erreur",0);
   }
}while(strcmp(info.ps,"0")==0 || !verifps(info.ps) || !verifposition2(info.ps)) ;

do
{
gotoxy(60,26);
gets(e);
   if(!verifchoix(e))
   {
       gotoxy(60,26);
       printf(" �                                ");
       MessageBox(0,"choix invalide","Erreur",0);
   }
}while(!verifchoix(e)) ;
if(strcmp(e,"1")==0)
    {
         changement_de_position(info.ps) ;
         ajouter_apres_dernier(info) ;
         MessageBox(0,"information ajoute avec succes","Erreur",0);

    }
gotoxy(24,28);
printf("�����������������������������������������������������������������������Ŀ") ;
gotoxy(24,29) ;
printf("�   voulez vous ajouter un autre telephone? (0 pour non 1 pour oui)  �");
gotoxy(24,30);
printf("�������������������������������������������������������������������������") ;
gotoxy(59,31);
printf("� � ");

do
{
gotoxy(60,31);
gets(n1);
   if(!verifchoix(n1))
   {
       gotoxy(60,31);
       printf(" �                                ");
       MessageBox(0,"choix invalide","Erreur",0);
   }
}while(!verifchoix(n1)) ;
 n = atoi(n1) ;

       gotoxy(60,31);
       printf(" �                                ");
       printf("\n");
}while(n);
}
/**************************************************/

void ajout_en_tete()
{


contact info ;
char e[50],n1[50];
int n ;
do
{

gotoxy(41,1);
printf("������������������������������������ͻ\n") ;
gotoxy(41,2) ;
printf("�      AJOUT UN CONTACT EN TETE      �");
gotoxy(41,3);
printf("������������������������������������ͼ\n") ;
gotoxy(60,27);
gotoxy(24,4);
printf("�����������������������������������������������������������������������Ŀ") ;
gotoxy(24,5);
printf("�               Numero              �                                   �");
gotoxy(24,6);
printf("�����������������������������������������������������������������������Ĵ") ;
gotoxy(24,7);
printf("�                Nom                �                                   �");
gotoxy(24,8);
printf("�����������������������������������������������������������������������Ĵ") ;
gotoxy(24,9);
printf("�              Prenom               �                                   �");
gotoxy(24,10);
printf("�����������������������������������������������������������������������Ĵ") ;
gotoxy(24,11);
printf("�   Date de naissance (JJ/MM/AAAA)  �         /            /            �");
gotoxy(24,12);
printf("�����������������������������������������������������������������������Ĵ") ;
gotoxy(24,13);
printf("�               E-Mail              �                                   �");
gotoxy(24,14);
printf("�����������������������������������������������������������������������Ĵ") ;
gotoxy(24,15);
printf("�               Ville               �                                   �");
gotoxy(24,16);
printf("�����������������������������������������������������������������������Ĵ") ;
gotoxy(24,17);
printf("�                Rue                �                                   �");
gotoxy(24,18);
printf("�����������������������������������������������������������������������Ĵ") ;
gotoxy(24,19);
printf("�            Code postale           �                                   �");
gotoxy(24,20);
printf("�������������������������������������������������������������������������") ;
gotoxy(35,23);
printf("������������������������������������������������Ŀ") ;
gotoxy(35,24) ;
printf("� pour ajouter ce contact tapez 1 sinon tapez 0 �");
gotoxy(35,25);
printf("��������������������������������������������������") ;
gotoxy(59,26);
printf("� � ");

do
{
   gotoxy(61,5);
   gets(info.num);
   if (!verif_num(info.num))
   {    gotoxy(61,5);
       printf("                                  ");
  MessageBox(0,"Numero invalide","Erreur",0);
  }

}while(!verif_num(info.num)) ;

do
{
   gotoxy(61,7);
   gets(info.nom);
   if (!verif_nom(info.nom))
   {    gotoxy(61,7);
       printf("                                  ");
  MessageBox(0,"Nom invalide","Erreur",0);
  }
}while(!verif_nom(info.nom)) ;

do
{
    gotoxy(61,9);
   gets(info.prenom);
   if (!verif_nom(info.prenom))
   {    gotoxy(61,9);
       printf("                                  ");
  MessageBox(0,"Prenom invalide","Erreur",0);
  }
}while(!verif_nom(info.prenom)) ;

do
{
   gotoxy(66,11);
   gets(info.jc) ;
   if(!verif_jour(info.jc))
   {
       gotoxy(61,11);
       printf("         /            /            �");
       MessageBox(0,"jour invalide","Erreur",0);
   }
}while(!verif_jour(info.jc)) ;

do
{
   gotoxy(76,11);
   gets(info.mc) ;
   if(!verif_mois(info.mc))
   {
       gotoxy(74,11);
       printf("         /            �");
       MessageBox(0,"mois invalide","Erreur",0);
   }
}while(!verif_mois(info.mc)) ;

do
{
   gotoxy(87,11);
   gets(info.ac) ;
   if(!verif_annee(info.ac))
   {
       gotoxy(87,11);
       printf("         �");
       MessageBox(0,"annee invalide","Erreur",0);
   }
}while(!verif_annee(info.ac)) ;

do
{
    gotoxy(61,13);
    gets(info.email) ;
   if(!verif_email(info.email))
   {
       gotoxy(61,13);
       printf("                                  ");
       MessageBox(0,"E-mail invalide","Erreur",0);
   }
}while(!verif_email(info.email)) ;

do
{
    gotoxy(61,15);
    gets(info.ville);
   if(!verif_villerue(info.ville))
   {
       gotoxy(61,15);
       printf("                                  ");
       MessageBox(0,"Ville invalide","Erreur",0);
   }
}while(!verif_villerue(info.ville)) ;

do
{
    gotoxy(61,17);
    gets(info.rue);
   if(!verif_villerue(info.rue))
   {
       gotoxy(61,17);
       printf("                                  ");
       MessageBox(0,"rue invalide","Erreur",0);
   }
}while(!verif_villerue(info.rue)) ;



do
{
gotoxy(61,19);
gets(info.pos) ;
   if(!verif_code(info.pos))
   {
       gotoxy(61,19);
       printf("                                  ");
       MessageBox(0,"code postale invalide","Erreur",0);
   }
}while(!verif_code(info.pos)) ;

info.ps="1";

do
{
gotoxy(60,26);
gets(e);
   if(!verifchoix(e))
   {
       gotoxy(60,26);
       printf(" �                                ");
       MessageBox(0,"choix invalide","Erreur",0);
   }
}while(!verifchoix(e)) ;



if(strcmp(e,"1")==0)
    {
         changement_de_position(info.ps) ;
         ajouter_avant_premier(info) ;
    }
 MessageBox(0,"information ajoute avec succes","",0);
gotoxy(24,27);
printf("�����������������������������������������������������������������������Ŀ") ;
gotoxy(24,28) ;
printf("�   voulez vous ajouter un autre telephone? (0 pour non 1 pour oui)  �");
gotoxy(24,29);
printf("�������������������������������������������������������������������������") ;
gotoxy(59,30);
printf("� � ");


do
{
gotoxy(60,30);
gets(n1);
   if(!verifchoix(n1))
   {
       gotoxy(60,30);
       printf(" �                                ");
       MessageBox(0,"choix invalide","Erreur",0);
   }
}while(!verifchoix(n1)) ;
 n = atoi(n1) ;

       gotoxy(60,30);
       printf(" �                                ");
}while(n);
}
/**************************************************/

void ajout_en_queue()
{


contact info ;
char e[50],n1[50],k[50];
int n ;
do
{

gotoxy(41,1);
printf("������������������������������������ͻ\n") ;
gotoxy(41,2) ;
printf("�      AJOUT UN CONTACT EN QUEUE     �");
gotoxy(41,3);
printf("������������������������������������ͼ\n") ;
gotoxy(60,27);
gotoxy(24,4);
printf("�����������������������������������������������������������������������Ŀ") ;
gotoxy(24,5);
printf("�               Numero              �                                   �");
gotoxy(24,6);
printf("�����������������������������������������������������������������������Ĵ") ;
gotoxy(24,7);
printf("�                Nom                �                                   �");
gotoxy(24,8);
printf("�����������������������������������������������������������������������Ĵ") ;
gotoxy(24,9);
printf("�              Prenom               �                                   �");
gotoxy(24,10);
printf("�����������������������������������������������������������������������Ĵ") ;
gotoxy(24,11);
printf("�   Date de naissance (JJ/MM/AAAA)  �          /          /             �");
gotoxy(24,12);
printf("�����������������������������������������������������������������������Ĵ") ;
gotoxy(24,13);
printf("�               E-Mail              �                                   �");
gotoxy(24,14);
printf("�����������������������������������������������������������������������Ĵ") ;
gotoxy(24,15);
printf("�               Ville               �                                   �");
gotoxy(24,16);
printf("�����������������������������������������������������������������������Ĵ") ;
gotoxy(24,17);
printf("�                Rue                �                                   �");
gotoxy(24,18);
printf("�����������������������������������������������������������������������Ĵ") ;
gotoxy(24,19);
printf("�            Code postale           �                                   �");
gotoxy(24,20);
printf("�������������������������������������������������������������������������") ;
gotoxy(35,23);
printf("������������������������������������������������Ŀ") ;
gotoxy(35,24) ;
printf("� pour ajouter ce contact tapez 1 sinon tapez 0 �");
gotoxy(35,25);
printf("��������������������������������������������������") ;
gotoxy(59,26);
printf("� � ");

do
{
   gotoxy(61,5);
   gets(info.num);
   if (!verif_num(info.num))
   {    gotoxy(61,5);
       printf("                                  ");
  MessageBox(0,"Numero invalide","Erreur",0);
  }

}while(!verif_num(info.num)) ;

do
{
   gotoxy(61,7);
   gets(info.nom);
   if (!verif_nom(info.nom))
   {    gotoxy(61,7);
       printf("                                  ");
  MessageBox(0,"Nom invalide","Erreur",0);
  }
}while(!verif_nom(info.nom)) ;

do
{
    gotoxy(61,9);
   gets(info.prenom);
   if (!verif_nom(info.prenom))
   {    gotoxy(61,9);
       printf("                                  ");
  MessageBox(0,"Prenom invalide","Erreur",0);
  }
}while(!verif_nom(info.prenom)) ;

do
{
   gotoxy(66,11);
   gets(info.jc) ;
   if(!verif_jour(info.jc))
   {
       gotoxy(61,11);
       printf("         /            /            �");
       MessageBox(0,"jour invalide","Erreur",0);
   }
}while(!verif_jour(info.jc)) ;

do
{
   gotoxy(76,11);
   gets(info.mc) ;
   if(!verif_mois(info.mc))
   {
       gotoxy(74,11);
       printf("         /            �");
       MessageBox(0,"mois invalide","Erreur",0);
   }
}while(!verif_mois(info.mc)) ;

do
{
   gotoxy(87,11);
   gets(info.ac) ;
   if(!verif_annee(info.ac))
   {
       gotoxy(87,11);
       printf("         �");
       MessageBox(0,"annee invalide","Erreur",0);
   }
}while(!verif_annee(info.ac)) ;

do
{
    gotoxy(61,13);
    gets(info.email) ;
   if(!verif_email(info.email))
   {
       gotoxy(61,13);
       printf("                                  ");
       MessageBox(0,"E-mail invalide","Erreur",0);
   }
}while(!verif_email(info.email)) ;

do
{
    gotoxy(61,15);
    gets(info.ville);
   if(!verif_villerue(info.ville))
   {
       gotoxy(61,15);
       printf("                                  ");
       MessageBox(0,"Ville invalide","Erreur",0);
   }
}while(!verif_villerue(info.ville)) ;

do
{
    gotoxy(61,17);
    gets(info.rue);
   if(!verif_villerue(info.rue))
   {
       gotoxy(61,17);
       printf("                                  ");
       MessageBox(0,"rue invalide","Erreur",0);
   }
}while(!verif_villerue(info.rue)) ;



do
{
gotoxy(61,19);
gets(info.pos) ;
   if(!verif_code(info.pos))
   {
       gotoxy(61,19);
       printf("                                  ");
       MessageBox(0,"code postale invalide","Erreur",0);
   }
}while(!verif_code(info.pos)) ;


 itoa(maxposition()+1,k,10);
strcpy(info.ps,k);

do
{
gotoxy(60,26);
gets(e);
   if(!verifchoix(e))
   {
       gotoxy(60,26);
       printf(" �                                ");
       MessageBox(0,"choix invalide","Erreur",0);
   }
}while(!verifchoix(e)) ;

if(strcmp(e,"1")==0)
         ajouter_apres_dernier(info) ;

 MessageBox(0,"information ajoute avec succes","",0);
gotoxy(24,27);
printf("�����������������������������������������������������������������������Ŀ") ;
gotoxy(24,28) ;
printf("�   voulez vous ajouter un autre telephone? (0 pour non 1 pour oui)  �");
gotoxy(24,29);
printf("�������������������������������������������������������������������������") ;
gotoxy(59,30);
printf("� � ");


do
{
gotoxy(60,30);
gets(n1);
   if(!verifchoix(n1))
   {
       gotoxy(60,30);
       printf(" �                                ");
       MessageBox(0,"choix invalide","Erreur",0);
   }
}while(!verifchoix(n1)) ;
 n = atoi(n1) ;

       gotoxy(60,30);
       printf(" �                                ");
}while(n);
}
/**************************************************/

void ajout_position()
{


contact info ;
char e[50],n1[50];
int n ;
do
{

gotoxy(41,1);
printf("�������������������������������������ͻ\n") ;
gotoxy(41,2) ;
printf("�           AJOUT UN CONTACT          �");
gotoxy(41,3);
printf("�������������������������������������ͼ\n") ;
gotoxy(60,27);
gotoxy(24,4);
printf("�����������������������������������������������������������������������Ŀ") ;
gotoxy(24,5);
printf("�               Numero              �                                   �");
gotoxy(24,6);
printf("�����������������������������������������������������������������������Ĵ") ;
gotoxy(24,7);
printf("�                Nom                �                                   �");
gotoxy(24,8);
printf("�����������������������������������������������������������������������Ĵ") ;
gotoxy(24,9);
printf("�              Prenom               �                                   �");
gotoxy(24,10);
printf("�����������������������������������������������������������������������Ĵ") ;
gotoxy(24,11);
printf("�   Date de naissance (JJ/MM/AAAA)  �          /          /             �");
gotoxy(24,12);
printf("�����������������������������������������������������������������������Ĵ") ;
gotoxy(24,13);
printf("�               E-Mail              �                                   �");
gotoxy(24,14);
printf("�����������������������������������������������������������������������Ĵ") ;
gotoxy(24,15);
printf("�               Ville               �                                   �");
gotoxy(24,16);
printf("�����������������������������������������������������������������������Ĵ") ;
gotoxy(24,17);
printf("�                Rue                �                                   �");
gotoxy(24,18);
printf("�����������������������������������������������������������������������Ĵ") ;
gotoxy(24,19);
printf("�            Code postale           �                                   �");
gotoxy(24,20);
printf("�����������������������������������������������������������������������Ĵ") ;
gotoxy(24,21);
printf("�              Position             �                                   �");
gotoxy(24,22);
printf("�������������������������������������������������������������������������") ;
gotoxy(35,23);
printf("������������������������������������������������Ŀ") ;
gotoxy(35,24) ;
printf("� pour ajouter ce contact tapez 1 sinon tapez 0 �");
gotoxy(35,25);
printf("��������������������������������������������������") ;
gotoxy(59,26);
printf("� � ");

do
{
   gotoxy(61,5);
   scanf("%d",&info.num);
   if (!verif_num(info.num))
   {    gotoxy(61,5);
       printf("                                  ");
  MessageBox(0,"Numero invalide","Erreur",0);
  }

}while(!verif_num(info.num)) ;

do
{
   gotoxy(61,7);
   gets(info.nom);
   if (!verif_nom(info.nom))
   {    gotoxy(61,7);
       printf("                                  ");
  MessageBox(0,"Nom invalide","Erreur",0);
  }
}while(!verif_nom(info.nom)) ;

do
{
    gotoxy(61,9);
   gets(info.prenom);
   if (!verif_nom(info.prenom))
   {    gotoxy(61,9);
       printf("                                  ");
  MessageBox(0,"Prenom invalide","Erreur",0);
  }
}while(!verif_nom(info.prenom)) ;

do
{
   gotoxy(66,11);
   gets(info.jc) ;
   if(!verif_jour(info.jc))
   {
       gotoxy(61,11);
       printf("         /            /            �");
       MessageBox(0,"jour invalide","Erreur",0);
   }
}while(!verif_jour(info.jc)) ;

do
{
   gotoxy(76,11);
   gets(info.mc) ;
   if(!verif_mois(info.mc))
   {
       gotoxy(74,11);
       printf("         /            �");
       MessageBox(0,"mois invalide","Erreur",0);
   }
}while(!verif_mois(info.mc)) ;

do
{
   gotoxy(87,11);
   gets(info.ac) ;
   if(!verif_annee(info.ac))
   {
       gotoxy(87,11);
       printf("         �");
       MessageBox(0,"annee invalide","Erreur",0);
   }
}while(!verif_annee(info.ac)) ;

do
{
    gotoxy(61,13);
    gets(info.email) ;
   if(!verif_email(info.email))
   {
       gotoxy(61,13);
       printf("                                  ");
       MessageBox(0,"E-mail invalide","Erreur",0);
   }
}while(!verif_email(info.email)) ;

do
{
    gotoxy(61,15);
    gets(info.ville);
   if(!verif_villerue(info.ville))
   {
       gotoxy(61,15);
       printf("                                  ");
       MessageBox(0,"Ville invalide","Erreur",0);
   }
}while(!verif_villerue(info.ville)) ;

do
{
    gotoxy(61,17);
    gets(info.rue);
   if(!verif_villerue(info.rue))
   {
       gotoxy(61,17);
       printf("                                  ");
       MessageBox(0,"rue invalide","Erreur",0);
   }
}while(!verif_villerue(info.rue)) ;


do
{
gotoxy(61,19);
gets(info.pos) ;
   if(!verif_code(info.pos))
   {
       gotoxy(61,19);
       printf("                                  ");
       MessageBox(0,"code postale invalide","Erreur",0);
   }
}while(!verif_code(info.pos)) ;

do
{
gotoxy(61,21);
gets(info.ps) ;
   if(strcmp(info.ps,"0")==0 || !verifps(info.ps) || !verifposition2(info.ps))
   {
       gotoxy(61,21);
       printf("                                  ");
       MessageBox(0,"position invalide","Erreur",0);
   }
}while(strcmp(info.ps,"0")==0 || !verifps(info.ps) || !verifposition2(info.ps)) ;

do
{
gotoxy(60,26);
gets(e);
   if(!verifchoix(e))
   {
       gotoxy(60,26);
       printf(" �                                ");
       MessageBox(0,"choix invalide","Erreur",0);
   }
}while(!verifchoix(e)) ;
if(strcmp(e,"1")==0)
    {
         changement_de_position(info.ps) ;
         ajouter_apres_dernier(info) ;
         MessageBox(0,"information ajoute avec succes","",0);

    }
gotoxy(24,27);
printf("�����������������������������������������������������������������������Ŀ") ;
gotoxy(24,28) ;
printf("�   voulez vous ajouter un autre telephone? (0 pour non 1 pour oui)  �");
gotoxy(24,29);
printf("�������������������������������������������������������������������������") ;
gotoxy(59,30);
printf("� � ");

do
{
gotoxy(60,30);
gets(n1);
   if(!verifchoix(n1))
   {
       gotoxy(60,30);
       printf(" �                                ");
       MessageBox(0,"choix invalide","Erreur",0);
   }
}while(!verifchoix(n1)) ;
 n = atoi(n1) ;

       gotoxy(60,30);
       printf(" �                                ");
       printf("\n");
}while(n);
}
/*******************************************************/
void supprimer_pos()
{
 char ps[10],n ;

gotoxy(41,1);
printf("�������������������������������������ͻ\n") ;
gotoxy(41,2) ;
printf("�SUPPRESSION A PARTIR D'UNE POSITION �");
gotoxy(41,3);
printf("�������������������������������������ͼ\n") ;
gotoxy(24,4);
printf("�����������������������������������������������������������������������Ŀ") ;
gotoxy(24,5);
printf("�               position            �                                   �");
gotoxy(24,6);
printf("�������������������������������������������������������������������������") ;
do
{
gotoxy(61,5);
gets(ps) ;
   if(!verifps(ps))
   {
       gotoxy(61,5);
       printf("                                  ");
       MessageBox(0,"position invalide","Erreur",0);
   }
}while(!verifps(ps)) ;
n = atoi(ps) ;
struct element *q ;
q = referencee(n);
if(!q)
MessageBox(0,"position invalide","Erreur",0);
else
{
    while(q)
    {
        supprimer1(q);
        q = q->suivant ;
    }
    MessageBox(0,"supression reussie","Erreur",0);
}
printf("\n\n");
}
/**************************************************/
void supprimer_dernier()
{
    struct element *p,*aux;
    aux = l.dernier;
    if(l.dernier==l.premier)
    {
        l.dernier=NULL;
        l.premier=NULL;
    }
    else
    {
        p=l.premier;
    while(p->suivant!=l.dernier)
    {
        p=p->suivant;
    }
    p->suivant=NULL;
    l.dernier=p;
    }
    free(aux);
}
/**************************************************/

void supprimer_premier()
{
    struct element *aux;
    aux = l.premier ;
    if(l.dernier==l.premier)
    {
        free(l.premier);
        l.dernier=NULL;
        l.premier=NULL;
    }
    else
       l.premier=aux->suivant;
       free(aux);
}
/**************************************************/

void supprimer1(struct element *e)
{
    struct element*f,*aux;
    f=l.premier;
    if(e==l.premier)
        {
            supprimer_premier();
        }
    else if(e==l.dernier)
        {
            supprimer_dernier();
        }
    else
        {
                while(f->suivant!=e)
            {
                f=f->suivant;

            }
            aux =f->suivant ;
            f->suivant=e->suivant;
           free(aux);
        }

}
/**************************************************/

char * ind(char *ch)
{
        char ch1[3] ;
    ch1[0] = ch[0] ;
       ch1[1] = ch[1] ;
          ch1[2] = '\0' ;
          return ch1 ;
}
/***********************************************/
struct element * reference_par_ind(char *ch)
{
    char ch1[3],ch2[3] ;
      strcpy(ch1,ind(ch)) ;
    struct element *q ;
    q = l.premier ;
    while(q)
    {
        strcpy(ch2,ind(q->info.num));
        if (strcmp(ch1,ch2)==0)
            return q ;
    q = q->suivant ;
    }
    return NULL ;

}
/********************************************/
struct element * reference_par_ville(char *ch)
{
    struct element *q ;
    q = l.premier ;
    while(q)
    {

        if (strcmp(ch,q->info.ville)==0)
            return q ;
    q = q->suivant ;
    }
    return NULL ;

}
/************************************/
void supprimer_telephone_donnes()
{
 char num[10] ;

gotoxy(41,1);
printf("�������������������������������������ͻ\n") ;
gotoxy(41,2) ;
printf("�  SUPPRESSION D'UN TELEPHONE DONNEE �");
gotoxy(41,3);
printf("�������������������������������������ͼ\n") ;
gotoxy(24,4);
printf("�����������������������������������������������������������������������Ŀ") ;
gotoxy(24,5);
printf("�              Telephone            �                                   �");
gotoxy(24,6);
printf("�������������������������������������������������������������������������") ;
do
{
gotoxy(61,5);
gets(num) ;
   if(!verif_num(num))
   {
       gotoxy(61,5);
       printf("                                  ");
       MessageBox(0,"telephone invalide","Erreur",0);
   }
}while(!verif_num(num)) ;

struct element *q ;
q = reference_par_num(num);
struct element *e ;
if(!q)
MessageBox(0,"numero invalide","Erreur",0);
else
    {
    e = q->suivant ;
    supprimer1(q);
    decrementer_apartir_pos(e);
    MessageBox(0,"suppression reussie","Erreur",0);
    }


}
/**************************************************/

void supprimer_ville_donnes()
{
 char ville[50] ;
//�������������������������������������ͻ
gotoxy(35,1);
printf("���������������������������������������������ͻ\n") ;
gotoxy(35,2) ;
printf("�SUPPRESSION DES TELEPHONES D'UNE VILLE DONNEE�");
gotoxy(35,3);
printf("���������������������������������������������ͼ\n") ;
gotoxy(24,4);
printf("�����������������������������������������������������������������������Ŀ") ;
gotoxy(24,5);
printf("�              Ville                �                                   �");
gotoxy(24,6);
printf("�������������������������������������������������������������������������") ;
do
{
gotoxy(61,5);
gets(ville) ;
   if(!verif_villerue(ville))
   {
       gotoxy(61,5);
       printf("                                  ");
       MessageBox(0,"ville invalide","Erreur",0);
   }
}while(!verif_villerue(ville)) ;

struct element *q,*e ;
q = reference_par_ville(ville);
if(!q)
    MessageBox(0,"ville invalide","Erreur",0);
else
{
    while(q)
    {
        e = q->suivant ;
        supprimer1(q);
        decrementer_apartir_pos(e);
        q = reference_par_ville(ville);
    }
MessageBox(0,"suppression reussie","Erreur",0);

}

}
/**************************************************/

void supprimer_indicatif_donnes()
{
 char ps[10] ;

gotoxy(31,1);
printf("�������������������������������������������������ͻ") ;
gotoxy(31,2) ;
printf("�SUPPRESSION DES TELEPHONES D'UN  INDICATIF DONNEE�");
gotoxy(31,3);
printf("�������������������������������������������������ͼ\n") ;
gotoxy(24,4);
printf("�����������������������������������������������������������������������Ŀ") ;
gotoxy(24,5);
printf("�            Indicatif              �                                   �");
gotoxy(24,6);
printf("�������������������������������������������������������������������������") ;

do
{
gotoxy(61,5);
gets(ps) ;
   if(!verifind(ps))
   {
       gotoxy(61,5);
       printf("                                  ");
       MessageBox(0,"Indicatif invalide","Erreur",0);
   }
}while(!verifind(ps)) ;
struct element *q,*e ;
q = reference_par_ind(ps);
if(!q)
MessageBox(0,"indicatif invalide","Erreur",0);
else
{
while(q)
{
e = q->suivant ;
supprimer1(q);
decrementer_apartir_pos(e);
q = reference_par_ind(ps);
}
MessageBox(0,"suppression reussie","Erreur",0);

}

}
/**************************************************/

void modifier_adresse()
{
char num[50],ville[50],rue[50],pos[50] ;
textcolor(1) ;
gotoxy(34,1);
printf("�������������������������������������������������ͻ") ;
gotoxy(34,2) ;
printf("�               Modification d'Adresse            �");
gotoxy(34,3);
printf("�������������������������������������������������ͼ") ;
textcolor(2);

gotoxy(24,4);
printf("�����������������������������������������������������������������������Ŀ") ;
gotoxy(24,5);
printf("�           Numero a modifie        �                                   �");
gotoxy(24,6);
printf("�������������������������������������������������������������������������") ;

gotoxy(24,8);
printf("�����������������������������������������������������������������������Ŀ") ;
gotoxy(24,9);
printf("�            Nouvelle ville         �                                   �");
gotoxy(24,10);
printf("�����������������������������������������������������������������������Ĵ") ;
gotoxy(24,11);
printf("�             Nouvelle Rue          �                                   �");
gotoxy(24,12);
printf("�����������������������������������������������������������������������Ĵ") ;
gotoxy(24,13);
printf("�         Nouveau Code postale      �                                   �");
gotoxy(24,14);
printf("�������������������������������������������������������������������������") ;

do
{
   gotoxy(61,5);
   gets(num);
   if (!verif_num(num))
   {    gotoxy(61,5);
       printf("                                  ");
  MessageBox(0,"Numero invalide","Erreur",0);
  }

}while(!verif_num(num)) ;

struct element *q ;
q = reference_par_num(num) ;
if(!q)
      MessageBox(0,"Numero introuvable","Erreur",0);
else
{
do
{
    gotoxy(61,9);
    gets(ville);
   if(!verif_villerue(ville))
   {
       gotoxy(61,9);
       printf("                                  ");
       MessageBox(0,"Ville invalide","Erreur",0);
   }
}while(!verif_villerue(ville)) ;
strcpy(q->info.ville,ville) ;
do
{
    gotoxy(61,11);
    gets(rue);
   if(!verif_villerue(rue))
   {
       gotoxy(61,11);
       printf("                                  ");
       MessageBox(0,"rue invalide","Erreur",0);
   }
}while(!verif_villerue(rue)) ;
strcpy(q->info.rue,rue) ;

do
{
gotoxy(61,13);
gets(pos) ;
   if(!verif_code(pos))
   {
       gotoxy(61,13);
       printf("                                  ");
       MessageBox(0,"code postale invalide","Erreur",0);
   }
}while(!verif_code(pos)) ;

strcpy(q->info.pos,pos) ;
       MessageBox(0,"contact modifie avec succes","Erreur",0);

}
}
/**************************************************/

void modifier_telephone()
{
char num[50],num1[50];

gotoxy(34,1);
printf("�������������������������������������������������ͻ") ;
gotoxy(34,2) ;
printf("�            Modification de telephone            �");
gotoxy(34,3);
printf("�������������������������������������������������ͼ") ;
gotoxy(24,4);
printf("�����������������������������������������������������������������������Ŀ") ;
gotoxy(24,5);
printf("�           Numero a modifie        �                                   �");
gotoxy(24,6);
printf("�������������������������������������������������������������������������") ;


do
{
   gotoxy(61,5);
   gets(num);
   if (!verif_num(num))
   {    gotoxy(61,5);
       printf("                                  ");
  MessageBox(0,"Numero invalide","Erreur",0);
  }

}while(!verif_num(num)) ;

struct element *q ;
q = reference_par_num(num) ;
if(!q)
     MessageBox(0,"Numero introuvable","Erreur",0);

else
{
gotoxy(24,8);
printf("�����������������������������������������������������������������������Ŀ") ;
gotoxy(24,9);
printf("�            nouveau numero         �                                   �");
gotoxy(24,10);
printf("�������������������������������������������������������������������������") ;

do
{
   gotoxy(61,9);
   gets(num1);
   if (!verif_num(num1))
   {    gotoxy(61,9);
       printf("                                  ");
  MessageBox(0,"Numero invalide","Erreur",0);
  }

}while(!verif_num(num1)) ;

strcpy(q->info.num,num1) ;
  MessageBox(0,"Numero modifie avec succes","",0);

}

}
/**************************************************/
void afficher()
{
contact info ;
int n,i,k ,ok,x=1,y=8;
n = maxposition() ;
if (n==0)
      MessageBox(0,"liste vide","Erreur",0);
else
{

gotoxy(37,2);
printf("�������������������������������������������������ͻ") ;
gotoxy(37,3) ;
printf("�        Contenu de la liste des telephones       �");
gotoxy(37,3) ;
gotoxy(37,4);
printf("�������������������������������������������������ͼ") ;
gotoxy(1,6);
printf("����������������������������������������������������������������������������������������������������������������������Ŀ") ;
gotoxy(1,7) ;
printf("�pos�  Numero�     Nom    �    Prenom   �birth date�           Adresse e-mail        �    ville    �       Rue    �Cd p�");
gotoxy(1,8);
printf("����������������������������������������������������������������������������������������������������������������������Ĵ");

struct element *e ;


for(i=1;i<=n;i++)
{
    e = l.premier ;
    ok = 1 ;
    while(e && ok)
    {
        k = atoi(e->info.ps) ;
        if (k==i)
            ok = 0 ;

        else
            e =e->suivant ;
    }


y++;
gotoxy(x,y) ;
printf("�   �        �            �             �          �                                 �             �              �    �");
y++;
gotoxy(x,y);
printf("����������������������������������������������������������������������������������������������������������������������Ĵ") ;
gotoxy(x+1,y-1);
printf("%s",e->info.ps);
gotoxy(x+5,y-1);
printf("%s",e->info.num);
gotoxy(x+13,y-1);
printf("�%s",e->info.nom);
gotoxy(x+27,y-1);
printf("%s",e->info.prenom);
gotoxy(x+41,y-1);
printf("%s/%s/%s",e->info.jc,e->info.mc,e->info.ac);
gotoxy(x+52,y-1);
printf("%s",e->info.email);
gotoxy(x+86,y-1);
printf("%s",e->info.ville);
gotoxy(x+100,y-1);
printf("%s",e->info.rue);
gotoxy(x+115,y-1);
printf("%s",e->info.pos) ;
}
gotoxy(x,y);
printf("������������������������������������������������������������������������������������������������������������������������") ;
}
printf("\n\n") ;
}
/**************************************************/
void recherche_par_num()
{

char num[50] ;

gotoxy(41,1);
printf("������������������������������������ͻ") ;
gotoxy(41,2) ;
printf("�  Recherche par numero de telephone �");
gotoxy(41,3);
printf("������������������������������������ͼ") ;
gotoxy(24,4);
printf("�����������������������������������������������������������������������Ŀ") ;
gotoxy(24,5);
printf("�               Numero              �                                   �");
gotoxy(24,6);
printf("�������������������������������������������������������������������������") ;
do
{
   gotoxy(61,5);
   gets(num);
   if (!verif_num(num))
   {    gotoxy(61,5);
       printf("                                  ");
  MessageBox(0,"Numero invalide","Erreur",0);
  }

}while(!verif_num(num)) ;

struct element *q ;
q = reference_par_num(num) ;
if(!q)
     MessageBox(0,"Numero introuvable","Erreur",0);

else
{
gotoxy(24,7);
printf("�����������������������������������������������������������������������Ŀ") ;
gotoxy(24,8);
printf("�                Nom                �                                   �");
gotoxy(24,9);
printf("�����������������������������������������������������������������������Ĵ") ;
gotoxy(24,10);
printf("�              Prenom               �                                   �");
gotoxy(24,11);
printf("�����������������������������������������������������������������������Ĵ") ;
gotoxy(24,12);
printf("�   Date de naissance (JJ/MM/AAAA)  �               /  /                �");
gotoxy(24,13);
printf("�����������������������������������������������������������������������Ĵ") ;
gotoxy(24,14);
printf("�               E-Mail              �                                   �");
gotoxy(24,15);
printf("�����������������������������������������������������������������������Ĵ") ;
gotoxy(24,16);
printf("�               Ville               �                                   �");
gotoxy(24,17);
printf("�����������������������������������������������������������������������Ĵ") ;
gotoxy(24,18);
printf("�                Rue                �                                   �");
gotoxy(24,19);
printf("�����������������������������������������������������������������������Ĵ") ;
gotoxy(24,20);
printf("�            Code postale           �                                   �");
gotoxy(24,21);
printf("�����������������������������������������������������������������������Ĵ") ;
gotoxy(24,22);
printf("�              Position             �                                   �");
gotoxy(24,23);
printf("�������������������������������������������������������������������������") ;

gotoxy(61,8) ;
printf("%s",q->info.nom);
gotoxy(61,10) ;
printf("%s",q->info.prenom);
gotoxy(74,12) ;
printf("%s",q->info.jc);
gotoxy(77,12) ;
printf("%s",q->info.mc);
gotoxy(80,12) ;
printf("%s",q->info.ac);
gotoxy(61,14) ;
printf("%s",q->info.email);
gotoxy(61,16) ;
printf("%s",q->info.ville);
gotoxy(61,18) ;
printf("%s",q->info.rue);
gotoxy(61,20) ;
printf("%s",q->info.pos);
gotoxy(61,22) ;
printf("%s",q->info.ps);
}
printf("\n\n");
}
/**************************************************/

struct element * reference_par_nom(struct element *q,char *ch)
{
    while(q)
    {

        if (strcmp(ch,q->info.nom)==0)
            return q ;
    q = q->suivant ;
    }
    return NULL ;

}
/**************************************************/

struct element * reference_par_ville2(struct element *q,char *ch)
{
    while(q)
    {

        if (strcmp(ch,q->info.ville)==0)
            return q ;
    q = q->suivant ;
    }
    return NULL ;

}
/**************************************************/

struct element * reference_par_ind2(struct element *q,char *ch)
{
    while(q)
    {

        if (strcmp(ch,ind(q->info.num))==0)
            return q ;
    q = q->suivant ;
    }
    return NULL ;

}
/**************************************************/
void recherche_par_nom()
{

char nom[50] ;
int x=1,y=9 ;

gotoxy(41,1);
printf("������������������������������������ͻ") ;
gotoxy(41,2) ;
printf("�           Recherche par nom        �");
gotoxy(41,3);
printf("������������������������������������ͼ") ;
gotoxy(24,4);
printf("�����������������������������������������������������������������������Ŀ") ;
gotoxy(24,5);
printf("�                 Nom               �                                   �");
gotoxy(24,6);
printf("�������������������������������������������������������������������������") ;
do
{
   gotoxy(61,5);
   gets(nom);
   if (!verif_nom(nom))
   {    gotoxy(61,5);
       printf("                                  ");
  MessageBox(0,"nom invalide","Erreur",0);
  }
}while(!verif_nom(nom)) ;
struct element *e ;
e= reference_par_nom(l.premier,nom) ;
if(!e)
     MessageBox(0,"Nom introuvable","Erreur",0);

else
{
gotoxy(1,7);
printf("����������������������������������������������������������������������������������������������������������������������Ŀ") ;
gotoxy(1,8) ;
printf("�pos�  Numero�     Nom    �    Prenom   � d.d.nais �           Adresse e-mail        �    ville    �       Rue    �Cd p�");
gotoxy(1,9);
printf("����������������������������������������������������������������������������������������������������������������������Ĵ");

y=9 ;
while(e)
{
y++;
gotoxy(x,y) ;
printf("�   �        �            �             �          �                                 �             �              �    �");
y++;
gotoxy(x,y);
printf("����������������������������������������������������������������������������������������������������������������������Ĵ") ;

gotoxy(x+1,y-1);
printf("%s",e->info.ps);
gotoxy(x+5,y-1);
printf("%s",e->info.num);
gotoxy(x+13,y-1);
printf("�%s",e->info.nom);
gotoxy(x+27,y-1);
printf("%s",e->info.prenom);
gotoxy(x+41,y-1);
printf("%s/%s/%s",e->info.jc,e->info.mc,e->info.ac);
gotoxy(x+52,y-1);
printf("%s",e->info.email);
gotoxy(x+86,y-1);
printf("%s",e->info.ville);
gotoxy(x+100,y-1);
printf("%s",e->info.rue);
gotoxy(x+115,y-1);
printf("%s",e->info.pos) ;
e=reference_par_nom(e->suivant,nom) ;
}
gotoxy(x,y);
printf("������������������������������������������������������������������������������������������������������������������������") ;
}
printf("\n\n") ;


}




void recherche_par_ind()
{

char ind[50] ;
int x=1,y;
gotoxy(41,1);
printf("������������������������������������ͻ") ;
gotoxy(41,2) ;
printf("�       Recherche par indicatif      �");
gotoxy(41,3);
printf("������������������������������������ͼ") ;
gotoxy(24,4);
printf("�����������������������������������������������������������������������Ŀ") ;
gotoxy(24,5);
printf("�             Indicatif             �                                   �");
gotoxy(24,6);
printf("�������������������������������������������������������������������������") ;
do
{
   gotoxy(61,5);
   gets(ind);
   if (!verifind(ind))
   {    gotoxy(61,5);
       printf("                                  ");
  MessageBox(0,"indicatif invalide","Erreur",0);
  }
}while(!verifind(ind)) ;

struct element *e ;
e = reference_par_ind2(l.premier,ind) ;
if(!e)
     MessageBox(0,"indicatif introuvable","Erreur",0);
else
{
gotoxy(1,7);
printf("����������������������������������������������������������������������������������������������������������������������Ŀ") ;
gotoxy(1,8) ;
printf("�pos�  Numero�     Nom    �    Prenom   � d.d.nais �           Adresse e-mail        �    ville    �       Rue    �Cd p�");
gotoxy(1,9);
printf("����������������������������������������������������������������������������������������������������������������������Ĵ");

y=9 ;
while(e)
{
y++;
gotoxy(x,y) ;
printf("�   �        �            �             �          �                                 �             �              �    �");
y++;
gotoxy(x,y);
printf("����������������������������������������������������������������������������������������������������������������������Ĵ") ;

gotoxy(x+1,y-1);
printf("%s",e->info.ps);
gotoxy(x+5,y-1);
printf("%s",e->info.num);
gotoxy(x+13,y-1);
printf("�%s",e->info.nom);
gotoxy(x+27,y-1);
printf("%s",e->info.prenom);
gotoxy(x+41,y-1);
printf("%s/%s/%s",e->info.jc,e->info.mc,e->info.ac);
gotoxy(x+52,y-1);
printf("%s",e->info.email);
gotoxy(x+86,y-1);
printf("%s",e->info.ville);
gotoxy(x+100,y-1);
printf("%s",e->info.rue);
gotoxy(x+115,y-1);
printf("%s",e->info.pos) ;
e=reference_par_ind2(e->suivant,ind) ;
}
gotoxy(x,y);
printf("������������������������������������������������������������������������������������������������������������������������") ;
}
printf("\n\n") ;


}

void recherche_par_ville()
{

char ville[50] ;
int x=1,y;
gotoxy(41,1);
printf("������������������������������������ͻ") ;
gotoxy(41,2) ;
printf("�         Recherche par ville        �");
gotoxy(41,3);
printf("������������������������������������ͼ") ;
gotoxy(24,4);
printf("�����������������������������������������������������������������������Ŀ") ;
gotoxy(24,5);
printf("�                ville              �                                   �");
gotoxy(24,6);
printf("�������������������������������������������������������������������������") ;
do
{
   gotoxy(61,5);
   gets(ville);
   if (!verif_villerue(ville))
   {    gotoxy(61,5);
       printf("                                  ");
  MessageBox(0,"ville invalide","Erreur",0);
  }
}while(!verif_villerue(ville)) ;
struct element *e ;
e = reference_par_ville2(l.premier,ville) ;
if(!e)
     MessageBox(0,"ville introuvable","Erreur",0);
else
{
gotoxy(1,7);
printf("����������������������������������������������������������������������������������������������������������������������Ŀ") ;
gotoxy(1,8) ;
printf("�pos�  Numero�     Nom    �    Prenom   � d.d.nais �           Adresse e-mail        �    ville    �       Rue    �Cd p�");
gotoxy(1,9);
printf("����������������������������������������������������������������������������������������������������������������������Ĵ");

y=9 ;
while(e)
{
y++;
gotoxy(x,y) ;
printf("�   �        �            �             �          �                                 �             �              �    �");
y++;
gotoxy(x,y);
printf("����������������������������������������������������������������������������������������������������������������������Ĵ") ;

gotoxy(x+1,y-1);
printf("%s",e->info.ps);
gotoxy(x+5,y-1);
printf("%s",e->info.num);
gotoxy(x+13,y-1);
printf("�%s",e->info.nom);
gotoxy(x+27,y-1);
printf("%s",e->info.prenom);
gotoxy(x+41,y-1);
printf("%s/%s/%s",e->info.jc,e->info.mc,e->info.ac);
gotoxy(x+52,y-1);
printf("%s",e->info.email);
gotoxy(x+86,y-1);
printf("%s",e->info.ville);
gotoxy(x+100,y-1);
printf("%s",e->info.rue);
gotoxy(x+115,y-1);
printf("%s",e->info.pos) ;
e=reference_par_ville2(e->suivant,ville) ;
}
gotoxy(x,y);
printf("������������������������������������������������������������������������������������������������������������������������") ;
}
printf("\n\n") ;


}

/**************************************************/



struct element * referencee(int n)
{
    struct element *q ;
    q = l.premier ;
    int a ;
    while(q)
    {
        a = atoi(q->info.ps);
        if (a ==n)
            return q ;
    q = q->suivant ;
    }
    return NULL ;

}
/**************************************************/

void decrementer_apartir_pos(struct element *e)
{

while(e)
{
    strcpy(e->info.ps,moins1(e->info.ps));
    e=e->suivant ;
}

}
/**************************************************/


void supprimer_premier_element()
{
    struct element *q ;

    if(liste_vide())
        MessageBox(0,"liste vide","Erreur",0);
    else
        {
            if(l.dernier)
            {
                q = referencee(1) ;
                decrementer_apartir_pos(q->suivant) ;
            }
            supprimer_premier();
            MessageBox(0,"suppression r�ussie","",0);

        }
}
/**************************************************/

void supprimer_en_queue()
{
    struct element *q ;
    if(liste_vide())
        MessageBox(0,"liste vide","Erreur",0);
    else
         {
             supprimer_dernier();
            MessageBox(0,"suppression r�ussie","",0);

        }
}
/**************************************************/

struct element * reference_par_num(char *ch)
{
    struct element *q ;
    q = l.premier ;
    while(q)
    {

        if (strcmp(ch,q->info.num)==0)
            return q ;
    q = q->suivant ;
    }
    return NULL ;

}

/**************************************************/

void enregistrement()
{
    FILE *F=fopen("PROJECT.txt","w");
    struct element *aux ;
    aux=l.premier;
    while(aux)
    {
        fprintf(F,"%s %s %s %s %s %s %s %s %s %s %s \n",aux->info.ps,aux->info.num,aux->info.nom,aux->info.prenom,aux->info.jc,aux->info.mc,aux->info.ac,aux->info.email,aux->info.ville,aux->info.rue,aux->info.pos);
        aux=aux->suivant;
    }
    MessageBox(0,"Enregistrement r�ussie","",0);
    fclose(F);
}
/**************************************************/

void chargement()
{
    contact c;
    FILE *F=fopen("PROJECT.txt","r");
    while(fscanf(F,"%s %s %s %s %s %s %s %s %s %s %s \n",c.ps,c.num,c.nom,c.prenom,c.jc,c.mc,c.ac,c.email,c.ville,c.rue,c.pos)!=EOF)
    {
        ajouter_apres_dernier(c);
    }
                MessageBox(0,"Chargement r�ussie","",0);

    fclose(F);

}


void tri()
{
    contact aux ;
    char ch[9] ;
    int n ,i ;
    n = maxposition() ;
    struct element *e,*max,*cmp ;
    if(!n)
    {
               MessageBox(0,"liste vide","Erreur",0);
    }
    else
    {
    cmp = l.premier ;
    for(i=1;i<n;i++)
    {
       max = cmp ;
       e = cmp ;
        while(e)
          {
              if(strcmp(e->info.num,max->info.num)==1)
                    max = e ;
               e = e->suivant ;
          }
           itoa(i,ch,10) ;
           strcpy(max->info.ps,ch) ;
           aux = max->info ;
           supprimer1(max);
           ajouter_avant_premier(aux) ;
    }
    itoa(n,ch,10) ;
    strcpy(l.dernier->info.ps,ch) ;
    MessageBox(0,"La repertoire a �t� triee avec succ�s","",0);
    }
}


