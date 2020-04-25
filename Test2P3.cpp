// Test2P3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <ratio>
#include <chrono>

void main()
{
	using namespace std::chrono;
	int i;
	high_resolution_clock::time_point t1 = high_resolution_clock::now();
	for (i = 0; i < 100000; i++)statfunc();
	high_resolution_clock::time_point t2 = high_resolution_clock::now();
	duration<double> time_span1 = duration_cast<duration<double>>(t2 - t1);
	std::cout << time_span1.count() << std::endl;
	
	high_resolution_clock::time_point t3 = high_resolution_clock::now();
	for (i = 0; i < 100000; i++)stackfunc();
	high_resolution_clock::time_point t4 = high_resolution_clock::now();
	duration<double> time_span2 = duration_cast<duration<double>>(t4 - t3);
	std::cout << time_span2.count() << std::endl;
	
	high_resolution_clock::time_point t5 = high_resolution_clock::now();
	for (i = 0; i < 100000; i++)heapfunc();
	high_resolution_clock::time_point t6 = high_resolution_clock::now();
	duration<double> time_span3 = duration_cast<duration<double>>(t6 - t5);
	std::cout << time_span3.count() << std::endl;
}
void statfunc(void) 
{
	static int arr1[100000];
}
void stackfunc(void) 
{
	int arr2[100000];
}
void heapfunc()
{
	int* arr3 = (int*)malloc(100000 * sizeof(int));
}
/*
It took the heap the longest by far and we cant do this in java works only in heap.
 */