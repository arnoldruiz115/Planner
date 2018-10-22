#pragma once
#include <string>
using std::string;

struct ItemTODO {
private:
	
public:
	string note;
};

class Planner {
private:
	
public:
	void addEvent(int dt, string nt);
	void viewEvent(int dt);
	void showAll();
};