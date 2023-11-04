#if defined(UNICODE) && !defined(_UNICODE)
    #define _UNICODE
#elif defined(_UNICODE) && !defined(UNICODE)
    #define UNICODE
#endif

#include <tchar.h>
#include <myconio.h>
#include <stdio.h>
#include <windows.h>


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
TCHAR szClassName[ ] = _T("my project");

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
           _T("my project"),       /* Title Text */
           WS_OVERLAPPEDWINDOW, /* default window */
           CW_USEDEFAULT,       /* Windows decides the position */
           CW_USEDEFAULT,       /* where the window ends up on the screen */
           1250,                 /* The programs width */
           768,                 /* and height in pixels */
           HWND_DESKTOP,        /* The window is a child-window to desktop */
           NULL,                /* No menu */
           hThisInstance,       /* Program Instance handler */
           NULL                 /* No Window Creation data */
           );

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
                system("color F9");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                printf("    BONJOUR 1   \n");
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;
        case 2:
                system("color F9");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                printf("    BONJOUR 2   \n");
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;
        case 3:
                system("color F9");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                printf("    BONJOUR 3-1   \n");
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;
        case 4:
                system("color F9");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                printf("    BONJOUR 3-2  \n");
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;
        case 5:
                system("color F9");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                printf("    BONJOUR 3-3   \n");
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;
        case 6:
                system("color F9");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                printf("    BONJOUR 4  \n");
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;
        case 7:
                system("color F9");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                printf("    BONJOUR 1   \n");
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;
        case 8:
                system("color F9");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                printf("    BONJOUR 2   \n");
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;
        case 9:
                system("color F9");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                printf("    BONJOUR 3   \n");
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;
        case 11:
                system("color F9");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                printf("    BONJOUR    \n");
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;
        case 12:
                system("color F9");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                printf("    BONJOUR 3   \n");
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;
        case 13:
                system("color F9");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                printf("    BONJOUR 3   \n");
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;
        case 14:
                system("color F9");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                printf("    BONJOUR 3   \n");
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;
        case 15:
                system("color F9");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                printf("    BONJOUR 3   \n");
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;
        case 16:
                system("color F9");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                printf("    BONJOUR 3   \n");
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;
        case 10:
                if (MessageBox(hwnd,"       Vous voulez quitter ?", "QUITTER", MB_YESNO | MB_ICONQUESTION ) == IDYES)
                {

                    DestroyWindow(hwnd);
                    system("cls");
                }
            break;



        }
    case WM_CREATE :
        addmenus(hwnd);
//         CreateBtt(hwnd) ;
            /*****************ajouter fond **********************/
            hBmp=LoadImage(NULL,"pr.bmp",IMAGE_BITMAP,1370,700,LR_LOADFROMFILE);

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


    //AppendMenu(hmenu,MF_STRING,0,"création du repertoire");
    /*******************************************************/
    AppendMenu(hmenu,MF_POPUP,(UINT_PTR)htp,"TP1");

    AppendMenu(htp,MF_STRING,1,"EXERCICE 1");
    AppendMenu(htp,MF_STRING,2,"EXERCICE 2");
    AppendMenu(htp,MF_POPUP,(UINT_PTR)hex3,"EXERCICE 3");
        AppendMenu(hex3,MF_STRING,3,"PARTIE 1"); /*Sous partie de l'ex3*/
        AppendMenu(hex3,MF_STRING,4,"PARTIE 2");
        AppendMenu(hex3,MF_STRING,5,"PARTIE 3");
    AppendMenu(htp,MF_STRING,6,"EXERCICE 4");
/***************************************************************/

     AppendMenu(hmenu,MF_POPUP,(UINT_PTR)htp1,"TP2");

      AppendMenu(htp1,MF_STRING,7,"EXERCICE 1");
      AppendMenu(htp1,MF_STRING,8,"EXERCICE 2");
      AppendMenu(htp1,MF_STRING,9,"EXERCICE 3");
/***************************************************************/
     AppendMenu(hmenu,MF_POPUP,(UINT_PTR)htp2,"TP3");

      AppendMenu(htp2,MF_STRING,11,"EXERCICE 1");
      AppendMenu(htp2,MF_STRING,12,"EXERCICE 2");
      AppendMenu(htp2,MF_STRING,13,"EXERCICE 3");
       AppendMenu(htp2,MF_STRING,14,"EXERCICE 4");
      AppendMenu(htp2,MF_STRING,15,"EXERCICE 5");
      AppendMenu(htp2,MF_STRING,16,"EXERCICE 6");

/***************************************************************/
    AppendMenu(hmenu,MF_STRING,10,"Quitter");
    SetMenu(hwnd,hmenu);
}

