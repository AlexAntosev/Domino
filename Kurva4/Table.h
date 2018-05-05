#pragma once
#include "Element.h"
#include "Domino.h"

class Table
{
	const int SIZE = 11;
	Element **matrix;
	Element *elements;
	Domino *dominos;
	int ELEMENTS_COUNT = SIZE*SIZE;
	int DOMINOS_COUNT = 15;

public:
	int GetSize()
	{
		return this->SIZE;
	}

	Element** GetMatrix()
	{
		return this->matrix;
	}

	Table()
	{
		matrix = new Element*[SIZE];
		for (int i = 0; i < SIZE; i++)
		{
			matrix[i] = new Element[SIZE];
		}
		Fill();
		dominos = new Domino[DOMINOS_COUNT];
		MakeDominos();
		//FindAreaForElements();
	}

	~Table()
	{
		for (int i = 0; i < SIZE; i++)
		{
			delete[] matrix[i];
		}
		delete[] matrix;
		delete[] elements;
	}

	void Fill()
	{
		for (int i = 0; i < SIZE; i++)
		{
			for (int j = 0; j < SIZE; j++)
			{
				if (i == 0 || i == SIZE - 1 || j == 0 || j == SIZE - 1) matrix[i][j].SetValue(-1);
				else matrix[i][j].SetValue(0);
			}
		}
		/*matrix[1][2].SetValue(14);
		matrix[1][5].SetValue(14);
		matrix[1][7].SetValue(11);
		matrix[2][3].SetValue (10);
		matrix[2][4].SetValue (10);
		matrix[2][7].SetValue (14);
		matrix[2][8].SetValue (8);
		matrix[2][9].SetValue(8);
		matrix[3][1].SetValue(6);
		matrix[3][2].SetValue(13);
		matrix[3][4].SetValue(12);
		matrix[3][6].SetValue(12);
		matrix[4][2].SetValue (14);
		matrix[4][7].SetValue (5);
		matrix[4][8].SetValue (10);
		matrix[4][9].SetValue (10);
		matrix[5][3].SetValue (6);
		matrix[5][5].SetValue (17);
		matrix[5][6].SetValue (17);
		matrix[6][1].SetValue (12);
		matrix[6][3].SetValue(4);
		matrix[6][4].SetValue (6);
		matrix[6][8].SetValue (10);
		matrix[6][9].SetValue (10);
		matrix[7][3].SetValue(6);
		matrix[7][5].SetValue (13);
		matrix[7][6].SetValue(15);
		matrix[8][2].SetValue(11);
		matrix[9][3].SetValue(11);
		matrix[9][5].SetValue( 8);
		matrix[9][6].SetValue(6);
		matrix[9][8].SetValue(9);
		matrix[9][9].SetValue(3);*/

		matrix[1][3].SetValue(11);
		matrix[1][7].SetValue(9);
		matrix[1][8].SetValue(10);
		matrix[1][9].SetValue(10);
		matrix[2][1].SetValue(9);
		matrix[2][3].SetValue(13);
		matrix[3][1].SetValue(8);
		matrix[3][3].SetValue(12);
		matrix[3][4].SetValue(7);
		matrix[3][5].SetValue(8);
		matrix[3][6].SetValue(9);
		matrix[3][8].SetValue(17);
		matrix[4][1].SetValue(8);
		matrix[4][3].SetValue(9);
		matrix[4][6].SetValue(12);
		matrix[4][8].SetValue(14);
		matrix[5][1].SetValue(17);
		matrix[5][3].SetValue(16);
		matrix[5][4].SetValue(9);
		matrix[5][6].SetValue(13);
		matrix[6][6].SetValue(5);
		matrix[6][7].SetValue(5);
		matrix[6][8].SetValue(14);
		matrix[6][9].SetValue(10);
		matrix[7][2].SetValue(20);
		matrix[7][4].SetValue(11);
		matrix[7][6].SetValue(7);
		matrix[7][7].SetValue(7);
		matrix[8][5].SetValue(11);
		matrix[8][9].SetValue(14);
		matrix[9][2].SetValue(10);
		matrix[9][3].SetValue(6);
		matrix[9][4].SetValue(6);
		matrix[9][5].SetValue(11);
		matrix[9][7].SetValue(11);
	}
	
	void MakeDominos()
	{
		int count = 0;
		for (int i = 1; i <= 5; i++)
		{
			for (int j = i + 1; j <= 6; j++)
			{
				Domino domino(i, j);
				dominos[count] = domino;
				count++;
			}
		}
	}

