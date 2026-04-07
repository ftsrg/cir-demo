struct Node {
  int value;
  Node *next;
};

int head_value(Node *head) {
  if (!head) return -1;
  return head->value;
}
