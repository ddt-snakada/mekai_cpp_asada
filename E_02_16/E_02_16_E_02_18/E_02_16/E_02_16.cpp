/*����1~12�̐����l�Ƃ��ēǂݍ���ŁA����ɑΉ�����G�߂�\������v���O�������쐬����*/

#include <iostream>

int main() {
	//���p�̕ϐ���p�ӂ���
	int monthNumber;
	//1~12�̐�������͂��Ă��炤
	std::cout << "1�`12����͂��Ă�������\n";
	//���p�̕ϐ��ɐ���������
	std::cin >> monthNumber;

	//monthNumber�ŕ��򂷂�
	switch (monthNumber)
	{
	// 1�̏ꍇ
	case 1:
	// 2�̏ꍇ
	case 2:
	//12 �̏ꍇ
	case 12:
		// �~��\������
		std::cout << "�~\n";
		//switch������ʂ���
		break;
	// 3�̏ꍇ
	case 3:
	// 4�̏ꍇ
	case 4:
	// 5�̏ꍇ
	case 5:
		// �t��\������
		std::cout << "�t\n";
		//switch������ʂ���
		break;
	// 6�̏ꍇ
	case 6:
	// 7�̏ꍇ
	case 7:
	// 8�̏ꍇ
	case 8:
		//�Ă�\������
		std::cout << "��\n";
		//switch������ʂ���
		break;
	// 9�̏ꍇ
	case 9:
	// 10�̏ꍇ
	case 10:
	// 11�̏ꍇ
	case 11:
		// �g��\������
		std::cout << "�H\n";
		//switch������ʂ���
		break;
	// �f�t�H���g�̏ꍇ
	default:
		//�������Ȃ�
		break;
	}

}