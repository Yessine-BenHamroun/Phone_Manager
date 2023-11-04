#if defined(UNICODE) && !defined(_UNICODE)
    #define _UNICODE
#elif defined(_UNICODE) && !defined(UNICODE)
    #define UNICODE
#endif

#include <tchar.h>
#include <myconio.h>
#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include "projet.h"



/*  Declare Windows procedure  */
LRESULT CALLBACK WindowProcedure (HWND, UINT, WPARAM, LPARAM);
void addmenus(HWND);
void CreateBtt(HWND hwnd) ;

HWND hname ,hage,hout,hogo,Add,Finnish;
 HDC hdc;
HMENU hmenu ;

HBITMAP hlogoImage , hgenerateImage;
int intro=1 ;
char ch[30] ;
long p ;
/*  Make the class name into a global variable  */
TCHAR szClassName[ ] = _T("CONTACT");

int WINAPI WinMain (HINSTANCE hThisInstance,
                     HINSTANCE hPrevInstance,
                     LPSTR lpszArgument,
                     int nCmdShow)
{
    HWND hwnd;               /* This is the handle for our window */
    MSG messages;            /* Here messages to the application are saved */
    WNDCLASSEX wincl;        /* Data structure for the windowclass */

    /* The Window structure */
    wincl.hInstance = hThisInstance;
    wincl.lpszClassName = szClassName;
    wincl.lpfnWndProc = WindowProcedure;      /* This function is called by windows */
    wincl.style = CS_DBLCLKS;                 /* Catch double-clicks */
    wincl.cbSize = sizeof (WNDCLASSEX);

    /* Use default icon and mouse-pointer */
    wincl.hIcon = LoadIcon (NULL, IDI_APPLICATION);
    wincl.hIconSm = LoadIcon (NULL, IDI_APPLICATION);
    wincl.hCursor = LoadCursor (NULL, IDC_ARROW);
    wincl.lpszMenuName = NULL;                 /* No menu */
    wincl.cbClsExtra = 0;                      /* No extra bytes after the window class */
    wincl.cbWndExtra = 0;                      /* structure or the window instance */
    /* Use Windows's default colour as the background of the window */
    wincl.hbrBackground = (HBRUSH) COLOR_BACKGROUND+7;


    /* Register the window class, and if it fails quit the program */
    if (!RegisterClassEx (&wincl))
        return 0;

    /* The class is registered, let's create the program*/
    hwnd = CreateWindowEx (
           0,                   /* Extended possibilites for variation */
           szClassName,         /* Classname */
           _T("Repertoire téléphonique crée par Yessine Ben Hamroun"),       /* Title Text */
           WS_OVERLAPPEDWINDOW, /* default window */
           CW_USEDEFAULT,       /* Windows decides the position */
           CW_USEDEFAULT,       /* where the window ends up on the screen */
           1022,                 /* The programs width */
           800,                 /* and height in pixels */
           HWND_DESKTOP,        /* The window is a child-window to desktop */
           NULL,                /* No menu */
           hThisInstance,       /* Program Instance handler */
           NULL                 /* No Window Creation data */
           );
void DisableMaximizeButton(HWND hwnd)
{
 SetWindowLong(hwnd, GWL_STYLE,
               GetWindowLong(hwnd, GWL_STYLE) & ~WS_MAXIMIZEBOX);
}
DisableMaximizeButton(hwnd);


    /* Make the window visible on the screen */
    ShowWindow (hwnd, nCmdShow);

    /* Run the message loop. It will run until GetMessage() returns 0 */
    while (GetMessage (&messages, NULL, 0, 0))
    {
        /* Translate virtual-key messages into character messages */
        TranslateMessage(&messages);
        /* Send message to WindowProcedure */
        DispatchMessage(&messages);
    }

    /* The program return-value is 0 - The value that PostQuitMessage() gave */
    return messages.wParam;
}


/*  This function is called by the Windows function DispatchMessage()  */


