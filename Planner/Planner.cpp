#include "Planner.h"
#include <iostream>
using std::cout;

void Planner::addEvent(string nt)
{
	
}

void Planner::viewEvent(int dt)
{
	
}

void Planner::showAll() 
{
	
}

void LinkedList::insertItem(string item)
{
		
	ItemTODO *newItem = new ItemTODO;
	newItem->note = item;
	newItem->next = head;	
	head = newItem;
}

void LinkedList::viewList(ItemTODO *ref)
{
	ItemTODO *temp = ref;
	while (temp != NULL) {
		cout << temp->note << std::endl;
		temp = temp->next;
	}
}

void LinkedList::printList()
{
	viewList(head);
}

void LinkedList::printFirst()
{
	cout << head->note << std::endl;
}
