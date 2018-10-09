#include "Train.hpp"
#include <iostream>
#define cnt 2		//���������� �������
#define SWAP(A, B) { Train t = A; A = B; B = t; } //������ �������

using namespace std;

int main(){
	setlocale(LC_ALL, "");
	Train trains[cnt];
	int a;
	//����
	while(true){
		cout << "\n1. �����\n2. ������� ������\n3. ������� ����������\n";
		if(!(cin >> a)){//���� ������������ ����, �� ���������� ��
		 continue;
		}
		if(a == 1){
			return 0;
		}
		else if(a == 2){
			//��������� ������ � �������
			cout << "����� ������� �����\n";
			for(int i =0; i < cnt; ++i){
				try{
					cin >> trains[i];
				}	  //������������ ����������
				catch(const Exception& e){
					cout << "\n" << e.what() << "\n";
					--i;//���������� i ����� ��� ���������� �����
				}
			}
			/*��������� ��������� �� �������*/
			int j, n = cnt;
			  do {
				int nn = 0;
				for (j = 1; j < n; ++j)
				  if (trains [j-1].getNumber() > trains[j].getNumber()) {
					SWAP( trains[j-1], trains[j] );
					nn = j;
				  }
				n = nn;
			  } while (n);
		}
		else if(a == 3){
			cout << "�����: ";
			if(!(cin >> a)){
				cout << "������������ �����";
				continue;
			}
			int i = 0;
			for(; i < cnt; ++i){
				if(trains[i].getNumber() == a){
					cout << trains[i];
					break;
				}
			}
			if(i == cnt){
				cout << "������ ������ ���!";
			}
		}
	}

}
