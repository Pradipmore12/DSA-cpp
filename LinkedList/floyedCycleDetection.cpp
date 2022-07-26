#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
bool floyedCheck(Node *&head)
{
    Node *slow = head;
    Node *fast = head;

    while (fast != NULL && fast->next != NULL && slow != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
        if (slow == fast)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    Node *head = new Node(3);
    Node *node1 = new Node(4);
    Node *node2 = new Node(5);
    Node *node3 = new Node(6);
    Node *node4 = new Node(7);
    Node *node5 = new Node(8);
    head->next = node1;
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    node5->next = node3;
    // print(head);
    floyedCheck(head) ? cout << "loop exist" << endl : cout << "loop not exist" << endl;

    return 0;
}