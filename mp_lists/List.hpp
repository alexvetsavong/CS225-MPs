/**
 * @file list.cpp
 * Doubly Linked List (MP 3).
 */

template <class T>
List<T>::List() {
  // @TODO: graded in MP3.1
    head_ = NULL;
    tail_ = NULL;
    length_ = 0;
}

/**
 * Returns a ListIterator with a position at the beginning of
 * the List.
 */
template <typename T>
typename List<T>::ListIterator List<T>::begin() const {
  // @TODO: graded in MP3.1
  return List<T>::ListIterator(head_);
}

/**
 * Returns a ListIterator one past the end of the List.
 */
template <typename T>
typename List<T>::ListIterator List<T>::end() const {
  // @TODO: graded in MP3.1
  return List<T>::ListIterator(NULL);
}


/**
 * Destroys all dynamically allocated memory associated with the current
 * List class.
 */
template <typename T>
void List<T>::_destroy() {
  /// @todo Graded in MP3.1
  if  (head_ == NULL || tail_ == NULL) return;
  ListNode* curr = head_;
  while (curr->next != NULL){
    curr = curr->next;
    delete curr->prev;
  }
  delete tail_;
}

/**
 * Inserts a new node at the front of the List.
 * This function **SHOULD** create a new ListNode.
 *
 * @param ndata The data to be inserted.
 */
template <typename T>
void List<T>::insertFront(T const & ndata) {
  /// @todo Graded in MP3.1
  ListNode * newNode = new ListNode(ndata);
  newNode -> next = head_;
  newNode -> prev = NULL;

  if (head_ != NULL) {
    head_ -> prev = newNode;
  }

  if (tail_ == NULL) {
    tail_ = newNode;
  }

  head_ = newNode;
  length_++;

}

/**
 * Inserts a new node at the back of the List.
 * This function **SHOULD** create a new ListNode.
 *
 * @param ndata The data to be inserted.
 */
template <typename T>
void List<T>::insertBack(const T & ndata) {
  /// @todo Graded in MP3.1
  ListNode * newNode = new ListNode(ndata);
  newNode -> next = NULL;
  newNode -> prev = tail_;

  if (tail_ != NULL) {
    tail_ -> next = newNode;
  }

  if (head_ == NULL) {
    head_ = newNode;
  }

  tail_ = newNode;
  length_++;

}

/**
 * Helper function to split a sequence of linked memory at the node
 * splitPoint steps **after** start. In other words, it should disconnect
 * the sequence of linked memory after the given number of nodes, and
 * return a pointer to the starting node of the new sequence of linked
 * memory.
 *
 * This function **SHOULD NOT** create **ANY** new List or ListNode objects!
 *
 * This function is also called by the public split() function located in
 * List-given.hpp
 *
 * @param start The node to start from.
 * @param splitPoint The number of steps to walk before splitting.
 * @return The starting node of the sequence that was split off.
 */
template <typename T>
typename List<T>::ListNode * List<T>::split(ListNode * start, int splitPoint) {
  /// @todo Graded in MP3.1
  if (start == NULL) return NULL;

  ListNode * curr = start;

  for (int i = 0; i < splitPoint && curr != NULL; i++) {
    curr = curr->next;
  }

  if (curr != NULL) {
    this->tail_ = curr->prev;
    curr->prev->next = NULL;
    curr->prev = NULL;
  }

  return curr;
}

/**
 * Modifies the List using the waterfall algorithm.
 * Every other node (starting from the second one) is removed from the
 * List, but appended at the back, becoming the new tail. This continues
 * until the next thing to be removed is either the tail (**not necessarily
 * the original tail!**) or NULL.  You may **NOT** allocate new ListNodes.
 * Note that since the tail should be continuously updated, some nodes will
 * be moved more than once.
 */
template <typename T>
void List<T>::waterfall() {
  /// @todo Graded in MP3.1
  ListNode * curr = head_;
  ListNode * movedData = NULL;
  while(curr->next != tail_){
    movedData = curr->next;
    curr->next = curr->next->next;
    curr->next->prev = curr;

    tail_->next = movedData;
    movedData->next = NULL;
    movedData->prev = tail_;

    tail_ = movedData;

    curr = curr->next;
  }
}

/**
 * Reverses the current List.
 */
template <typename T>
void List<T>::reverse() {
  reverse(head_, tail_);
}

/**
 * Reverses the current List except for the beginning
 * and end. Use dummy parameter for calling the function.
 */
template <typename T>
void List<T>::reverse(int n) {
  reverse(head_->next, tail_->prev);
}

template <typename T>
void List<T>::reverseAsymmetric() {
  reverse(head_, head_->next->next);
}


