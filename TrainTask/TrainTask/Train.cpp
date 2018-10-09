#include "Train.hpp"

Train::Train(const std::string station, const std::string time, int number):
station(station), time(time),number(number){ std::cout << "\n����������� Train\n";}
Train::Train(const Train& t):station(t.station), time(t.time),number(t.number){ std::cout << "\n����������� ����������� Train\n";}
Train::~Train(){}
	/*������� � ������� ��� station*/
void Train::setStation(const std::string& s){ this->station = s; }
const std::string& Train::getStation()const { return this->station; }
	/*������� � ������� ��� time*/
void Train::setTime(const std::string& t){ this->time = t;}
const std::string& Train::getTime()const { return this->time;}
	/*������� � ������� ��� number*/
void Train::setTime(int n){this->number = n;}
int Train::getNumber()const{ return this->number;}

std::istream& operator >>(std::istream& in, Train& t){
	if(!(in >> t.number >> t.station >> t.time)){//���� ������������ ����, �������� ����������
		throw Exception("������������ ����");
	}
	return in;
}
std::ostream& operator <<(std::ostream& out, const Train& t){
	out << "\n�����: " << t.time
		 << "\n�������: " << t.station
		 << "\n�����: " <<t.number;
    return out;
}

Train& Train::operator =(const Train& t){
	station = t.station;
	number = t.number;
	time = t.time;
	return *this;
}