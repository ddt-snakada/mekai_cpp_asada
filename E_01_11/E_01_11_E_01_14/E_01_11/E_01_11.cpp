//�E�Ɏ����悤�ɁA�����l��ǂݍ��݁A���̍��v�ƕ��ς����߂ĕ\������v���O�������쐬����B
#include<iostream>
using namespace std;

int main()
{
	double x;   //��蕶�ɗᎦ�����邽��x���g�p
	double y;   //��蕶�ɗᎦ�����邽��y���g�p

	cout << "x�̒l:";                       //��蕶�̗Ꭶ�ɂ���x
	cin >> x;                               //x�ɃL�[�{�[�h�Ŏ�������͂���
	cout << "y�̒l:";                       //��蕶�̗Ꭶ�ɂ���y
	cin >> y;                               //y�ɃL�[�{�[�h�Ŏ�������͂���
	
	//�����̍��v�l���o�����߂�x��y�𑫂�
	cout << "���v��" << x + y << "�ł��B\n";  
	
	//�����̕��ϒl���o�����߂�x��y�𑫂��A2�Ŋ���
	cout << "���ς�" << (x + y) / 2 << "�ł��B\n";  
}