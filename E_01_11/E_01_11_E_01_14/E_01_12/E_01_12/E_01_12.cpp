//�E�Ɏ����悤�ɁA�O�p�`�̒�ӂƍ�����ǂݍ���ŁA���̖ʐς�\������v���O�������쐬����B
#include<iostream>
using namespace std;

int main()
{
	double bottomNumber; //�O�p�`�̒�ӂ�����doble�^�̕ϐ�
	double heightNumber; //�O�p�`�̍���������doble�^�̕ϐ�

	cout << "��� : ";
	cin >> bottomNumber; //�O�p�`�̒�ӂ���͂���
	cout << "���� :";  
	cin >> heightNumber; //�O�p�`�̍�������͂���

	//��ӂƍ�����������2�Ŋ���A�O�p�`�̖ʐς�\������
	cout << "�ʐς�" << bottomNumber * heightNumber / 2 << "�ł��B\n"; 
}