#pragma once
class Domino
{
	int firstHalf;
	int secondHalf;
	bool enable = false;

	

public:

	enum Position
	{
		Horizontal,
		Vertical
	};

	Position position;

	int GetFirstHaft()
	{
		return firstHalf;
	}

	int GetSecondHaft()
	{
		return secondHalf;
	}

	Domino(int firstHalf, int secondHalf)
	{
		this->firstHalf = firstHalf;
		this->secondHalf = secondHalf;
	}


	Domino()
	{

	};

	void DisableElementsAroundDomino(Element **matrix, int a, int b, Position position)
	{
		int iMax;
		int jMax;
		if (position == Position::Horizontal)
		{
			iMax = 1;
			jMax = 2;
		}
		else
		{
			iMax = 2;
			jMax = 1;
		}
		for (int i = -1; i <= iMax; i++)
		{
			for (int j = -1; j <= jMax; j++)
			{
				if (position == Position::Horizontal && i == 0 && (j == 0 || j == 1)) continue;
				else if (position == Position::Vertical && (i == 0 || i == 1) && j == 0)  continue;
				else
				{
					Element currentElement = matrix[a + i][b + j];
					if (currentElement.GetValue() == 0) currentElement.SetValue(-1);
				}
			}
		}
	}

	
};