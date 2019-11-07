// MoreMemoryStuff.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdio>
#include <array>
#include <memory>
#include<string>

//void addOne(int* arr, size_t size)
//{
//	for (size_t i = 0; i < size; i++)
//	{
//		arr[i]++;
//	}
//}


class Animals
{
public:
	int* age;
	std::string name;
	std::string species;
	bool gender;
	//male is true, female is false

	Animals(int Age, std::string Name, std::string Species, bool Gender)
		: name(Name), species(Species), gender(Gender)
	{
		age = new int(Age);
	}

	~Animals()
	{
		delete age;
	}
};

struct Point
{

public:
	int* x;
	int* y;

	Point(int tempx, int tempy)
	{
		printf("entering constructor\n");
		x = new int(tempx);
		y = new int(tempy);

		printf("exiting constructor\n");
	}

	~Point()
	{
		printf("entering destructor\n");
		delete x;
		delete y;
		printf("exiting destructor\n");


	}
	//Point(const Point& other) = delete;	// they cannot assign value from another Point object

	//Point(const Point& other) : x(other.x), y(other.y)
	//{
	//	printf("copy constructor\n");
	//}

	void PrintPoint()
	{
		printf("(%i, %i)\n", *x, *y);
	}


};

int main()
{
	std::unique_ptr<Animals> animals = std::make_unique<Animals>(17, "Harambe", "Gorilla", true);



	/*Point* p = new Point(5, 4);

	p->PrintPoint();

	delete p;*/

	std::unique_ptr<Point> p = std::make_unique<Point>(5, 4);

	p->PrintPoint();


	;
	//t.NumCopies();


	/*int x = 5;
	float z = 65.324f;
	int y = { x/ static_cast<int>(z) };

	int a = 0;
	int b = { 0 };

	int array[] = { 5,3,46,3,2 };


	int zz = static_cast<int>(z);

	auto i = 6.2;*/

	//int array[] = { 5,3,46,3,2 };

	/*for (auto& i : array)
	{
		i *= 10;
	}*/

	/*addOne(array, std::size(array));


	for (auto i : array)
	{
		printf("%i\n", i);
	}*/



	return 0;
}

