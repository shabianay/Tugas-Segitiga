//Program Bentuk Segitiga Siku-Siku//
//Shabian Arsyl Yonanta//
//20051397032//
//MI 2020B//


#include <iostream>
#include <conio.h>

using namespace std;
int main()
{
system ("color 74");
int a,b,nilai;
char ulang;
menu:
system ("cls");
cout<<"==================================\n";
cout<<"PROGRAM BENTUK SEGITIGA SIKU-SIKU\n";
cout<<"==================================\n";
cout<<"Masukkan Angka : "; cin>>nilai;
cout<<"\nBENTUK SEGITIGA\n\n";
for(a=1;a<=nilai;a++)
{
for(b=1;b<=a;b++)
{
cout<<b<<"";
}
cout<<"\n";
}
for(b=1;b<=nilai;b++)
{
for(a=1;a<=nilai-b;a++)
{
cout<<a<<"";
}
cout<<"\n";;
}
cout<<"==================================\n";
cout<<"Ingin mengulang? [Y/T] ";cin>>ulang;
	if (ulang == 'Y'||ulang == 'y')
    goto menu;
        else goto Keluar;
        Keluar :
        cout<< "\n Terima Kasih.";
getch();
}
