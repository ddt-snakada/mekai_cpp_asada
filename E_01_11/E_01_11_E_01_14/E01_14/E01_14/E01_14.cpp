/*
�L�[�{�[�h����ǂݍ��񂾐����l�v���X�}�C�i�X5�͈̔͂̐����l�������_���ɐ������ĕ\������v���O�����𐶐�����B
�L�[�{�[�h����ǂݍ��񂾒l��100�ł���΁A95�`105�̐����l��\�����邱�ƁB
*/

#include<iostream> //�W�����o�͂�񋟂��郉�C�u����
#include<ctime>    //C�X�^�C���̎��Ԃ̕W�����C�u�������܂܂�Ă���
#include<cstdlib>  //�^�������𐶐�����rand() srand()���܂܂�Ă��郉�C�u����
using namespace std;

int main()
{
	srand(time(NULL));            //rand()�̎��ݒ肷��
	int randomInteger;               //-5�`5������ϐ�
	int enteredInteger;               //���͂���鐮��������ϐ�

	 //0�`10�̗�������5���������Ƃɂ��-5�`5�̐��������
	randomInteger = (rand() % 11) - 5; 
	cout << "�����l:";

	cin >> enteredInteger;            //��������͂���B

	//���͂��ꂽ�ϐ���-5�`5�𑫂����͒l����}5�̗����𐶐����邱�Ƃ���������
	cout << "���̒l�́}5�̗����𐶐����܂����B�����" << enteredInteger + randomInteger << "�ł��B";
}