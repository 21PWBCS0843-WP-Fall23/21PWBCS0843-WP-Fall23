// my name is haseeb hassan
#include <iostream>
#include <string>
using namespace std ;
class queue{
	private :
	int front ;
	int rear ;
	int arr[5] ;
	int counttotal;
	public :
	queue(){
		counttotal = 0 ;
		front = -1 ;
		rear = -1 ;
		for (int i = 0 ; i < 5 ; i ++)
		arr[i] = 0 ;
	}
	bool isEmpty(){
		if (front == -1 && rear == -1 )
			return true ;
		else
		return false ;
	}
	bool isFull(){
		if(( rear+1)%5 == front)
		return true ;
		else
		return false ;
	}
	void Enqueue(int val){
		if (isFull())
		cout << "queue is full " << endl ;
		else if (isEmpty()){
			front = rear = 0 ;
			arr[rear] = val ;
		}
		else{
			rear = (rear+1)%5 ;
			arr[rear] = val ;
		}
		counttotal++;
	}
	int Dequeue(){
		int x ;
		if (isEmpty()){
		cout << "queue is empty " << endl ;
		return 0 ;
	    }
		else if (front = rear){
			x = arr[front] ;
			arr[front] = 0 ;
			front = rear = -1 ;
			counttotal--;
			return x ;
		}
		else{
		x = arr[front] ;
		arr[front] = 0 ;
		front = (front+1)%4 ;
		counttotal--;
		return x ;
	    }
	}
	void display(){
		for (int i = 0 ; i < 5 ; i ++ )
		cout << arr[i]  << " " ;
	}
	int count(){
	    return (counttotal);
	}
};
int main () {
	queue q1 ;
	int value , option ;
	do{
		cout << "choose the correct option , press 0 to exit " << endl ;
		cout << "1- check the queue is empty " << endl ;
		cout << "2- check the queue is full " << endl ;
		cout << "3- Enter the value in the queue " << endl ;
		cout << "4- to extract the value from the queue " << endl ;
		cout << "5- display the queue" << endl ;
		cout << "6- to count the value in the queue " << endl ;
		cout << "7- clear the screen" << endl ;
		
	cin >> option ;
	
	switch (option){
		case 1:
			if (q1.isEmpty())
			cout << " queue is empty " << endl ;
			else 
			cout << " queue is not empty " << endl ;
			break ;
		case 2:
			if (q1.isFull())
			cout << " queue is full " << endl ;
			else
			cout << " queue is not full " << endl ;
			break ;
		case 3:
			cout << " enter the value in the queue " << endl ;
			cin >> value ;
			q1.Enqueue(value) ;
			break ;
		case 4:
			cout << " dequeue function called " << endl ;
			q1.Dequeue() ;
			break ;
		case 5:
		    cout << "elements in the queue are " << endl ;
		    q1.display() ;
		case 6:
			cout << " count function called " << endl ;
			q1.count() ;
			break ;
		case 7:
			system("cls") ;
			break ;
        }
	}while(option != 0) ;
}

