/*�E�Ɏ����悤�ɁA��̐����l��ǂݍ���ŁA�����̒l�̍���10�ȉ��ł���΁u�����̍���10�ȉ��ł��B�v
�ƕ\�����A�����łȂ���΁u�����̍��͂P�P�ȏ�ł��B�v�ƕ\������v���O�������쐬����B
*/

#include<iostream>
int main() {
	// �����l����͂��邽�߂̓�̕ϐ���p�ӂ���
	int integerNumberA, integerNumberB;
	//�����l�̍��������邽�߂̕ϐ���p�ӂ���
	int difference;
	//����A�̓��͂𑣂�
	std::cout << "����A:";
	//����A�̒l����͂���
	std::cin >> integerNumberA;
	//����B�̓��͂𑣂�
	std::cout << "����B:";
	//����B�̒l����͂���
	std::cin >> integerNumberB;
	//�������Z�q�Ő���1�Ɛ���2���]�������B
	//����1�̂��傫���ꍇ�͐���1-����2�̎���difference�ɑ������A����ȊO�̏ꍇ�͐���2-����1��difference�ɑ�������B
	difference = integerNumberA - integerNumberB ? integerNumberA - integerNumberB : integerNumberB - integerNumberA;
	
	//����10�ȉ��̏ꍇ�̏o�͏���������B
	if (difference <= 10) {
		//����10�ȉ��ł��邱�Ƃ��o�͂���
		std::cout << "�����̍���10�ȉ��ł��B";
	}//����11�ȏ�̏ꍇ�̏o�͏���
	else if(difference >= 11) {
		//����11�ȏ�ł��邱�Ƃ��o�͂���
		std::cout << "�����̍���11�ȏ�ł��B";
	}
	
}