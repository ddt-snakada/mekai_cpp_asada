/*�ȉ��Ɏ����v���O�������쐬����
�E1���̐��̐����l(���Ȃ킿1�ȏ�9�ȉ��̒l)�������_���ɐ������ĕ\���B
�E1���̕��̐����l(���Ȃ킿-9�ȏ�-1�ȉ��̒l)�������_���ɐ������ĕ\���B
�E2���̐��̐����l(���Ȃ킿10�ȏ�99�ȉ��̒l)�������_���ɐ������ĕ\���B
*/

#include<iostream> //�W�����o�͂�񋟂��郉�C�u����
#include<ctime>    //C�X�^�C���̎��Ԃ̕W�����C�u�������܂܂�Ă���
#include<cstdlib>  //�^�������𐶐�����rand() srand()���܂܂�Ă��郉�C�u����
using namespace std;

int main()
{
	int positiveOneDigitInteger;                 //1���̐��̐����l������ϐ�
	int negativeOneDigitInteger;                 //1���̕��̐����l������ϐ�
	int positiveTwoDigitInteger;                 //2���̐��̐����l������ϐ�
	srand(time(NULL));                          //rand�֐��̎��ݒ肷��

	//0����8�̐��̐����l�������_���ɐ�����1�𑫂��Ĉȏ�9�ȉ��̒l�����
	positiveOneDigitInteger = (rand() % 9) + 1;  
	//0����8�̐��̐����l�������_���ɐ������}�C�i�X��t�^���A1������ -9�ȏ�-1�ȉ��̒l�����
	negativeOneDigitInteger = -(rand() % 9) - 1; 
	//0����89�̐��̐����l�������_���������A10�𑫂�10�ȏ�99�ȉ��̒l�����
	positiveTwoDigitInteger = (rand() % 90) + 10;

	//1���̐��̐����l��\��
	cout << "1���̐��̐����l��" << positiveOneDigitInteger <<"\n";   
	//1���̕��̐����l��\��
	cout << "1���̕��̐����l��" << negativeOneDigitInteger << "\n";  
	//2���̐��̐����l��\��
	cout << "2���̐��̐����l��" << positiveTwoDigitInteger << "\n"; 
}