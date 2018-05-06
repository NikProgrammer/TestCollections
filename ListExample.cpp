#include "ListExample.h"
# include <cstdlib>
# include <ctime>
# include <list>



ListExample::ListExample()
{
	this->Size = 1024 * 1024;
	this->Memory = malloc(Size);
}

ListExample::ListExample(int value)
{
	this->value = value;
}

int ListExample::PushBackRunTime(ListExample listExample, std::list<ListExample> List)
{
	clock_t runtime = clock();
	for (int i = 0; i < 1000000; i++)
	{
		List.push_back(listExample);
	}
	runtime = clock() - runtime;

	return runtime;
}

//int ListExample::PushBackRunTime(ListExample listExample, std::list<ListExample> List)
//{
//	clock_t runtime = clock();
//	for (int i = 0; i < 1000000; i++)
//	{
//		List.push_back(listExample);
//	}
//	runtime = clock() - runtime;
//
//	return runtime;
//}


ListExample::~ListExample() {};
