//�E�Ɏ����悤�ɐ����l��ǂݍ���ŁA���̐�Βl�����߂ĕ\������v���O�������쐬����B
#include<iostream>

using namespace std;

int main() 
{
	//�����l����͂��邽�߂̕ϐ�
	int enterdNumber; 
	//�����l���͂𑣂��\��
	cout << "�����l:";
	//�����l����͂���
	cin >> enterdNumber;

	//0�ȏォ�̏���
	if (enterdNumber >= 0){
		//0�ȏ�ł���΁A���̂܂ܕ\������
		cout << "���̐�Βl��" << enterdNumber << "�ł�\n";
	//0��菬���������A�܂蕉�̐�
	}else{
		//0��菬�����ꍇ��-1����͂��ꂽ�����l�ɂ�����
		cout << "���̐�Βl��" << -1 * enterdNumber << "�ł�\n";
	}
}