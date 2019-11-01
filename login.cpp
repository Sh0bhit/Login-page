#include <iostream>
#include<windows.h>
#include<string>
#include<stdio.h>
using namespace std;

void gotoxy(int x,int y)
{
    COORD c;
    c.X=x;
    c.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}
void login();
void menu()
{system("cls");
    int x;
    for(x=0;x<=10;x++)
    {    Sleep(1200);
    gotoxy(47,11);
       printf("Loading--");
        cout<<x*10<<"%";
        system("COLOR f6");
        gotoxy(47+x,12);
        printf("..");
    }
      system("cls");
          gotoxy(48,11);
          system("COLOR f2");
          printf("--Acess Granted--");
          cout<<"\n \n \n \n \n \n \n \n \n \n ";
             system("PAUSE");



    }



void pass()
{  char pas[20];
    system("cls");
    gotoxy(40,12);
    system("COLOR f4");
    printf("Enter Your Password-->");
    cin>>pas;
    if(strcmp(pas,"pass")==0)
      {  menu();
        exit(0);
       }
       else

         system("COLOR f4");
         system("cls");
         gotoxy(42,11);
         printf("Wrong Password Please Login Again");
         cout<<"\n \n \n \n \n \n \n \n \n \n ";
         system("PAUSE");
         system("cls");
         login();



}
void login()
{
    char us[20];
    gotoxy(40,12);
    system("COLOR f2");
    printf("Enter Your Username-->");
    cin>>us;
    if(strcmpi(us,"root")==0)
    {
        system("cls");

        pass();

    }
    else
        system("cls");
      system("COLOR f4");
      gotoxy(45,12);
      system("COLOR f4");
      printf("Wrong Username ");
      gotoxy(45,13);
      Sleep(700);
      login();



    }
int main()
{
    login();
    return 0;
}
