// code.cpp : 定义控制台应用程序的入口点。
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

	//32位 1,1,2,4,4,4,8,8

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

//1.104
void test104(){
	int x;
	cin>>x;

	if( x >100 || x < 0){
		cout<<"输入分数超出范围"<<endl;////
		return;
	}
	if(x>= 90){
	
		cout<< "A"<<endl;
	}else if( x >= 80){
	
		cout<<"B"<<endl;
	}else if(x >= 70){
	
		cout<<"C"<<endl;
	
	}else if( x>=60){
	
		cout <<"D"<<endl;
	
	}else{
	
		cout<<"E"<<endl;
	}
	return;
}


void test105(){

	float a ,b,c,s;
	cout<<"请-------------------------输入三角形的三条边"<<endl;
	cin>>a>>b>>c;
	
	if(a+b<=c||a+c<=b||b+c<=a||a<=0||b<=0||c<=0){
	
		cout<<"无法构成三角形"<<endl;
		return;
	
	}
	s = (a+b+c)/2;
	cout<<"三角形面积："<<sqrt(s*(s-a)*(s-b)*(s-c))<<endl;




}
void test106(){

char a;
cin>>a;
if('a'>=a <='z' || 'A'>=a<='Z'){
cout<<(int) a << endl;
}


}
void test107(){

	int a ;
	cout << "请输入一个三位数" << endl;
	cin>>a;
	
	if( a <100 || a > 999){
	
		cout<< "输入错误"<<endl;
	
	}

	char* a0[] = {"","one" ,"two","three","four","five","six","seven","eight","nine"};
	char* a00[] = {"ten","eleven" ,"twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
	char* a000[] = {"","" ,"twenty","thirty","fourty","fifty","sixty","seventy","eighty","ninety"};

	cout<< a0[a/100];
	if( a/100 != 0){
	
		if(a%100 == 0){
		
			cout<<"  hundred";
		
		}else{
		
			cout<<"  hundred and";
			//cout<<a%100;
			if(10 <(a%100) && (a%100) < 20){
			
				cout<<"  "<<a00[a%100%10];
			
			}else if( 0 < a%100   && a%100 < 10){

				cout<< "  "<<a0[a%100];
			}else{
			

				cout<<"  "<<a000[a%100/10];
				cout<<"  "<<a0[a%100%10];
			}
		}
	
	
	
	}

	return;
}


int _tmain(int argc, _TCHAR* argv[])
{
	test107();

	system("pause");
	return 0;
}



