/*0,1,2�̂����ꂩ�̒l�̗����𐶐����A0�ł���΁u�O�[�v�A1�ł���΁u�`���L�v�A2�ł���΁u�p�[�v�ƕ\������v���O�������쐬����*/

#include <iostream>
#include <ctime>
#include <cstdlib>

int main() {
	//�����p�̕ϐ���p�ӂ���
	int randomNumber;
	//�����̎��ݒ�
	srand(time(NULL));
	// 2�܂ł̗���
	randomNumber = rand() % 3;
	// rondomNumber�ŕ��򂷂�
	switch (randomNumber)
	{
	// 0�̏ꍇ
	case 0 :
		// �O�[��\������
		std::cout << "�O�[\n";
		//switch������ʂ���
		break;
	// 1�̏ꍇ
	case 1 :
		// �`���L��\������
		std::cout << "�`���L\n";
		//switch������ʂ���
		break;
	// 2�̏ꍇ
	case 2 :
		//�p�[��\������
		std::cout << "�p�[\n";
		//switch������ʂ���
		break;
	// �f�t�H���g�̏ꍇ
	default:
		//�������Ȃ�
		break;
	}

}