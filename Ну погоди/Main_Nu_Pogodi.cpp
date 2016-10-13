#include "Header_Nu_Pogodi.h"
//------------------------------------------------------------------------
void main ()
{
	NuPogodi nuPogodi;
	nuPogodi.BeginningData ();

	//--------------------------------------------------------------------
	string Answer="r";
	while (Answer=="r")
	{
		nuPogodi.ShiftCursor(41,2);
		cout<<"BEST SCORE-----"<<nuPogodi.GetBest_score()<<endl<<endl<<endl;
		//----------------------------------------------------------------
		nuPogodi.Fild ();
		do
		{
			Sleep (nuPogodi.GetAces());
			nuPogodi.SetTemp (nuPogodi.GetTemp()+1);
			if (_kbhit())
			{
				nuPogodi.SetKey (_getch());
				nuPogodi.Pozishion (nuPogodi.GetKey ());
			}
			nuPogodi.BallHit ();
			nuPogodi.BallMuve ();
			//------------------------------------------------------------
			nuPogodi.ShiftCursor (nuPogodi.Get_X(),nuPogodi.Get_Y());
			cout<<" "<<endl;
			nuPogodi.ShiftCursor (nuPogodi.GetX(),nuPogodi.GetY());
			cout<<(char)176<<endl;
			nuPogodi.Set_X(nuPogodi.GetX());
			nuPogodi.Set_Y(nuPogodi.GetY());
			//------------------------------------------------------------
			nuPogodi.ShiftCursor (1,24);
			cout<<"Score="<<nuPogodi.GetRahunok();
			nuPogodi.ShiftCursor (30,24);
			cout<<"Live="<<nuPogodi.GetDead();

		}while (nuPogodi.GetDead());
		//----------------------------------------------------------------
		system ("cls");
		nuPogodi.ShiftCursor(12,12);
		cout<<(char)1<<"\t"<<"GAME OVER"<<"\t"<<(char)1<<endl<<endl;
		cout<<"BEST SCORE-----"<<nuPogodi.GetRahunok()<<endl<<endl<<endl;
		nuPogodi.SetBest_score(nuPogodi.GetRahunok());
		nuPogodi.SetRahunok (0);
		//----------------------------------------------------------------
		cout<<"Click to replay--\"r\""<<endl;//Выводим на экран "y"
		cin>>Answer;//Если ввести "y" то возможен повторный ввод даных
		nuPogodi.SetDead (5);
		nuPogodi.SetAces (130);
		system("cls");
	}
	//--------------------------------------------------------------------
	system ("pause");
}