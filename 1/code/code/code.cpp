// code.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <stdlib.h>
#include <iostream>

using namespace std;


void test (){

	cout<< sizeof(bool)<<','<<sizeof(char)<<',';
	cout<< sizeof(short)<<','<<sizeof(int)<<',';
	cout<< sizeof(long)<<','<<sizeof(float)<<',';
	cout<< sizeof(double)<<','<<sizeof(long double)<<',';

	//32λ 1,1,2,4,4,4,8,8

}

//1.102
void test102(){

	char* ch;
	int ID[10];

	int x = 1;
	int& var = x;
	char* p = "Hello";
	int **p2;
	int *p3[10];
	const int x2 = 100;

}

//1.103
void test103(){

	struct student{
	
		int Id;
		char Name[8];
		bool Sex;
		struct Date{
		
			int Year;
			int Month;
			int Day;
		};
	};

}





int _tmain(int argc, _TCHAR* argv[])
{
	//test();

	system("pause");
	return 0;
}



