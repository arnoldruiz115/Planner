#pragma once
#include <string>
using std::string;

struct ItemTODO {
	ItemTODO * next;
	string note;
};

class Planner {
private:
	
public:
	void addEvent(string nt);
	void viewEvent(int dt);
	void showAll();
};

class LinkedList {
private:
	ItemTODO *head = NULL;
	ItemTODO *tail = NULL;

public:
	void insertItem(string item);
	void viewList(ItemTODO *ref);
	void printList();
	void printFirst();
};