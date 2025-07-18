#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
  string val;
  Node *next;
  Node *prev;

  Node(string val)
  {
    this->val = val;
    this->next = NULL;
    this->prev = NULL;
  }
};

void insert_at_tail(Node *&head, Node *&tail, string val)
{
  Node *temp = tail;
  Node *newNode = new Node(val);

  if (head == NULL)
  {
    head = newNode;
    tail = newNode;
    return;
  }

  tail->next = newNode;
  newNode->prev = tail;
  tail = newNode;
}

// ////////////////////////////////////////////////

Node *visit(Node *head, Node *&recentNode, string word)
{
  Node *temp = head;
  bool flag = false;

  while ((temp != NULL) && (temp->val != "end"))
  {
    if (temp->val == word)
    {
      flag = true;
      recentNode = temp;
      return recentNode;
    }

    temp = temp->next;
  }

  if (flag == true)
  {
    cout << word << endl;
  }
  else
  {
    cout << "Not Available" << endl;
  }
  return recentNode;
}

// ////////////////////////////////////////////////

void print_forward(Node *head)
{
  Node *temp = head;
  while (temp != NULL)
  {
    cout << temp->val << " ";
    temp = temp->next;
  }
  cout << endl;
}

int main()
{
  Node *head = NULL;
  Node *tail = NULL;

  while (true)
  {
    string n;
    cin >> n;
    if (n == "end")
    {
      break;
    }

    insert_at_tail(head, tail, n);
  }
  print_forward(head);

  int t;
  cin >> t;
  cin.ignore();

  for (int i = 0; i < t; i++)
  {
    string s;
    getline(cin, s);

    stringstream s2(s);
    string wrd;
    s2 >> wrd;

    if (wrd == "visit")
    {
      s2 >> wrd;
      recentNode = visit(head, recentNode, wrd);
    }
    else if (wrd == "next")
    {
      cout << "Next" << endl;
    }
    else if (wrd == "prev")
    {
      cout << "prev" << endl;
    }
  }

  return 0;
}