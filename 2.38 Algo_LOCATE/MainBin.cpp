//有一个双向循环链表，每个结点中除有prior，data和next三个域外，还增设了一个访问频度域freq。
//在链表被起用之前，频度域freq的值均初始化为零
//而每当对链表进行一次LOCATE(L, x)的操作后，
//被访问的结点（即元素值等于x的结点）中的频度域freq的值便增1，同时调整链表中结点之间的次序
//使其按访问频度非递增的次序顺序排列，以便始终保持被频繁访问的结点总是靠近表头结点。
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