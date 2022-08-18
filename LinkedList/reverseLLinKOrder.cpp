#include <bits/stdC++.h>
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
void insertAtTail(Node *&head, Node *&tail, int data)
{
    Node *temp = new Node(data);
    if (head == NULL || tail == NULL)
    {
        head = temp;
        tail = temp;
    }
    else
    {
        tail->next = temp;
        tail = temp;
    }
}
Node *reverseOrderK(Node *&head, int k)
{
    Node *prev = NULL;
    Node *curr = head;
    Node *next = NULL;
    int count = 0;
    while (head != NULL && count < k)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }

    if (head != NULL)
    {
        head->next = reverseOrderK(next, k);
    }
    return prev;
}
int main()
{

    Node *head = NULL;
    Node *tail = NULL;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int data;
        cin >> data;
        insertAtTail(head, tail, data);
    }
    print(head);
    cout << endl
         << "enter K" << endl;
    int k;
    cin >> k;
    Node *reverse = reverseOrderK(head, k);
    print(reverse);

    return 0;
}