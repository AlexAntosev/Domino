#pragma once
class Element
{
	int value;
	

public:
	enum Type
	{
		Domino,
		Empty,
		Number,
		Disable
	};

	Type type;

	Element()
	{
		value = 0;
		type = Type::Empty;
	}


	void SetValue(int value)
	{
		this->value = value;
	}
	int GetValue()
	{
		return this->value;
	}

	void SetType(Type type)
	{
		this->type = type;
	}
	bool GetType()
	{
		return this->type;
	}

	
};

