/* Menghitung Jumlah 6 Suku Pertama */
/* Fitri Ariska */
/* 20051397082 */
/* 2020B */


#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
main()  {
	
	int i,kubik,jumbil,jumkubik;
	float bil1, bil2,bil3,bil4,bil5,bil6,beda,jumlah;
	cout << "Masukkan Bilangan 1 \n";
	cout <<"-------------------------- \n";
	cout << "Masukkan Bilangan 2 \n";
	cout <<"-------------------------- \n";
	cout << "Masukkan Bilangan 3 \n";
	cout <<"-------------------------- \n";
	cout << "Masukkan Bilangan 4 \n";
	cout <<"-------------------------- \n";
	cout << "Masukkan Bilangan 5 \n";
	cout <<"-------------------------- \n";
	cout << "Masukkan Bilangan 6 \n";
	cout <<"-------------------------- \n";
	cout << "Mencari Jumlah \n";
	cout <<"-------------------------- \n";
	jumbil=0;
	jumkubik=0;
	for (i=1;i<=6;i++) {
	      kubik=i*i*i;
	      jumbil=jumbil+1;
	      jumkubik=jumkubik+kubik;
	      cout << i<<" "<<kubik<<" "<<endl;
    }
	cout <<"============================== \n";
	cout <<jumbil<<" "<<jumkubik;
	getch();

}

