#include "Header_Nu_Pogodi.h"
//------------------------------------------------------------------------------------------------------------------------------------
NuPogodi::NuPogodi()
{
	cout<<"START GAME"<<endl;
}
//____________________________________________________________________________________________________________________________________
NuPogodi::~NuPogodi()
{
	cout<<"Game Stopped"<<endl;
}
//____________________________________________________________________________________________________________________________________
void NuPogodi:: ShiftCursor (short X,short Y)
{
	HANDLE MyhConsole=GetStdHandle(STD_OUTPUT_HANDLE);
	COORD position={X,Y};
	SetConsoleCursorPosition (MyhConsole,position);
}
//____________________________________________________________________________________________________________________________________
void NuPogodi:: Fild ()
{
	Vertical_Line(LEFTUP_X, LEFTUP_Y, LINELONG_V, VERTICALLINE);
	Gorizont_Line(LEFTDOWN_X, LEFTDOWN_Y, LINELONG_G, GORIZONTLINE);
	Gorizont_Line(LEFTUP_X, LEFTUP_Y, LINELONG_G, GORIZONTLINE);
	Vertical_Line(RIGHTUP_X, RIGHTUP_Y, 20, VERTICALLINE);
	//_________________________________________________________________________
	Gorizont_Line(POINT_PO_AZ_X, POINT_PO_AK_Y, LINE_SLONG_G, GORIZONTLINE);
	Gorizont_Line(POINT_PO_KM_X, POINT_PO_ZM_Y, LINE_SLONG_G, GORIZONTLINE);
	Gorizont_Line(POINT_PO_AZ_X, POINT_PO_ZM_Y, LINE_SLONG_G, GORIZONTLINE);
	Gorizont_Line(POINT_PO_KM_X, POINT_PO_AK_Y, LINE_SLONG_G, GORIZONTLINE);
	
}
//____________________________________________________________________________________________________________________________________
void NuPogodi:: Vertical_Line(int LineBegin_X, int LineBegin_Y,int LineLong, char VerLine)
{
	for (int i=0;i<LineLong;i++)
	{
		ShiftCursor (LineBegin_X,LineBegin_Y+i);
		cout<<VerLine;
	}
}
//____________________________________________________________________________________________________________________________________
void NuPogodi:: Gorizont_Line(int LineBegin_X, int LineBegin_Y,int LineLong, char GorLine)
{
	for (int i=0;i<LineLong;i++)
	{
		ShiftCursor (LineBegin_X+i,LineBegin_Y);
		cout<<GorLine;
	}
}
//____________________________________________________________________________________________________________________________________
void NuPogodi:: BasketPaint (int BasClearX, int BasPaintX,int BasClearY, int BasPaintY, char BascetCentr, char BascetLeft, char BascetRight)
{
	 ShiftCursor (BasClearX,BasClearY);
	 cout<<" ";
	 ShiftCursor (BasClearX-1,BasClearY);
	 cout<<" ";
	 ShiftCursor (BasClearX+1,BasClearY);
	 cout<<" ";
	 //-----------------------------------------------
	 ShiftCursor (BasPaintX,BasPaintY);
	 cout<<BascetCentr;
	 ShiftCursor (BasPaintX-1,BasPaintY);
	 cout<<BascetLeft;
	 ShiftCursor (BasPaintX+1,BasPaintY);
	 cout<<BascetRight;
}
//------------------------------------------------------------------------------------------------------------------------------------
void NuPogodi:: SetX (int x)
{
	this->x=x;
}
void NuPogodi:: SetY (int y)
{
	this->y=y;
}
void NuPogodi:: Set_X (int _x)
{
	this->_x=_x;
}
void NuPogodi:: Set_Y (int _y)
{
	this->_y=_y;
}
//_____________________________________________________________________________________________________________________________________
void NuPogodi:: SetRand_X (int Rand_x)
{
	this->Rand_x=Rand_x;
}
void NuPogodi:: SetRand_Y (int Rand_y)
{
	this->Rand_y=Rand_y;
}
//_____________________________________________________________________________________________________________________________________
void NuPogodi:: SetTemp (int Temp)
{
	this->Temp=Temp;
}
void NuPogodi:: SetSpeed (int Speed)
{
	this->Speed=Speed;
}
//_____________________________________________________________________________________________________________________________________
void NuPogodi:: SetRahunok (int Rahunok)
{
	this->Rahunok=Rahunok;
}
//_____________________________________________________________________________________________________________________________________
void NuPogodi:: SetDead (int Dead)
{
	this->Dead=Dead;
}
//_____________________________________________________________________________________________________________________________________
void NuPogodi:: SetAces (int Aces)
{
	this->Aces=Aces;
}
//_____________________________________________________________________________________________________________________________________
void NuPogodi:: SetBest_score (int Best_score)
{
	this->Best_score=Best_score;
}
//_____________________________________________________________________________________________________________________________________
void NuPogodi:: SetKey (int Key)
{
	this->Key=Key;
}
//_____________________________________________________________________________________________________________________________________
void NuPogodi:: SetBCX (int BCX)
{
	this->BCX=BCX;
}
void NuPogodi:: SetBPX (int BPX)
{
	this->BPX=BPX;
}
void NuPogodi:: SetBCY (int BCY)
{
	this->BCY=BCY;
}
void NuPogodi:: SetBPY (int BPY)
{
	this->BPY=BPY;
}
//-------------------------------------------------------------------------------------------------------------------------------------
int NuPogodi:: GetX ()
{
	return x;
}
int NuPogodi:: GetY ()
{
	return y;
}
int NuPogodi:: Get_X ()
{
	return _x;
}
int NuPogodi:: Get_Y ()
{
	return _y;
}
//_____________________________________________________________________________________________________________________________________
int NuPogodi:: GetRand_X ()
{
	return Rand_x;
}
int NuPogodi:: GetRand_Y ()
{
	return Rand_y;
}
//_____________________________________________________________________________________________________________________________________
int NuPogodi:: GetBest_score ()
{
	return Best_score;

}
//_____________________________________________________________________________________________________________________________________
int NuPogodi:: GetRahunok ()
{
	return Rahunok;
}
//_____________________________________________________________________________________________________________________________________
int NuPogodi:: GetSpeed ()
{
	return Speed;
}
//_____________________________________________________________________________________________________________________________________
int NuPogodi:: GetDead ()
{
	return Dead;
}
//_____________________________________________________________________________________________________________________________________
int NuPogodi:: GetAces ()
{
	return Aces;
}
//_____________________________________________________________________________________________________________________________________
int NuPogodi:: GetTemp ()
{
	return Temp;
}
//_____________________________________________________________________________________________________________________________________
int NuPogodi:: GetKey ()
{
	return Key;
}
//_____________________________________________________________________________________________________________________________________
int NuPogodi:: GetBCX ()
{
	return BCX;
}
int NuPogodi:: GetBPX ()
{
	return BPX;
}
int NuPogodi:: GetBCY ()
{
	return BCY;
}
int NuPogodi:: GetBPY ()
{
	return BPY;
}
//-------------------------------------------------------------------------------------------------------------------------------------
void NuPogodi:: BeginningData ()
{
	SetX (3);
	SetY (8);
	Set_X (3);
	Set_Y (8);
	SetRand_X (1);
	SetRand_Y (1);
	SetTemp (0);
	SetSpeed (4);
	SetRahunok (0);
	SetDead (5);
	SetAces (130);
	SetBest_score (0);
	SetBCX (0);
	SetBPX (0);
	SetBCY (0);
	SetBPY (0);
}

