#pragma once
#include <string>
#include <iostream>
#include "Exception.hpp"

class Train{
	std::string station;//����� ����������
	int number;//����� ������
	std::string time;//����� �����������
public:
	Train(const std::string station = "", const std::string time = "", int number = 0);
	Train(const Train& t);
	~Train();
	/*������� � ������� ��� station*/
	void setStation(const std::string& s);
	const std::string& getStation()const;
	/*������� � ������� ��� time*/
	void setTime(const std::string& t);
	const std::string& getTime()const;
	/*������� � ������� ��� number*/
	void setTime(int n);
	int getNumber()const;
	/*��������� ����� � ������*/
	friend std::istream& operator >>(std::istream& in, Train& t);
	friend std::ostream& operator <<(std::ostream& out, const Train& t);
	Train& operator =(const Train& t);//�������� ������������
};													  