/*��̐����l��ǂݍ���ō~��(�傫����)�ɕ��ёւ���v���O�������쐬����*/

#include <iostream>

int main() {
	//���͗p�̕ϐ���p�ӂ���
	int inputNumber1, inputNumber2;
	//���͗p�̕ϐ���1�߂ɒl������
	std::cout << "��ڂ̐���: "; std::cin >> inputNumber1;
	//���͗p�̕ϐ���2�߂ɒl������
	std::cout << "��ڂ̐���: "; std::cin >> inputNumber2;

	// inputNumber2��inputNumber1���傫���ꍇ
	if (inputNumber1 < inputNumber2) {
		// �ꎞ�I�ϐ���p�ӂ���
		int tmp = inputNumber1;
		// inputNumber1��inputNumber2�����ւ���
		inputNumber1 = inputNumber2;
		// inputNumber2�ɕێ����Ă���tmp��������
		inputNumber2 = tmp;
	}
		//�傫���ق��̐����o�͂���
		std::cout << inputNumber1 << "\n";
		//�������ق��̐����o�͂���
		std::cout << inputNumber2 << "\n";
}