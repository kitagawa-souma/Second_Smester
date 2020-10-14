#include <stdio.h>
#include <stdlib.h>
#include<string>
#include <iostream>

int main()
{
	//string=������
	//c����̕����A������
	char word = 'a';
	char name[] = "souma kitagawa";
	const char* cstr = "Hello World";

	//��L3�̕����A�������	printf�ŉ�ʂɏo�͂���
	printf("%c\n", word);
	printf("%s\n", name);
	printf("%s\n", cstr);

	//std::string str = "������";
	//std::string str;			//�����
	//std::string str = "";		//�����
	//std::string str = "ABC;	//"ABC"
	//std::string str = ("ABC");//"ABC"
	std::string str2(3, 'A');	//"AAA"
	std::string str = str2;		//"AAA"


	//C����̊֐���string�^�ɓ��͂���Ă��镶������g���ɂ�
	//.c_str()�Ƃ����֐��ŁA������̃|�C���^���󂯎��K�v������

	//C++�I�ȏ�����(iostream��string�̃C���N���[�h���K�v)
	std::cout << str << std::endl;

	//�����T�C�Y���擾 .size() or .length()
	std::cout << "str size = " << str.size() << std::endl;

	//�����̑}�� +=, .push_back(), .append(), .insert()
	str += "BBC";			//"AAABBC"		�����ɕ������ǉ�
	str.push_back('D');		//"AAABBCD"		�����ɂP������ǉ�
	str.append("EE");		//"AAABBCDEE"	+=�Ƒ�͓̂���
	str.insert(1, "FG");	//"AFGAABBCDEE" �w��̏ꏊ�ɁA�������ǉ�
	std::cout << str << std::endl;

	//�����̌��� .find()
	str = "ABC ABC";
	int index = str.find('C');		// 2 �擪����P�����ڂ�T��
	index = str.find("BC");			// 1 �擪���當�����T��
	index = str.find("BC", 2);		// 5 �w��̈ʒu(2)���當�����T��
	index = str.find("Z");			// -1 �����_�ł̎d�l

	//�ق��ɂ�
	//.rfind()				��납��
	//.find_first_of()		�w�蕶�����A�擪����
	//.find_last_of()		�w�蕶�����A�Ōォ��
	//.find_first_not_of	�w�蕶���łȂ��������A�擪����
	//.find_last_not_of()	�w�蕶���łȂ��������A�Ōォ��

	//�����̒u������ .replace(�������ځA���������A�u������������)
	str = "ABC ABC";
	std::string from = "BC";
	std::string to = "X";
	str.replace(str.find(from), from.size(), to);	//"AX ABC"
	std::cout << str << std::endl;

	//�����̍폜 .clear()
	str.clear();
	std::cout << str << std::endl;

	std::cout << index << std::endl;


	system("pause");
	return 0;
}