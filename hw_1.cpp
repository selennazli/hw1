





#include<iostream>


using namespace std;
//selen nazli basa
//bu programda kullanici kendi istegine bagli olarak bir sekil ve sectigi sekle gore taban secimi yapacaktir

int funct_1(int y) { //ilk fonksiyonumuzda for döngüsü ile duzgun bir ucgen olusturduk
	int i, j, bosluk;
	bosluk = y - 1;
	int yildiz = 1;
	for (i = 0;i <y/2+1; i++) {

		for (j =0;j < bosluk;j++) {
			cout << " ";
		}
			for (j = 0;j <yildiz;j++)

			{
				cout << "*";

			}

			yildiz = yildiz + 2;
			bosluk--;
		


		cout << endl;

	}
	return 0;
}
int funct_2(int y) { //ikinci fonksiyonumuzda while dongudu ile ters bir ucgen olusturduk
	int i=y-2, j;
	while (i > 0)
	{
		j = 0;
		while (j++ < y - i)
		{
			cout<<" ";
		}

		j = 0;
		while (j++ < (i * 2) - 1)

		{
			cout<<"*";
		}
		cout<<endl;
		i--;

	}
	return 0;
	}
int funct_3(int y) { //ucuncu fonksiyonumuzda ise onceden olusturdugumuz fonksiyonlari birlestirdik

	funct_1(y);
	
	funct_2(y);

	return 0;
}
	
	
	



int main() {
	int x, s;
	cout << "please choose a shape (1:triangle,2:inverted triangle,3:diamond,0:exit)" << endl; //kullanicidan sekil secmesini istedik
	cin >> x;
	if (x == 0) { //0i kullanicinin cikis yapabilmesi icin kullandik fonksiyonsuz if kullanarak direkt olarak bir cikis sagladik
		return 0;
	}
	cout << "please enter a number:" << endl;//seklin tabani icin sayi aldik
	cin >> s;
	
	switch (x) { //secilen sekle gore fonksiyonlarimizi cagirdik
	case 1:

	{
		
		if (s >= 3 && s <= 15) {
			funct_1(s);
		}
		else {
			int counter = 0;
			while (counter < 3) {

				counter++;
				cout << "please try again..." << endl;
				cin >> s;
				if (s >= 3 && s <= 15) {
					funct_1(s);
					counter = 3;
				}

			}
		}
		break;
	}
	case 2:
	{
		

			if (s >= 3 && s <= 15) {
				funct_2(s);
			}
			else {
				int counter_2 = 0;
				while (counter_2 < 3) {

					counter_2++;
					cout << "please try again..." << endl;
					cin >> s;
					if (s >= 3 && s <= 15) {
						funct_2(s);
						counter_2 = 3;
					}

				}
			}
		break;


	}
	case 3:
	{

		if (s >= 3 && s <= 15) {
			funct_3(s);
		}
		else {
			int counter_3 = 0;
			while (counter_3 < 3) {

				counter_3++;
				cout << "please try again..." << endl;
				cin >> s;
				if (s >= 5 && s <= 15) {
					funct_3(s);
					counter_3 = 3;
				}

			}
		}
		break;
	
	
	}

	


	return 0;
	}
}