LRESULT CALLBACK WindowProcedure (HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam)
{static HBITMAP  hBmp;


   /* if(intro)
    {
        system("start test.exe") ;
        intro=0;
    }*/

    switch (message)                  /* handle the messages */
    {


        case WM_COMMAND:
        switch(wParam)
        {
        case 1:
                system("color B1");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(1,1);
                creer_liste();
                creation();
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;
        case 2:
                system("color B1");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                ajout_en_tete() ;
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;
        case 3:
                system("color B1");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                ajout_en_queue() ;
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;
        case 4:
                system("color B1");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                ajout_position() ;
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;
        case 5:
                supprimer_premier_element();
                break;
        case 6:
                supprimer_en_queue();
                break;
        case 7:
                system("color B1");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                supprimer_pos();
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;
        case 8:
                system("color B1");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                supprimer_telephone_donnes();
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;
        case 9:
                system("color B1");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                supprimer_ville_donnes();
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;
        case 11:
                system("color B1");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                supprimer_indicatif_donnes();
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;
        case 12:
                system("color B1");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                modifier_adresse();
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;
        case 13:
                system("color B1");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                modifier_telephone();
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;
        case 14:
                system("color B1");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                afficher();
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;
        case 15:
                system("color B1");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                recherche_par_num() ;
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;
        case 16:
                system("color B1");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                recherche_par_nom();
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;
        case 17:
                system("color B1");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                recherche_par_ind();
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;
        case 18:
                system("color B1");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                recherche_par_ville();
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;
        case 19:
                enregistrement();
                break;
        case 20:

        {FILE *F=fopen("PROJECT.txt","r");


                if(F==NULL)
                {
                    MessageBox(hwnd,"Le fichier énoncé.pdf est introuvable!",MB_OK,MB_ICONERROR);
                    return 0;
                }
                else
                    chargement() ;}

                break;
        case 21:
                tri() ;
                break;
        case 10:
                if (MessageBox(hwnd,"       Vous voulez quitter ?", "QUITTER", MB_YESNO | MB_ICONQUESTION ) == IDYES)
                {

                    DestroyWindow(hwnd);
                    system("cls");
                }
            break;
        case 22:
            {
                //ouverture de l'enoncé
                FILE *fp = fopen("énoncé.pdf", "r");

                if (fp == NULL)   //affiche un mesage d'erreur si le fichier n'est pas placé dans le dossier du projet
                {
                    MessageBox(hwnd,"Le fichier énoncé.pdf est introuvable!",MB_OK,MB_ICONERROR);
                    return 0;
                }
                else

                    ShellExecute( NULL, "open", "énoncé.pdf", NULL, NULL, SW_SHOWNORMAL );
            }

            break;

        case 23:
            {
                //informations sur l'etudiant
                FILE *fp = fopen("CV.pdf", "r");

                if (fp == NULL)   //affiche un mesage d'erreur si le fichier n'est pas placé dans le dossier du projet
                {
                    MessageBox(hwnd,"Le fichier CV.pdf est introuvable!",MB_OK,MB_ICONERROR);
                    return 0;
                }
                else
                    ShellExecute( NULL, "open", "CV.pdf", NULL, NULL, SW_SHOWNORMAL );
            }
            break;



        }
    case WM_CREATE :
        addmenus(hwnd);
//         CreateBtt(hwnd) ;
            /*****************ajouter fond **********************/
            hBmp=LoadImage(NULL,"Hamroun.bmp",IMAGE_BITMAP,1022,800,LR_LOADFROMFILE);

            break;

        case WM_PAINT :
            {


         PAINTSTRUCT ps;
            hdc = BeginPaint(hwnd, &ps);

            DrawState(hdc,NULL,NULL,(long)hBmp,0,0,0,0,0,DST_BITMAP);

            EndPaint(hwnd, &ps);}
        break;
        case WM_DESTROY:
            PostQuitMessage (0);        /* send a WM_QUIT to the message queue */
            break;
        default:                      /* for messages that we don't deal with */
            return DefWindowProc (hwnd, message, wParam, lParam);
    }

    return 0;
}

void addmenus(HWND hwnd)
{
    hmenu=CreateMenu();
    HMENU htp=CreateMenu();
    HMENU htp1=CreateMenu();
    HMENU hex3=CreateMenu();
    HMENU htp2=CreateMenu();
    HMENU htp3=CreateMenu();
    HMENU htp4=CreateMenu();

HMENU htp1_1=CreateMenu();
HMENU htp1_2=CreateMenu();
HMENU htp1_3=CreateMenu();



    //AppendMenu(hmenu,MF_STRING,0,"création du repertoire");
    /*******************************************************/
    AppendMenu(hmenu,MF_STRING,1,"Création");

/*****************************************************************/
     AppendMenu(hmenu,MF_POPUP,(UINT_PTR)htp1,"Mise à jour");

      AppendMenu(htp1,MF_POPUP,(UINT_PTR)htp1_1,"Ajouter un nouveau téléphone");
           AppendMenu(htp1_1,MF_STRING,2,"Ajout en tête");
      AppendMenu(htp1_1,MF_STRING,3,"Ajout en queue");
      AppendMenu(htp1_1,MF_STRING,4,"Ajout dans une position");

       AppendMenu(htp1,MF_POPUP,(UINT_PTR)htp1_2,"Supprimer un téléphone");
           AppendMenu(htp1_2,MF_STRING,5,"Suppression en tête");
      AppendMenu(htp1_2,MF_STRING,6,"Suppression en queue");
      AppendMenu(htp1_2,MF_STRING,7,"Suppression à partir d'une position");
      AppendMenu(htp1_2,MF_STRING,8,"Suppression d'un téléphone donné");
      AppendMenu(htp1_2,MF_STRING,9,"Suppression des téléphones d'une ville donnée");
      AppendMenu(htp1_2,MF_STRING,11,"Suppression des téléphones d'un indicatif donné");


      AppendMenu(htp1,MF_POPUP,(UINT_PTR)htp1_3,"Modifier les données d'un téléphone");
           AppendMenu(htp1_3,MF_STRING,12,"Adresse");
      AppendMenu(htp1_3,MF_STRING,13,"Téléphone");

/*****************************************************************/
     AppendMenu(hmenu,MF_POPUP,(UINT_PTR)htp2,"Recherche||Affichage||Tri");

      AppendMenu(htp2,MF_STRING,14,"Contenu de la liste des téléphones");
      AppendMenu(htp2,MF_STRING,15,"Recherche par numero de téléphone");
      AppendMenu(htp2,MF_STRING,16,"Recherche par nom");
       AppendMenu(htp2,MF_STRING,17,"Recherche par indicatif téléphonique");
      AppendMenu(htp2,MF_STRING,18,"Recherche par ville");
      AppendMenu(htp2,MF_STRING,21,"Tri");

/*****************************************************************/
     AppendMenu(hmenu,MF_POPUP,(UINT_PTR)htp3,"Stockage");

      AppendMenu(htp3,MF_STRING,19,"Enregistrement");
      AppendMenu(htp3,MF_STRING,20,"Chargement");


/*****************************************************************/
     AppendMenu(hmenu,MF_POPUP,(UINT_PTR)htp4,"A propos");
     AppendMenu(htp4,MF_STRING,22,"Enoncé");
     AppendMenu(htp4,MF_STRING,23,"L'etudiant");

/*****************************************************************/
    AppendMenu(hmenu,MF_STRING,10,"Quitter");
    SetMenu(hwnd,hmenu);
}

