#include <iostream>

class cTictactoe
{
	//pola w grze 
	//'x' - krzyzyk
	//'o' - kolko
	char p1 = '1', p2 = '2', p3 = '3', p4 = '4', p5 = '5', p6 = '6', p7 = '7', p8 = '8', p9 = '9';
	char kto = 'O';

public:
	char wpisz(char &ruch_)
	{
		if (ruch_ != 'O' && ruch_ != 'X' && kto == 'O')
		{   
			kto = 'X';
			ruch_ = 'O';
			return ruch_;
		}
		else
		{
			kto = 'O';
			ruch_ = 'X';
			return ruch_;
		}
	}

	void ruch()
	{   
		char ruch_;
		std::cout << "Gdzie postawic -> " << kto << std::endl;
		std::cin >> ruch_;

		if (ruch_ == '1') { p1 = wpisz(p1); }
		if (ruch_ == '2') { p2 = wpisz(p2); }
		if (ruch_ == '3') { p3 = wpisz(p3); }
		if (ruch_ == '4') { p4 = wpisz(p4); }
		if (ruch_ == '5') { p5 = wpisz(p5); }
		if (ruch_ == '6') { p6 = wpisz(p6); }
		if (ruch_ == '7') { p7 = wpisz(p7); }
		if (ruch_ == '8') { p8 = wpisz(p8); }
		if (ruch_ == '9') { p9 = wpisz(p9); }
	}

	bool sprawdz()
	{
		if ((p1 == p2 && p2 == p3 && p1 != ' ') ||
			(p4 == p5 && p5 == p6 && p5 != ' ') ||
			(p7 == p8 && p8 == p9 && p9 != ' ') ||
			(p7 == p4 && p4 == p1 && p1 != ' ') ||
			(p8 == p5 && p5 == p2 && p2 != ' ') ||
			(p9 == p6 && p6 == p3 && p3 != ' ') ||
			(p1 == p5 && p5 == p9 && p1 != ' ') ||
			(p7 == p5 && p5 == p9 && p5 != ' ')
			)
		{
			if (kto == 'x')
			{
				std::cout << "wygrywa kolko\n";
				
				return 1;
			}
			else
			{
				std::cout << "wygrywa krzyzyk\n";
				
				return 1;
			}
		}
		return 0;
	}
	void printPlansza()
	{    		
		std::cout  << p1 << "|" << p2 << "|" << p3 << std::endl;
		std::cout << "------" << std::endl;
		std::cout << p4 << "|" << p5 << "|" << p6 << std::endl;
		std::cout << "------" << std::endl;
		std::cout  << p7 << "|" << p8 << "|" << p9 << std::endl;
	}

};


int main()
{
	cTictactoe gra;
	while (true)
	{
		gra.printPlansza();
		gra.ruch();
		if (gra.sprawdz())
		{
			system("pause");
			break;
		}
		//system("pause");
		system("cls");
	}
	system("cls");
	gra.printPlansza();
	system("pause");

}
