//��һ��˫��ѭ������ÿ������г���prior��data��next�������⣬��������һ������Ƶ����freq��
//����������֮ǰ��Ƶ����freq��ֵ����ʼ��Ϊ��
//��ÿ�����������һ��LOCATE(L, x)�Ĳ�����
//�����ʵĽ�㣨��Ԫ��ֵ����x�Ľ�㣩�е�Ƶ����freq��ֵ����1��ͬʱ���������н��֮��Ĵ���
//ʹ�䰴����Ƶ�ȷǵ����Ĵ���˳�����У��Ա�ʼ�ձ��ֱ�Ƶ�����ʵĽ�����ǿ�����ͷ��㡣
#include <iostream>
#include "cyclelinkedlist.h"

const int size = 40;
int main() {
	Cycle_Linked_List<int> CLList;
	CLList.InitCycleList();

	for (int i = 0; i < size; i++)
	{
		CLList.CycleListInsert(i+1,i);
	}

	CLList.LOCATE(13);

	for (int i = 0; i < CLList.CycleListLength(); i++)
	{
		std::cout << CLList.getElem(i + 1) << std::endl;
	}

	system("pause");
}