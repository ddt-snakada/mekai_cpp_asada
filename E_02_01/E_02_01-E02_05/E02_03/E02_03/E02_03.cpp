//���K2-3�@���int�^�ϐ�a,b�ɒl��ǂ݂���ŁA���̑召�֌W���ȉ��̂����ꂩ�ŕ\������v���O�������쐬����B
//�wa�̂ق����傫���ł��B�x�wb�̂ق����傫���ł��B�x�wa��b�͓����l�ł��B�x

#include<iostream>

int main()
{
	int a; //��蕶�̎w���a
	int b; //��蕶�̎w���b
	std::cout << "a�̒l��:";
	std::cin >> a; //a�̒l��ǂݍ���
	std::cout << "b�̒l��:";
	std::cin >> b; //b�̒l��ǂݍ���

	//a�̒l��b�̒l���傫���ꍇ
	if (a > b)
		std::cout << "a�̂ق����傫���ł�\n";
	//b�̒l��a�̒l���傫���ꍇ
	else if (b > a)
		std::cout << "b�̂ق����傫���ł�\n";
	//a��b�̒l�������ꍇ
	else if (a == b)
		std::cout << "a��b�͓����l�ł��B";
}