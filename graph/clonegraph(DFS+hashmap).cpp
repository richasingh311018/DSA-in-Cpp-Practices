#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    vector<Node*> neighbors;

    Node(int value) {
        val = value;
    }
};

unordered_map<Node*, Node*> mp;

Node* cloneGraph(Node* node) {
    if (node == nullptr)
        return nullptr;

    if (mp.count(node))
        return mp[node];

    Node* copy = new Node(node->val);
    mp[node] = copy;

    for (Node* neighbor : node->neighbors) {
        copy->neighbors.push_back(cloneGraph(neighbor));
    }

    return copy;
}

int main() {
    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(3);

    a->neighbors.push_back(b);
    b->neighbors.push_back(a);

    b->neighbors.push_back(c);
    c->neighbors.push_back(b);

    Node* copy = cloneGraph(a);

    cout << "Cloned graph starting node: " << copy->val << endl;
    cout << "Neighbors of cloned node: ";

    for (Node* neighbor : copy->neighbors) {
        cout << neighbor->val << " ";
    }

    return 0;
}