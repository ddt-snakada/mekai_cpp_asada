//�E�Ɏ����悤�ɁA�O�p�`�̒�ӂƍ�����ǂݍ���ŁA���̖ʐς�\������v���O�������쐬����B
#include<iostream>
using namespace std;

int main()
{
	double bottom_num; //�O�p�`�̒�ӂ�����doble�^�̕ϐ�
	double height_num; //�O�p�`�̍���������doble�^�̕ϐ�

	cout << "��� : ";
	cin >> bottom_num; //�O�p�`�̒�ӂ���͂���
	cout << "���� :";  
	cin >> height_num; //�O�p�`�̍�������͂���
	cout << "�ʐς�" << bottom_num * height_num / 2 << "�ł��B\n"; //�O�p�`�̖ʐς�\������
}