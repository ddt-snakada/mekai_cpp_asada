//List2-5�̍Ō��else��else if (n==0)�ɕύX����Ƃǂ��Ȃ邩��������B

#include<iostream>

using namespace std;

int main()
{
	int n;              //list2-5�̎w��̂��߈ꕶ��
	cout << "�����l:";
	cin >> n;           //n�ɐ�������͂���

	//n��0���傫���ꍇ
	if (n > 0){
		cout << "���̒l�͐��ł��B\n";
	//n��0��菬�����ꍇ
	}else if (n < 0){
		cout << "���̒l�͕��ł��B\n";
	//���̕ύX�_�Bn��0�̏ꍇ
	}else if (n == 0){
		cout << "���̒l��0�ł��B\n";
	}
}

//�l�@ 0���傫�����łȂ��A0��菬�������ł��Ȃ����͎̂���0�݂̂ł���Aelse����else if(n==0) �ɕύX���Ă����ʂ͕ς��Ȃ