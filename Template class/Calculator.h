#pragma once
#include<iostream>

template<typename T1, typename T2>
class Calculator
{
	T1 _num1;
	T2 _num2;
public:
	Calculator();
	void setNum1(T1 num1, T2 num2);

	void getNum1();
	void getNum2();
	void getNum3();
	void getNum4();
};

template<typename T1, typename T2>
Calculator<T1, T2>::Calculator()
{
}

template<typename T1, typename T2>
inline void Calculator<T1, T2>::setNum1(T1 num1, T2 num2)
{
	_num1 = num1;
	_num2 = num2;
}

template<typename T1, typename T2>
inline void Calculator<T1, T2>::getNum1()
{
	std::cout << _num1 + _num2 << '\n';
}

template<typename T1, typename T2>
inline void Calculator<T1, T2>::getNum2()
{
	std::cout << _num1 - _num2 << '\n';
}
template<typename T1, typename T2>
inline void Calculator<T1, T2>::getNum3()
{
	std::cout << _num1 * _num2 << '\n';
}
template<typename T1, typename T2>
inline void Calculator<T1, T2>::getNum4()
{
	if (_num2 != 0)
		std::cout << _num1 / _num2 << '\n';
	else
		std::cout << -1 << '\n';
}
