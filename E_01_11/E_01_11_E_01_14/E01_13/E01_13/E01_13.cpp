/*�ȉ��Ɏ����v���O�������쐬����
�E1���̐��̐����l(���Ȃ킿1�ȏ�9�ȉ��̒l)�������_���ɐ������ĕ\���B
�E1���̕��̐����l(���Ȃ킿-9�ȏ�-�ȉ��̒l)�������_���ɐ������ĕ\���B
�E2���̐��̐����l(���Ȃ킿10�ȏ�99�ȉ��̒l)�������_���ɐ������ĕ\���B
*/

#include<iostream> //�W�����o�͂�񋟂��郉�C�u����
#include<ctime>    //C�X�^�C���̎��Ԃ̕W�����C�u�������܂܂�Ă���
#include<cstdlib>  //�^�������𐶐�����rand() srand()���܂܂�Ă��郉�C�u����
using namespace std;

int main()
{
	int positive_one_digit_int;                 //1���̐��̐����l������ϐ�
	int negative_one_digit_int;                 //1���̕��̐����l������ϐ�
	int positive_two_digit_int;                 //2���̐��̐����l������ϐ�
	srand(time(NULL));                          //rand�֐��̎��ݒ肷��
	positive_one_digit_int = (rand() % 9) + 1;  //9�����̐��̐����l�������_���ɐ�����1�𑫂��đ������
	negative_one_digit_int = -(rand() % 9) - 1; //9�����̐��̐����l�������_���ɐ������}�C�i�X��t�^���A1�������������
	positive_two_digit_int = (rand() % 90) + 10;//90�����̐��̐����l�������_���������A10�𑫂��������
	
	cout << "1���̐��̐����l��" << positive_one_digit_int <<"\n";   //1���̐��̐����l��\��
	cout << "1���̕��̐����l��" << negative_one_digit_int << "\n";  //1���̕��̐����l��\��
	cout << "2���̐��̐����l��" << positive_two_digit_int << "\n";  //2���̐��̐����l��\��
}