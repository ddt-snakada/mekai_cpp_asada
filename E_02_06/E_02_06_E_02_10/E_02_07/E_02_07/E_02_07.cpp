/*��̎����l��ǂݍ���ŁA�傫���ق���\������v���O�������쐬����*/

#include<iostream>

int main() {
	//�����l����͂��邽�߂̕ϐ���2�p�ӂ���B
	double realNumber1, realNumber2;
	//�傫�������������邽�߂̕ϐ���p�ӂ���B
	double bigNumber;
	//����1�̒l�̓��͂𑣂�
	std::cout << "����1�̒l����͂��Ă�������:";
	//����1�̒l����͂���
	std::cin >> realNumber1;	
	//����2�̒l�̓��͂𑣂�
	std::cout << "����2�̒l����͂��Ă�������:";
	//����2�̒l����͂���
	std::cin >> realNumber2;
	//�������Z�q�Ŏ���1�Ǝ���2���]������傫��������bigNumber�ɑ�������B
	//��蕶�Ɏw�肳��Ă��Ȃ����A�l�������ꍇ�͏�����FALSE�ɂȂ����2�̒l���o�͂����
	bigNumber = realNumber1 > realNumber2 ? realNumber1 : realNumber2;
	//�傫���ق��̒l���o�͂���
	std::cout << "�傫���ق��̒l��" << bigNumber;
}