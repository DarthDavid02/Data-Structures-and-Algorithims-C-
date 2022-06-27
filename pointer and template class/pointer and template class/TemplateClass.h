#pragma once
template <class c>
class GenClass
{
public:
	inline GenClass() 
	{
		theValue = NULL;
	}
	inline GenClass(C data)
	{
		theValue = data;
	}

	void setTheValue(C data)
	{
		theValue = data;
	}

	C getTheValue()
	{
		return theValue;
	}

protected:
	C theValue;
};

