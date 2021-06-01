// CPP program to implement Fila using
// two stacks with costly enfileira()
#include <iostream>
#include <stack>

using namespace std;

class Fila {
    public:
	stack<int> p1, p2;

	void enfileira(int x)
	{
		// Move all elements from p1 to p2
		while (!p1.empty()) {
			p2.push(p1.top());
			p1.pop();
		}

		// Push item into p1
		p1.push(x);

		// Push everything back to p1
		while (!p2.empty()) {
			p1.push(p2.top());
			p2.pop();
		}
	}

	// Dequeue an item from the queue
	int desinfileira()
	{
		// if first stack is empty
		if (p1.empty()) {
			cout << "Q está vazia";
			exit(0);
		}

		// Return top of p1
		int x = p1.top();
		p1.pop();
		return x;
	}
};

// Driver code
int main()
{
	Fila f;
	f.enfileira(1);
	f.enfileira(2);
	f.enfileira(3);
    f.enfileira(4);

	cout << f.desinfileira() << '\n';
	cout << f.desinfileira() << '\n';
	cout << f.desinfileira() << '\n';
    cout << f.desinfileira() << '\n';

	return 0;
}
