#include <iostream>
using namespace std;


void main()
{
	double sayi1,aritmetikort,harmonikort,sayac=0,toplam=0,toplam2=0;

	double sayi=5;
	for(sayac=1 ; sayac<= sayi;sayac++)
	{
	cout<<"Sayi giriniz :";
	cin>> sayi1;
	toplam=toplam+sayi1;
	toplam2=toplam2+(1/sayi1);
	}
	aritmetikort=toplam/sayi;
	harmonikort=sayi/toplam2;
	cout<<"Girilen sayilarin aritmetik ortalamasi :"<<aritmetikort<<endl;
	cout<<"Girilen sayilarin harmonik ortalamasi :"<<harmonikort<<endl;
	system("pause");




}