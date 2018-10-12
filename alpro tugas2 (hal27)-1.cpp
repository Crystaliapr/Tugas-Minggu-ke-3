#include <stdio.h>
#include <conio.h>
#include <iostream>

    using namespace std;

main (void)
{
int angka;
	cout<<"Masukkan angka : ";
	cin>>angka;
	cout<<endl;
	( (angka > '30') ||(angka <= '30') ) ? cout<<"Suhu Panas" : cout<<"Suhu Dingin";
		
getch ();
return 0;	
}

