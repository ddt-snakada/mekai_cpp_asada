/*
�L�[�{�[�h����ǂݍ��񂾎O�̐����̒����l�����߂ĕ\������v���O�������쐬����B
���Ⴆ��2,3,1�̒����l��2��1,2,1�̒����l��1�ŁA3,3,3�̒����l��3�ł���B
*/

#include <iostream>

int main()
{
	//�L�[�{�[�h������͂��邽�߂̐���������ϐ�
	int inputNumber1, inputNumber2, inputNumber3;
	//�ŏ��l������ϐ�
	int medianNumber;
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
	//inputNumber1��inputNumber2�ȏ�̏ꍇ
	if (inputNumber2 <= inputNumber1){
		//inputNumber1��inputNumber3�ȉ��̏ꍇ
		if (inputNumber1 <= inputNumber3) {
			//�����l��inputNumber1�������
			medianNumber = inputNumber1;
		//inputNumber1��inputNumber3���傫���ꍇ
		}else{
			//�����l��inputNumber3�������
			medianNumber = inputNumber3;
		}
	//inputNumber2��inputNumber1���傫���ꍇ
	}else{
		//inputNumber2��inputNumber3�ȉ��̏ꍇ
		if (inputNumber2 <= inputNumber3) {
			//�����l��inputNumber2�������
			medianNumber = inputNumber2;
		//inputNumber2��inputNumber3���傫���ꍇ
		}else{
			//�����l��inputNumber3�������
			medianNumber = inputNumber3;
		}
	}
	//�����l�̌��ʂ��o�͂���
	std::cout << "�ŏ��l��" << medianNumber << "�ł�\n";
}