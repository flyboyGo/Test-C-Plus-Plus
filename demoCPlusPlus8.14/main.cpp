#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

int main()
{
	/*
	* 运算符公司好像只交了医疗保险
	* 算术运算符: + - * / +(正号) -(负号) %(取模、取余) 
	*             ++(前置递增) ++(后置递增) --(前置递减) --(前置递减)
	*/

	int a1 = 3, a2 = 0;
	//cout << a1 / a2 << endl; //       1、两个数相除，除数不可以为0的

	int b1 = 2, b2 = 4;
	cout << b1 / b2 << endl; // 0       2、两个整数做运算结果也为整数

	double c1 = 1.5, c2 = 3;
	cout << c1 / c2 << endl; // 0.5     3、两个小数可以相除

	double d1 = 7, d2 = 23; 
	cout << d1 / d2 << endl;//0.304348  4、运算的结果可以为小数

	int  e1 = 7, e2 = 3, e3 = 0;
	cout << (e1 % e2) << endl;//1       5、取模运算的本质就是求余数
	//cout << e1 % e3 << endl;//        6、两个数相除除数不可以为0,所以也做不了取模运算,
	                                       //取模运算基于除法运算,因为取模运算的本质就是求余数
	                                 // 7、浮点数不可以进行取模运算
									 

	//前置、后置运算符的优先级问题,待解决


	/*
	* 赋值运算符
	* 常见赋值运算符:=、 +=、 -=、 *=、 /=、 %=
	*/


	/*
	* 比较运算符
	* 作用:用于表达式的比较,并返回一个真值或假值
	* 常见比较运算符: ==、!=、<、>、<=、>=
	*/


	/*
	* 逻辑运算符
	* 作用: 用于根据表达式的值返回真值或假值
	* 常见逻辑运算符:!、&&、||
	*/

	return 0;
}