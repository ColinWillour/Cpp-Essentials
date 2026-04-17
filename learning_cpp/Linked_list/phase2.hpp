#pragma nce
#include <iostream>

class LinkedList {
private:
    struct Node {
        int value;
	std::unique_ptr<Node> next; // replaced Node* next;

        Node(int value) : value(value), next(nullptr) {}
    };

    std::unique_ptr<Node> head_;  // replaced Node* head_;
    Node* tail_;

public:

    // constructor
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
	    	auto newNode = std::make_unique<Node>(value);
		if (!head_) {
			tail_ = neweNode.get();
			head_ = std::move(newNode);
		} else {
			tail_ -> next = std::move(newNode);
			tail_ = tail_ -> next.get();
		}
    	}

	// print function
    	void print(std::ostream& os) const {
        	Node* curr = head_.get();
        	while (curr) {
        	os << curr->value;
            	if (curr->next) os << " -> ";
            		curr = curr -> next.get;
        	}
    	}
};

