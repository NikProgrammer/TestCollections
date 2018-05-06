#pragma once
# include <list>
class ListExample
{
public:
	ListExample();
	ListExample(int);
	static int PushBackRunTime(ListExample listExample, std::list<ListExample> List);
	~ListExample();
private:
	int value;
	void  *Memory;
	size_t Size;
};

