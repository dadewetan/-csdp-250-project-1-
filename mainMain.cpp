#include<iostream>
#include"project.hpp"
using namespace std;
int main()
{
	StudentList listOf;

	listOf.appendNode(1677, 4.0);
	listOf.appendNode(4876, 2.6);
	listOf.appendNode(3231, 3.7);
	listOf.appendNode(6224, 1.8);
	listOf.appendNode(2333, 3.9);
	listOf.appendNode(1345, 3.5);


	cout << "\n\n======= ADD NODES =======\n\n";
	listOf.displayList();

	cout << "\n\n======= DELETE NODES =======\n\n";
	listOf.deleteNode(4876);
	listOf.deleteNode(6224);
	listOf.displayList();

}