/*List2-13�Ɠ��l�ɁA��̐����l��ǂݍ���ŁA�������ق��̒l�Ƒ傫���ق��̒l�̗�����\������v���O�������쐬����B
�������A��̐����l���������ꍇ�́A�E�Ɏ����悤�Ɂu��̒l�͓����ł��v�ƕ\�����邱��*/

#include <iostream>

int main() {
	//���͗p�̕ϐ���p�ӂ���
	int inputNumber1, inputNumber2;
	//���͗p�̕ϐ���1�߂ɒl������
	std::cout << "����a: "; std::cin >> inputNumber1;
	//���͗p�̕ϐ���2�߂ɒl������
	std::cout << "����b: "; std::cin >> inputNumber2;

	//�ő�l�ƍŏ��l�������ϐ���p�ӂ���
	int min, max;
	// inputNumber2��inputNumber1���傫���ꍇ
	if (inputNumber1 < inputNumber2) {
		//�ŏ��l��inputNumber1��������
		min = inputNumber1;
		//�ő�l��inputNumber2��������
		max = inputNumber2;
	//inputNumber1��inputNumbar2�ȏ�̏ꍇ
	}else{
		//�ŏ��l��inputNumber2��������
		min = inputNumber2;
		//�ő�l��inputNumber1��������
		max = inputNumber1;
	}
	// ���͂��ꂽ2�̐����l�������ꍇ
	if (inputNumber1 == inputNumber2) {
		//�����ł��郁�b�Z�[�W��\������
		std::cout << "��̒l�͓����ł�\n";
	// ���͂��ꂽ2�̐����l���Ⴄ�ꍇ
	}else{
		//�������ق��̐����o�͂���
		std::cout << "�������ق��̒l��" << min << "�ł��B\n";
		//�傫���ق��̐����o�͂���
		std::cout << "�傫���ق��̒l��" << max << "�ł��B\n";
	}
}