//-------------------------------------------------------------------------------------------------------------------------------------
void NuPogodi:: Pozishion (int Key)
{
	switch (Key)
			{
			case 'a'://Left_Down
				{
					SetBPX (16); 
					SetBPY (14);
					BasketPaint(GetBCX(),GetBPX(),GetBCY(),GetBPY(),BASCET_CENTR,BASCET_LEFT,BASCET_RIGHT);
					SetBCX (GetBPX ());
					SetBCY (GetBPY ());
					break;
				}
			case 'q'://Left_Up
				{
					SetBPX (16); 
					SetBPY (10);
					BasketPaint(GetBCX(),GetBPX(),GetBCY(),GetBPY(),BASCET_CENTR,BASCET_LEFT,BASCET_RIGHT);
					SetBCX (GetBPX ());
					SetBCY (GetBPY ());
					break;
				}
			case 's':
				{
					SetBPX (25); 
					SetBPY (14);
					BasketPaint(GetBCX(),GetBPX(),GetBCY(),GetBPY(),BASCET_CENTR,BASCET_LEFT,BASCET_RIGHT);
					SetBCX (GetBPX ());
					SetBCY (GetBPY ());
					break;
				}
			case 'e':
				{
					SetBPX (25); 
					SetBPY (10);
					BasketPaint(GetBCX(),GetBPX(),GetBCY(),GetBPY(),BASCET_CENTR,BASCET_LEFT,BASCET_RIGHT);
					SetBCX (GetBPX ());
					SetBCY (GetBPY ());
					break;
				}
			}
}
//-------------------------------------------------------------------------------------------------------------------------------------
void NuPogodi:: BallHit ()
{
	if (GetTemp()==GetSpeed())
		{
			SetTemp (0);
			if (GetX()==16||GetX()==25)
			{
				if (GetX()==GetBPX()&&GetY()==(GetBPY()-2))
				{
					SetRahunok (GetRahunok()+1);
					if (GetAces()>15)
						SetAces (GetAces()-1);
				}
				else
					SetDead (GetDead()-1);
//-------------------------------------------------------------------------------------------------------------------------------------
				SetRand_X(1+rand()%2);
				SetRand_Y(1+(rand()*rand())%2);
				if (GetRand_X()==1&&GetRand_Y()==1)
				{
					SetY (8);
					SetX (3);
				}
				if (GetRand_X()==1&&GetRand_Y()==2)
				{
					SetY (12);
					SetX (3);
				}
				if (GetRand_X()==2&&GetRand_Y()==1)
				{
					SetY (8);
					SetX (39);
				}
				if (GetRand_X()==2&&GetRand_Y()==2)
				{
					SetY (12);
					SetX (39);
				}
			}
		}
}
//-------------------------------------------------------------------------------------------------------------------------------------
void NuPogodi:: BallMuve ()
{
	if (GetX()!=25||GetX()!=16)
	{
		if (GetRand_X()==2&&GetRand_Y()==1||GetRand_X()==2&&GetRand_Y()==2)
		{
			if (GetX()!=25)
			SetX (GetX()-1);
		}
		if (GetRand_X()==1&&GetRand_Y()==1||GetRand_X()==1&&GetRand_Y()==2)
		{
			if (GetX()!=16)
			SetX (GetX()+1);
		}
	}
}