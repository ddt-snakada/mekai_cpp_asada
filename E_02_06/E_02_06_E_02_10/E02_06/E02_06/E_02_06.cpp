/*�L�[�{�[�h����ǂݍ��񂾓_���ɉ����āA�D/��/��/�s�𔻒肵�ĕ\������v���O�������쐬����B����͈ȉ��̂悤�ɍs�����ƁB
0�`59���s��/60�`69����/70�`79����/80�`100���D
*/

#include<iostream>

int main(){
	//�L�[�{�[�h������͂����_��������ϐ�
	int testPoint;
	//�L�[�{�[�h����_������͂���
	std::cin >> testPoint;
	//0�ȏ�60�����̏ꍇ�A�s���o��
	if (testPoint >= 0 && testPoint < 60) {
		//�s���o�͂���
		std::cout << "�s��";
	}//60�ȏ�70�����̏ꍇ�A���o��
	else if ( testPoint >=60 && testPoint < 70) {
		//���o�͂���
		std::cout << "��";
	}//70�ȏ�80�����̏ꍇ�A�ǂ��o��
	else if (testPoint >=70 && testPoint < 80){
		//�ǂ��o�͂���
		std::cout << "��";
	}//80�ȏ�100�ȉ��̏ꍇ�A�D���o��
	else if (testPoint >= 80 && testPoint <=100) {
		//�D���o�͂���
		std::cout << "�D";
	}

}