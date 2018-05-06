#include <iostream>
#include <ctime>
#include <list>
#include <stack>
#include <queue>
#include <deque>


void testList()
{
	std::list<uint32_t> myList;

	clock_t pushRuntime = clock();
	for (uint32_t i = 0; i < 100000; i++)
	{
		myList.push_back(i);
	}
	pushRuntime = clock() - pushRuntime;

	clock_t popbackRuntime = clock();
	for (uint32_t i = 0; i < 100000; i++)
	{
		myList.pop_back();
	}
	popbackRuntime = clock() - popbackRuntime;

	for (uint32_t i = 0; i < 100000; i++)
	{
		myList.push_back(i);
	}

	clock_t popfrontRuntime = clock();
	for (uint32_t i = 0; i < myList.size(); i++)
	{
		myList.pop_front();
	}
	popfrontRuntime = clock() - popfrontRuntime;

	std::cout
		<< "pushRuntime: "
		<< static_cast<double>(pushRuntime) / CLOCKS_PER_SEC << std::endl
		<< "popRuntime (back): "
		<< static_cast<double>(popbackRuntime) / CLOCKS_PER_SEC
		<< std::endl
		<< "popRuntime(front): "
		<< static_cast<double>(popfrontRuntime) / CLOCKS_PER_SEC
		<< std::endl;
}

void testStack()
{
	std::stack<uint32_t> myStack;

	clock_t pushRuntime = clock();
	for (uint32_t i = 0; i < 100000; i++)
	{
		myStack.push(i);
	}
	pushRuntime = clock() - pushRuntime;

	clock_t popRuntime = clock();
	for (uint32_t i = 0; i < 100000; i++)
	{
		myStack.pop();
	}
	popRuntime = clock() - popRuntime;


	std::cout
		<< "pushRuntime: "
		<< static_cast<double>(pushRuntime) / CLOCKS_PER_SEC << std::endl
		<< "popRuntime: "
		<< static_cast<double>(popRuntime) / CLOCKS_PER_SEC
		<< std::endl;
}

void testDeque()
{
	std::queue<uint32_t> myDeque;

	clock_t pushRuntime = clock();
	for (uint32_t i = 0; i < 100000; i++)
	{
		myDeque.push(i);
	}
	pushRuntime = clock() - pushRuntime;

	clock_t popRuntime = clock();
	for (uint32_t i = 0; i < 100000; i++)
	{
		myDeque.pop();
	}
	popRuntime = clock() - popRuntime;


	std::cout
		<< "pushRuntime: "
		<< static_cast<double>(pushRuntime) / CLOCKS_PER_SEC << std::endl
		<< "popRuntime: "
		<< static_cast<double>(popRuntime) / CLOCKS_PER_SEC
		<< std::endl;
}

void testQueue()
{
	std::queue<uint32_t> myQueue;

	clock_t pushRuntime = clock();
	for (uint32_t i = 0; i < 100000; i++)
	{
		myQueue.push(i);
	}
	pushRuntime = clock() - pushRuntime;

	clock_t popRuntime = clock();
	for (uint32_t i = 0; i < 100000; i++)
	{
		myQueue.pop();
	}
	popRuntime = clock() - popRuntime;


	std::cout
		<< "pushRuntime: "
		<< static_cast<double>(pushRuntime) / CLOCKS_PER_SEC << std::endl
		<< "popRuntime: "
		<< static_cast<double>(popRuntime) / CLOCKS_PER_SEC
		<< std::endl;
}
int main()
{
	std::cout
		<< "List: " << std::endl;
	testList();
	std::cout
		<< std::endl << "Stack: " << std::endl;
	testStack();
	std::cout
		<< std::endl << "Deque: " << std::endl;
	testQueue();
	std::cout
		<< std::endl << "Queue: " << std::endl;
	testDeque();

	return 0;
}