#pragma nce
#include <iostream>

class LinkedList {
private:
    struct Node {
        int value;
        Node* next;

        Node(int value) : value(value), next(nullptr) {}
    };

    Node* head_;
    Node* tail_;

public:

    constructor
    LinkedList() : head_(nullptr), tail_(nullptr) {}

    // destructor
    ~LinkedList() {
        Node* curr = head_;
        while (curr != nullptr) {
            Node* next = curr->next;
            delete curr;
            curr = next;
        }
    }

    LinkedList(const LinkedList&) = delete;
    LinkedList& operator=(const LinkedList&) = delete;


    	// push_back function
	void push_back(int value) {
	    	Node* n = new Node(value);
	    	if (!head_) {
            		head_ = tail_ = n;
        	} else {
            		tail_->next = n;
            		tail_ = n;
        	}
    	}

	// print function
    	void print(std::ostream& os) const {
        	Node* curr = head_;
        	while (curr) {
        	os << curr->value;
            	if (curr->next) os << " -> ";
            		curr = curr->next;
        	}
    	}
};

