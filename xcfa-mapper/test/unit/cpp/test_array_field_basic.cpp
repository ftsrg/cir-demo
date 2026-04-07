struct Buffer {
  int data[4];
};

int first_elem(Buffer *b) {
  return b->data[0];
}
