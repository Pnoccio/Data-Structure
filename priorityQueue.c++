#include <iostream>
using namespace std;

/*
priority will be identified by 0 or 1.
A patient with priority 1 will be served first and that with priority 0 later.
*/
class Node{
	public:
		int key;
		int priority;
		Node * next;
	Node(){
		key =0;
		priority=0;
		next = NULL;
	}
	Node(int k, int pk) {
    key = k;
    priority = pk;
    next = NULL;
  }
};

class Queue{
public:
	Node * front;
	Node * rear;
	int ticket_no;
	
	Queue(){
		front = NULL;
		rear = NULL;
		ticket_no = 1000;
	}
	
	
	bool ifEmpty(){
		if(front == NULL && rear == NULL)
			return true;
		else
			return false;	
	}
	
	bool ifExists(Node *e){
        // Node * temp;
		bool exists = false;
		Node *temp = front;
		int tp;
		while(temp != NULL){
			if(temp -> key == e -> key){
				exists = true;
				tp = e -> key;
				break;
			}
			temp = temp->next;
		}
		return exists;
	}
	
	void enqueue(Node*e,int p_key){
		/*
		these first 2 statements provide a ticket as a unique key for a patient.
		then the priority key. which is either 0 or 1;
		*/
		e -> key = ticket_no;
		e -> priority = p_key;
		
		if(ifEmpty()){
			front = e;
			rear = e;
			cout <<endl<<"New Patient Added!!"<<endl;
		}else if(ifExists(e)){
			cout <<endl<< "Ticket Number Used!!"<<endl;
		}else{
		 // if a patient exists
			if(front->priority < e->priority){
				/*
				this first if condition checks if the first node has priority 0 less than the new node "e"
				so if true: make the new node "e" the first by "front = e" and assingning the front as next node for the new node "e"
				*/
				e->next = front;
				front = e;
			}else{
				/*
				>   assignt temp <- front
					the loop will be changing the "temp" to the temp->next(which is a pointer to next node)
					if it happens that temp->priority is 1: continue looping by changing the "temp" to be temp->next(which is the next node)
				>   if the condition is false means that the priority of next node of the known(or) pointed by the current node "temp" is 0(zero) or the NULL
					then the next node of the temp node will be assigned as the next node of the new node(e->next = temp->next)
					and the previouse node's next pointer variable will point to new node (temp-> next = e) 
				    The loop will terminate if the temp->next is 0(zero).
				    Then the
				*/
				Node*temp = front;
				while(temp->next!=NULL && temp->next->priority==1){
					temp= temp->next;
				}
				e->next=temp->next;
				temp->next = e;
		}
		
			
			cout <<endl<<endl<< "New Patient Added!!"<<endl;
		}
		ticket_no++;
	}
	
	Node * dequeue(){
		Node * temp = NULL;
		if(ifEmpty()){
			cout<<endl<<"The Queue is Empty !!!"<<endl;
			return 0;
		}else{
			if(front == rear){
				temp = front;
				front = NULL;
				rear = NULL;
				return temp;
			}else{
				temp = front;
				front = front->next;
				return temp;
			}
		}
	}
	
	void display(){
		Node* temp = front;
		if(ifEmpty()) cout<<"No Patient available"<<endl;
		while(temp!=NULL){
			cout <<"[Key: "<<temp->key<<",Priority key: "<<temp->priority<<"]"<<"->";
			temp = temp->next;
		}
	}
};


int main(){
	Queue obj;
	int choice,priority_key;
	string p;
	
	do{
		cout<<endl<<"Choose Option"<<endl<<endl;
		cout<<"1. Add Patient"<<endl;
		cout<<"2. Serve a Patient"<<endl;
		cout<<"3. Display Patients"<<endl;
		cout<<"4. Clear Screen"<<endl;
		cout<<"0. Exit"<<endl;
		cout<<endl<<"Choose: ";cin>>choice; cout<<endl;
		Node * patient = new Node();
		
		switch(choice){
			case 1:
				cout<<"Prioritize (y/n): "; cin>>p;
				if(p=="y")
					obj.enqueue(patient,1);
				else if(p=="n")
					obj.enqueue(patient,0);
				else
					cout<<"Invalied Choice!!"<<endl;

				break;
			case 2:
				cout<<"Patient: ";
				patient=obj.dequeue();
				cout<<"[Key: "<<patient->key<<",Priority key: "<<patient->priority<<"] "<<
				"was served"<<endl;
				break;
			case 3:
				cout<<"List of Petients:"<<endl<<endl;
				obj.display();
				break;
			case 4:
				system("cls");
				break;
			default:
				cout<<"Invalid Choice"<<endl;
		}
	}while(choice!=0);
	return 0;
};