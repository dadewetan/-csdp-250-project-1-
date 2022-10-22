#ifndef StudentList_hpp
#define StudentList_hpp

class StudentList
{
private:
	struct ListNode
	{
		int ID;
		double GPA;
		struct ListNode* next;
	};

	ListNode* head;

public:
	StudentList();
	
	//~StudentList();
	void appendNode(int, double);
	void insertNode(int, double);
	void deleteNode(int);
	void displayList()const;
};
#endif

