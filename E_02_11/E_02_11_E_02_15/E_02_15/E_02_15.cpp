/*���݂����v���O�������쐬����B�����𐶐����āA�u��g�v�u���g�v�u���g�v�u�g�v�u���g�v�u���v�u�勥�v�̂����ꂩ��\�����邱��*/

#include <iostream>
#include <ctime>
#include <cstdlib>

int main() {
	//�����p�̕ϐ���p�ӂ���
	int randomNumber;
	//�����̎��ݒ�
	srand(time(NULL));
	// 2�܂ł̗���
	randomNumber = rand() % 7;
	// rondomNumber�ŕ��򂷂�
	switch (randomNumber)
	{
	// 0�̏ꍇ
	case 0 :
		// ��g��\������
		std::cout << "��g\n";
		//switch������ʂ���
		break;
	// 1�̏ꍇ
	case 1 :
		// ���g��\������
		std::cout << "���g\n";
		//switch������ʂ���
		break;
	// 2�̏ꍇ
	case 2 :
		//���g��\������
		std::cout << "���g\n";
		//switch������ʂ���
		break;
		// 3�̏ꍇ
	case 3:
		// �g��\������
		std::cout << "�g\n";
		//switch������ʂ���
		break;
		// 4�̏ꍇ
	case 4:
		// ���g��\������
		std::cout << "���g\n";
		//switch������ʂ���
		break;
		// 5�̏ꍇ
	case 5:
		// ����\������
		std::cout << "��\n";
		//switch������ʂ���
		break;
		// 6�̏ꍇ
	case 6:
		// �勥��\������
		std::cout << "�勥\n";
		//switch������ʂ���
		break;
	// �f�t�H���g�̏ꍇ
	default:
		//�������Ȃ�
		break;
	}

}