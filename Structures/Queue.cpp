class Queue {
private:
	NodeQueue* front;
	NodeQueue* rear;
public:
	void enqueue(NodeQueue* NodeToQueue) {

	};
	void dequeue() {

	};
};

class NodeQueue {
private:
	int value;
	NodeQueue* next;
public:
	NodeQueue() {
		next = nullptr;
		value = 0;
	};
	NodeQueue* GetNext() {
		return next;
	};
	void SetNext(NodeQueue* NextNode) {
		next = NextNode;
	};
	int GetValue() {
		return value;
	};
	void SetValue(int v) {
		value = v;
	};

};