#include<iostream>

using namespace std;

class List{
	
	struct Node{

		int num;
		Node *next;
	};
	
	Node *head;
		
public:
	
	List(){
		head = nullptr;
	}
	
	~List(){};
	
	void setNode(int num){
		Node *newNode;
		Node *nodePtr;
		
		newNode = new Node;
		newNode->num = num;
		newNode->next = nullptr;
		
		if(!head){
			head = newNode;
		}
		else{
			nodePtr = head;
			
			while(nodePtr->next)
				nodePtr = nodePtr->next;
				
			nodePtr->next = newNode;
		}
	}
	
	void showList(){
		Node *nodePtr;
		nodePtr = head;
		
		while(nodePtr){
			cout<<nodePtr->num <<" ";
			
			nodePtr = nodePtr->next;
		}
	}
};

int main(){
	
	List nums;
	
	nums.setNode(1);
	nums.setNode(2);
	nums.setNode(3);
	
	nums.showList();
	
	return 0;
}
