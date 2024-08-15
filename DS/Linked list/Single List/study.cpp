#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) v.begin(), v.end()
#define Bedo     \
    cin.tie(0);  \
    cout.tie(0); \
    ios::sync_with_stdio(false);
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
const long double PI = acos(-1.0);

struct Node {
    int val;
    Node *next;
    Node() : val(0), next(nullptr) {}
    Node(int x) : val(x), next(nullptr) {}
    Node(int x, Node *next) : val(x), next(next) {}
};

class LinkedList {
private:
    Node *head{};
    Node *tail{};
    int size = 0;
    vector<Node *> debug_data; // add/remove nodes you use

public:
    void print() {
        for (Node *cur = head; cur; cur = cur->next) {
            cout << cur->val << " ";
        }
        cout << endl;
    }

    void add(int n) {
        Node *node = new Node(n);
        Node *nhead = head;
        if (nhead == nullptr) {
            head = node;
        } else {
            Node *prev = head;
            head = head->next;
            while (head != nullptr) {
                head = head->next;
                prev = prev->next;
            }
            prev->next = node;
            head = nhead;
        }
    }

    void insert(int val) {
        Node *node = new Node(val);
        if (head == nullptr) {
            head = node;
            tail = node;
        } else {
            tail->next = node;
            tail = node;
        }
        size++;
    }

    int get_nth(int n) {
        Node *thead = head;
        int cnt = 1;
        while (thead != nullptr) {
            if (cnt++ == n)
                return thead->val;
            thead = thead->next;
        }
        return -1;
    }

    int search(int n) {
        int cnt = 0;
        for (Node *cur = head; cur; cur = cur->next, cnt++) {
            if (cur->val == n)
                return cnt;
        }
        return -1;
    }

    void debug_verify_data_integrity() {
        if (size == 0) {
            assert(head == nullptr);
            assert(tail == nullptr);
        } else {
            assert(head != nullptr);
            assert(tail != nullptr);
            if (size == 1)
                assert(head == tail);
            else
                assert(head != tail);
            assert(!tail->next);
        }
        int len = 0;
        for (Node *cur = head; cur; cur = cur->next, len++)
            assert(len < 10000); // Consider infinite cycle?
        assert(size == len);
        assert(size == (int)debug_data.size());
    }

    void insert_front(int n) {
        Node *node = new Node(n);
        if (head == nullptr) {
            head = node;
            tail = node;
        } else {
            node->next = head;
            head = node;
        }
        size++;
    }

    void delete_front() {
        if (head == nullptr) return;
        Node *node = head;
        head = head->next;
        delete node;
        size--;
    }

    int get_nth_back(int n) {
        int nn = size - n + 1;
        Node *node = head;
        int cnt = 1;
        while (node != nullptr) {
            if (cnt++ == nn)
                return node->val;
            node = node->next;
        }
        return -1;
    }

    bool is_same(const LinkedList &l2h) {
        Node *l1 = head;
        Node *l2 = l2h.head;
        while (l1 != nullptr && l2 != nullptr) {
            if (l1->val != l2->val)
                return 0;
            l1 = l1->next;
            l2 = l2->next;
        }
        // Check if both lists reached the end
        if (l1 == nullptr && l2 == nullptr)
            return 1;
        else
            return 0;
    }

    ~LinkedList() {
        Node *current = head;
        while (current != nullptr) {
            Node *next = current->next;
            delete current;
            current = next;
        }
        head = nullptr;
        tail = nullptr;
    }

    void delete_first() {
        if (head) {
            // Move to next in the list and remove current
            Node *cur = head;
            head = head->next;
            delete_node(cur);

            if (!head) // data integrity!
                tail = nullptr;
            debug_verify_data_integrity();
        }
    }

    void delete_nth_node(int n) {
        if (n < 1 || n > size)
            cout << "Error. No such nth node\n";
        else if (n == 1)
            delete_first();
        else {
            // Connect the node before nth with node after nth
            Node *before_nth = head;
            for (int i = 1; i < n - 1; ++i) {
                before_nth = before_nth->next;
            }
            Node *nth = before_nth->next;
            before_nth->next = nth->next;
            if (nth == tail) {
                tail = before_nth;
            }
            delete_node(nth);
        }
    }

    void delete_node(Node *node) {
        --size;
        delete node;
    }
};

void print(Node *head) {
    while (head != nullptr) {
        cout << head->val << " ";
        head = head->next;
    }
}

void printrec(Node *head) {
    if (head == nullptr)
        return;
    printrec(head->next);
    cout << head->val << " ";
}

void find(Node *head, int num) {
    while (head != nullptr) {
        if (head->val == num) {
            cout << "i found it";
            return;
        }
        head = head->next;
    }
    cout << "not found ..";
}

void solve() {
    LinkedList l1, l2;
    l1.insert(1);
    l1.insert(2);
    l1.insert(3);
    l1.insert(4);
    l1.insert(5);
    l1.insert(6);
    l1.print();

    l1.delete_nth_node(5);
    l1.print();
    // Insert elements into l1
    // l1.insert(1);
    // l1.insert(2);
    // l1.insert(3);
    // l1.insert(4);

    // // Insert elements into l2 (with one less element)
    // l2.insert(1);
    // l2.insert(2);
    // l2.insert(3);
    // l2.insert(4);

    // Check if l1 and l2 are the same by passing l2.head
    // cout << "Are l1 and l2 the same? " << (l1.is_same(l2) ? "Yes" : "No") << endl;
    // LinkedList list;
    // list.insert(6);
    // list.insert(10);
    // list.insert(8);
    // list.insert(15);
    // list.insert(20);
    // list.insert_front(2);
    // list.insert_front(1);
    // // list.delete_front();
    // list.print();
    // cout << list.search(15) << endl;
    // cout << list.get_nth_back(2) << endl;
    // // Node* node1 = new Node(6);
    // Node* node2 = new Node(10);
    // Node* node3 = new Node(8);

    // node1 -> next = node2;
    // node2 -> next = node3;
    // node3 -> next = nullptr;
    // printrec(node1);
    // cout << endl;
    // find(node1 , 0);
}

int main() {
    Bedo int tt = 1;
    // cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}
