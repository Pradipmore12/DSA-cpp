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
int floyedCheck(Node *&head)
{
    Node *slow = head;
    Node *fast = head;

    while (fast != NULL && fast->next != NULL && slow != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
        if (slow == fast)
        {
            slow = head;
            while (slow != NULL)
            {
                slow = slow->next;
                fast = fast->next;
                if (slow == fast)
                {
                    return slow->data;
                }
            }
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
    node5->next = node2;
    // print(head);
    if (floyedCheck(head) == 0)
    {
        cout << "loop does not exist" << endl;
    }
    else
    {
        cout << "loop Exists and starts with :" << floyedCheck(head) << endl;
    }

    return 0;
}