/**
 * Helper function to reverse a sequence of linked memory inside a List,
 * starting at startPoint and ending at endPoint. You are responsible for
 * updating startPoint and endPoint to point to the new starting and ending
 * points of the rearranged sequence of linked memory in question.
 *
 * @param startPoint A pointer reference to the first node in the sequence
 *  to be reversed.
 * @param endPoint A pointer reference to the last node in the sequence to
 *  be reversed.
 */
template <typename T>
void List<T>::reverse(ListNode *& startPoint, ListNode *& endPoint) {
  /// @todo Graded in MP3.2
  /* out-of-date implementation of reverse */

  ListNode * beforeStart = startPoint->prev;
  ListNode * afterEnd = endPoint->next;

  // startPoint->prev = NULL;
  // endPoint->next = NULL;

  ListNode * current = startPoint;
  ListNode * temp = NULL;

  while (current != afterEnd){
    temp = current->next;
    current->next = current->prev;
    current->prev = temp;
    current = current->prev;
  }

  temp = endPoint;
  endPoint = startPoint;
  startPoint = temp;

  startPoint->prev = beforeStart;
  if (beforeStart != NULL) beforeStart->next = startPoint;
  endPoint->next = afterEnd;
  if (afterEnd != NULL) afterEnd->prev = endPoint;
}

/**
 * Reverses blocks of size n in the current List. You should use your
 * reverse( ListNode * &, ListNode * & ) helper function in this method!
 *
 * @param n The size of the blocks in the List to be reversed.
 */
template <typename T>
void List<T>::reverseNth(int n) {
  /// @todo Graded in MP3.2
  ListNode * start = head_;
  ListNode * end = head_;

  if (n >= length_) {
    reverse(head_, tail_);
    return;
  }

  else {
    while (1){
      for (int i = 0; i < n; ++i){
        if (end->next == NULL) break;
        end = end->next;
      }
      reverse(start, end);
      start = end->next;
      if (start == NULL) break;
    }
  }
  return;
}


/**
 * Merges the given sorted list into the current sorted list.
 *
 * @param otherList List to be merged into the current list.
 */
template <typename T>
void List<T>::mergeWith(List<T> & otherList) {
    // set up the current list
    head_ = merge(head_, otherList.head_);
    tail_ = head_;

    // make sure there is a node in the new list
    if (tail_ != NULL) {
        while (tail_->next != NULL)
            tail_ = tail_->next;
    }
    length_ = length_ + otherList.length_;

    // empty out the parameter list
    otherList.head_ = NULL;
    otherList.tail_ = NULL;
    otherList.length_ = 0;
}

/**
 * Helper function to merge two **sorted** and **independent** sequences of
 * linked memory. The result should be a single sequence that is itself
 * sorted.
 *
 * This function **SHOULD NOT** create **ANY** new List objects.
 *
 * @param first The starting node of the first sequence.
 * @param second The starting node of the second sequence.
 * @return The starting node of the resulting, sorted sequence.
 */
template <typename T>
typename List<T>::ListNode * List<T>::merge(ListNode * first, ListNode* second) {
  /// @todo Graded in MP3.2
  if (first == NULL && second == NULL) return NULL;
  if (first != NULL && second == NULL) return first;
  if (first == NULL && second != NULL) return second;

  ListNode dummy;

  ListNode * third = &dummy;
  ListNode * newNode = NULL;

  while (1){
    if (first == NULL){
      third->next = second;
      second->prev = third;
      break;
    }
    else if (second == NULL){
      third->next = first;
      first->prev = third;
      break;
    }
    if (first->data < second->data){
      newNode = first;
      first = first->next;

      newNode->next = NULL;
      newNode->prev = NULL;

      third->next = newNode;
      third->next->prev = third;
    }
    else {
      newNode = second;
      second = second->next;

      newNode->next = NULL;
      newNode->prev = NULL;

      third->next = newNode;
      third->next->prev = third;
    }
    third = third->next;
  }

  return (dummy.next);
}

/**
 * Sorts a chain of linked memory given a start node and a size.
 * This is the recursive helper for the Mergesort algorithm (i.e., this is
 * the divide-and-conquer step).
 *
 * Called by the public sort function in List-given.hpp
 *
 * @param start Starting point of the chain.
 * @param chainLength Size of the chain to be sorted.
 * @return A pointer to the beginning of the now sorted chain.
 */
template <typename T>
typename List<T>::ListNode* List<T>::mergesort(ListNode * start, int chainLength) {
  /// @todo Graded in MP3.2
  if (chainLength == 1) return start;

  ListNode * cut = split(start, chainLength/2);

  start = mergesort(start, chainLength/2);
  cut = mergesort(cut, chainLength - chainLength/2);
  start = merge(start, cut);
  return start;
}
