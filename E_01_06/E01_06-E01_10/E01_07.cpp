/*3��int�ϐ��^�ɒl�������A�����̍��v�ƕ��ς����߂�v���O�������쐬����*/
#include <iostream>
using namespace std;

int main() {
	int int_num1 = 5; //int�^�̕ϐ�1��
	int int_num2 = 10;//int�^�̕ϐ�2��
	int int_num3 = 6; //int�^�̕ϐ�3��
	int int_num4 = 8; //���ς������ɂ��邽�߂�int�^�̕ϐ�3��

	cout << int_num1 + int_num2 + int_num3 << "�����v�l�ł�\n";     //���v�l��\������
	cout << (int_num1 + int_num2 + int_num3) / 3 << "�����ϒl�ł�\n"; //���ϒl��\������
	cout << (int_num1 + int_num2 + int_num4) / 3 << "�����ϒl�ł�\n"; //���ϒl��\�����邪�����_�ȉ��͐؂�̂Ă���
}