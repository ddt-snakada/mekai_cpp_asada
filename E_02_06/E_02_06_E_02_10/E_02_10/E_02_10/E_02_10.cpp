/*
�L�[�{�[�h����ǂݍ��񂾎O�̐����̍ŏ��l�����߂ĕ\������v���O�������쐬����B
*/

#include <iostream>

int main()
{
	//�L�[�{�[�h������͂��邽�߂̐���������ϐ���3�p�ӂ���
	int inputNumber1, inputNumber2, inputNumber3;
	//�ŏ��l������ϐ�
	int minNumber;
	//����inputNumber1�ɓ��͂��邱�Ƃ�`����
	std::cout << "����inputNumber1:";
	//inputNumber1�ɒl����͂���
	std::cin >> inputNumber1;
	//����inputNumber2�ɓ��͂��邱�Ƃ�`����
	std::cout << "����inputNumber2:";
	//inputNumber1�ɒl����͂���
	std::cin >> inputNumber2;
	//����inputNumber3�ɓ��͂��邱�Ƃ�`����
	std::cout << "����inputNumber3:";
	//inputNumber1�ɒl����͂���
	std::cin >> inputNumber3;

	// �ŏ��l�ɍŏ��̓��͂̒l������
	minNumber = inputNumber1;
	// 2�Ԗڂɓ��͂����l���ŏ��l��菬�����ꍇ
	if (inputNumber2 < minNumber) {
		// �V����minNumber��inputNumber2�ɑ������
		minNumber = inputNumber2;
	}
	// 3�Ԗڂɓ��͂����l���ŏ��l��菬�����ꍇ
	if (inputNumber3 < minNumber) {
		// �V����minNumber��inputNumber3�ɑ������
		minNumber = inputNumber3;
	}

	//�ŏ��l�̌��ʂ��o�͂���
	std::cout << "�ŏ��l��" << minNumber << "�ł�\n";
}