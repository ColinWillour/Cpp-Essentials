#pragma nce
#include <iostream>

class LinkedList {
private:
    struct Node {
        int value;
	
	std::shared_ptr<Node> next; // was a unique pointer before
	std::shared_ptr<Node> prev;	

        Node(int value) : value(value), next(nullptr) {}
    };

    std::shared_ptr<Node> head_;  // replaced Node* head_;
    std::shared_ptr<Node> tail;  // was Node* tail_;

public:

    // constructor
    LinkedList() = default;

    // destructor
    ~LinkedList() = default; // shared ptr also handles cleanup which is bueno

    LinkedList(const LinkedList&) = delete;
    LinkedList& operator=(const LinkedList&) = delete;


    	// push_back function
	void push_back(int value) {
	    	auto newNode = std::make_unique<Node>(value);
		if (!head_) {
			head_ = tail_ = n;
		} else {
			tail_ -> next = n;
			n -> prev = tail_;
			tail_ = n;
		}
    	}

	// print function
    	void print(std::ostream& os) const {
        	auto curr = head_;
        	while (curr) {
        	os << curr->value;
            	if (curr->next) os << " -> ";
            		curr = curr -> next.get;
        	}
    	}
};

