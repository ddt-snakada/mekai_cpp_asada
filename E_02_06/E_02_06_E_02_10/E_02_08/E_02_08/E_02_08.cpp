/*��̐����l��ǂݍ���ŁA�����̒l�̍���\������v���O�������쐬����*/

#include<iostream>

int main() {
	//�����l����͂��邽�߂̓�̕ϐ���p�ӂ���B
	int integerNumber1, integerNumber2;
	//�����l�̍��������邽�߂̕ϐ���p�ӂ���B
	int difference;
	//����1�̓��͂𑣂�
	std::cout << "����1�̒l����͂��Ă�������:";
	//����1�̒l����͂���
	std::cin >> integerNumber1;
	//����2�̓��͂𑣂�
	std::cout << "����2�̒l����͂��Ă�������:";
	//����2�̒l����͂���
	std::cin >> integerNumber2;
	//�������Z�q�Ő���1�Ɛ���2���]�������B
	//����1�̂��傫���ꍇ�͐���1-����2�̎���difference�ɑ������A����ȊO�̏ꍇ�͐���2-����1��difference�ɑ�������B
	difference = integerNumber1 > integerNumber2 ? integerNumber1 - integerNumber2 : integerNumber2 - integerNumber1;
	//�����l�̍����o�͂���
	std::cout << "�����l�̍���:" << difference;
}