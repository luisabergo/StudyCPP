#include <iostream>
class NodeStack;

class NodeStack {
private:
	NodeStack* next;
	int value;
public:
	NodeStack() {
		next = nullptr;
		value = 0;
	};
	NodeStack* GetNext() {
		return next;
	};
	void SetNext(NodeStack* NextNode) {
		next = NextNode;
	};
	int GetValue() {
		return value;
	};
	void SetValue(int v) {
		value = v;
	};
};

class Stack {
private:
	int size;
	NodeStack* top;
public:
	Stack() {
		this->size = 0;
		top = nullptr;
	};
	void push(NodeStack* NodeToPush) {
		if (isEmpty()) {
			top = NodeToPush;
			size = 1;
		}
		else{
			NodeToPush->SetNext(top);
			top = NodeToPush;
			size++;
		}
	};
	void pop() {
		NodeStack* nextOfStack;
		if (!isEmpty()) {
			nextOfStack = top->GetNext();
			delete top;
			top = nextOfStack;
		}
		else {
			std::cout << "Error, trying to delete node in an empty stack" << std::endl;
		}
	};
	NodeStack* GetTop() {
		return top;
	};
	bool isEmpty() {
		if (this->top == nullptr) {
			return true;
		}
		else {
			return false;
		}
	};
	int getSize() {
		return size;
	};
	void print() {
		NodeStack* p = top;
		while (p != nullptr) {
			std::cout << p->GetValue() << std::endl;
			p = p->GetNext();
		}
	};
	void clear() {
		NodeStack* p = top;
		NodeStack* aux = top->GetNext();
		while (p != nullptr) {
			aux = p->GetNext();
			delete p;
			p = aux;
		}
	}
};

