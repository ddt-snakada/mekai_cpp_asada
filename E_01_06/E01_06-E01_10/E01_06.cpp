/*List1-7�̃v���O������ύX���āA���������������l��x��y�ɑ������v���O�������쐬����B
���̎��s���ʂ���Aint�^�ϐ��������l�݂̂��������Ȃ����Ƃ��m�F���邱�ƁB*/
#include <iostream>

using namespace std;

int main() 
{
	int x;
	int y;

	x = 63.2; //x�͏����������ϐ�
	y = 58.8; //y�͏����������ϐ�

	cout << "x�̒l��" << x << "�ł��B\n"; //63���\�������
	cout << "y�̒l��" << y << "�ł��B\n";  //58���\�������
	cout << "���v��" << x + y << "�ł��B\n";  //121���\�������@������
	cout << "���ς�" << (x + y) / 2 << "�ł��B\n";   //60���\�������
}