	void DisableCellsAroundDoubleNumbers()
	{
		for (int i = 1; i < SIZE - 1; i++)
		{
			for (int j = 1; j < SIZE - 2; j++)
			{
				if (matrix[i][j].GetValue() == matrix[i][j + 1].GetValue() && matrix[i][j].GetValue() > 0)
				{
					if (matrix[i - 1][j - 1].GetValue() <= 0) matrix[i - 1][j - 1].SetValue (-1);
					if (matrix[i][j - 1].GetValue() <= 0) matrix[i][j - 1].SetValue(-1);
					if (matrix[i + 1][j - 1].GetValue() <= 0) matrix[i + 1][j - 1].SetValue ( -1);
					if (matrix[i - 1][j + 2].GetValue() <= 0) matrix[i - 1][j + 2].SetValue (-1);
					if (matrix[i][j + 2].GetValue() <= 0) matrix[i][j + 2].SetValue (-1);
					if (matrix[i + 1][j + 2].GetValue() <= 0) matrix[i + 1][j + 2].SetValue(-1);
				}
			}
		}
		for (int i = 1; i < SIZE - 2; i++)
		{
			for (int j = 1; j < SIZE - 1; j++)
			{
				if (matrix[i][j].GetValue() == matrix[i + 1][j].GetValue() && matrix[i][j].GetValue() > 0)
				{
					if (matrix[i - 1][j - 1].GetValue() <= 0) matrix[i - 1][j - 1].SetValue(-1);
					if (matrix[i + 2][j - 1].GetValue() <= 0) matrix[i + 2][j - 1].SetValue (-1);
					if (matrix[i - 1][j].GetValue() <= 0) matrix[i - 1][j].SetValue (-1);
					if (matrix[i + 2][j].GetValue() <= 0) matrix[i + 2][j].SetValue (-1);
					if (matrix[i - 1][j + 1].GetValue() <= 0) matrix[i - 1][j + 1].SetValue(-1);
					if (matrix[i + 2][j + 1].GetValue() <= 0) matrix[i + 2][j + 1].SetValue(-1);
				}
			}
		}
	}

	void DisableSingeCells()
	{
		for (int i = 1; i < SIZE - 1; i++)
		{
			for (int j = 1; j < SIZE - 1; j++)
			{
				if (matrix[i][j].GetValue() == 0)
				{
					if (matrix[i][j + 1].GetValue() != 0 && matrix[i + 1][j].GetValue() != 0 && matrix[i][j - 1].GetValue() != 0 && matrix[i - 1][j].GetValue() != 0) matrix[i][j].SetValue(-1);
				}
			}
		}

	}
	
	bool ElementIsDomino()
	{

	}

	/*void FindAreaForElements()
	{
		for (int i = 0; i < SIZE; i++)
		{
			for (int j = 0; j < SIZE; j++)
			{
				if (i < 8)
				{
					if (matrix[i][j] == 0 && matrix[i + 1][j] == 0)
					{
						matrix[i][j] = 999;
						matrix[i + 1][j] = 999;
						DisableSquareAroundVerticalElement(i, j);
					}
				}
				if (j < 8)
				{
					if (matrix[i][j] == 0 && matrix[i][j + 1] == 0)
					{
						matrix[i][j] = 999;
						matrix[i][j + 1] = 999;
						DisableSquareAroundHorizontalElement(i, j);
					}
				}
			}
		}
	}

	void DisableSquareAroundHorizontalElement(int i, int j)
	{
		if (i > 0 && j > 0)
		{
			if (matrix[i - 1][j - 1] == 0) matrix[i - 1][j - 1] = -1;
		}
		if (i > 0)
		{
			if (matrix[i - 1][j] == 0) matrix[i - 1][j] = -1;
		}
		if (i > 0 && j < 8)
		{
			if (matrix[i - 1][j + 1] == 0) matrix[i - 1][j + 1] = -1;
		}
		if (i > 0 && j < 7)
		{
			if (matrix[i - 1][j + 2] == 0) matrix[i - 1][j + 2] = -1;
		}
		if (j > 0)
		{
			if (matrix[i][j - 1] == 0) matrix[i][j - 1] = -1;
		}
		if (j < 7)
		{
			if (matrix[i][j + 2] == 0) matrix[i][j + 2] = -1;
		}
		if (i < 8 && j > 0)
		{
			if (matrix[i + 1][j - 1] == 0) matrix[i + 1][j - 1] = -1;
		}
		if (i < 8)
		{
			if (matrix[i + 1][j] == 0) matrix[i + 1][j] = -1;
		}
		if (i < 8 && j < 8)
		{
			if (matrix[i + 1][j + 1] == 0) matrix[i + 1][j + 1] = -1;
		}
		if (i < 8 && j < 7)
		{
			if (matrix[i + 1][j + 2] == 0) matrix[i + 1][j + 2] = -1;
		}
	}

	void DisableSquareAroundVerticalElement(int i, int j)
	{
		if (i > 0 && j > 0)
		{
			if (matrix[i - 1][j - 1] == 0) matrix[i - 1][j - 1] = -1;
		}
		if (i > 0)
		{
			if (matrix[i - 1][j] == 0) matrix[i - 1][j] = -1;
		}
		if (i > 0 && j < 8)
		{
			if (matrix[i - 1][j + 1] == 0) matrix[i - 1][j + 1] = -1;
		}
		if (j > 0)
		{
			if (matrix[i][j - 1] == 0) matrix[i][j - 1] = -1;
		}
		if (j < 8)
		{
			if (matrix[i][j + 1] == 0) matrix[i][j + 1] = -1;
		}
		if (i < 8 && j > 0)
		{
			if (matrix[i + 1][j - 1] == 0) matrix[i + 1][j - 1] = -1;
		}
		if (i < 8)
		{
			if (matrix[i + 1][j] == 0) matrix[i + 1][j] = -1;
		}
		if (i < 8 && j < 8)
		{
			if (matrix[i + 1][j + 1] == 0) matrix[i + 1][j + 1] = -1;
		}
		if (i < 7 && j > 0)
		{
			if (matrix[i + 2][j - 1] == 0) matrix[i + 2][j - 1] = -1;
		}
		if (i < 7)
		{
			if (matrix[i + 2][j] == 0) matrix[i + 2][j] = -1;
		}
		if (i < 7 && j < 8)
		{
			if (matrix[i + 2][j + 1] == 0) matrix[i + 2][j + 1] = -1;
		}
	}*/
};