/*�E�Ɏ����悤�ɁA��̐����l��ǂݍ���ŁA�������ق��̐��ȏ�ő傫���ق��̐��ȉ��̑S�������������ق����珇�ɕ\������v���O�������쐬����*/

#include <iostream>

int main() {
	// ���͗p�̕ϐ�1
	int bigNumber;
	// ��������͂��Ă��炤
	std::cout <<"����A:";
	// �����̓���
	std::cin >> bigNumber;
	// ���͗p�̕ϐ�2
	int smallNumber;
	// ��������͂��Ă��炤
	std::cout << "����B:";
	// �����̓���
	std::cin >> smallNumber;
	// bigNumber��smallNumber�̐��𔻒肵�AbigNumber�̂�����smallNumber�̐���菬���������ꍇ�͐������ւ���
	if (bigNumber < smallNumber) {
		// bigNumber���ꎞ�I�ɕۑ�����
		int tmp = bigNumber;
		// bigNumber��smallNumber������
		bigNumber = smallNumber;
		// smallNumber��tmp�������
		smallNumber = tmp; 
	}
	//���[�v�̊J�n
	do
	{	
		//smallNumber���o�͂���
		std::cout << smallNumber << " ";
		//smallNumber���C���N�������g����
		smallNumber++;
	//bigNumber��smallNumber����v���Ȃ��ꍇ���[�v
	} while (bigNumber != smallNumber);
	//�傫�������o�͂���
	std::cout << bigNumber <<"\n";
}