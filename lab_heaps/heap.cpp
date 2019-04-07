
/**
 * @file heap.cpp
 * Implementation of a heap class.
 */

template <class T, class Compare>
size_t heap<T, Compare>::root() const
{
    // @TODO Update to return the index you are choosing to be your root.
    return 0;
}

template <class T, class Compare>
size_t heap<T, Compare>::leftChild(size_t currentIdx) const
{
    // @TODO Update to return the index of the left child.
    return (2 * currentIdx) + 1;
}

template <class T, class Compare>
size_t heap<T, Compare>::rightChild(size_t currentIdx) const
{
    // @TODO Update to return the index of the right child.
    return (2 * currentIdx) + 2;
}

template <class T, class Compare>
size_t heap<T, Compare>::parent(size_t currentIdx) const
{
    // @TODO Update to return the index of the parent.
    if (currentIdx == 0) return T();

    else if (currentIdx % 2 == 0) return (currentIdx - 2) / 2;
    else return (currentIdx - 1) / 2;
}

template <class T, class Compare>
bool heap<T, Compare>::hasAChild(size_t currentIdx) const
{
    // @TODO Update to return whether the given node has a child
    if (2*currentIdx + 1 < _elems.size()) return true;
    if (2*currentIdx + 2 < _elems.size()) return true;
    return false;
}

template <class T, class Compare>
size_t heap<T, Compare>::maxPriorityChild(size_t currentIdx) const
{
    // @TODO Update to return the index of the child with highest priority
    ///   as defined by higherPriority()
    size_t leftChild_idx = 2*currentIdx + 1;
    size_t rightChild_idx = 2*currentIdx + 2;

    if (higherPriority(_elems[leftChild_idx], _elems[rightChild_idx]))
      return leftChild_idx;
    else
      return rightChild_idx;
}

template <class T, class Compare>
void heap<T, Compare>::heapifyDown(size_t currentIdx)
{
    // @TODO Implement the heapifyDown algorithm.
    if (!hasAChild(currentIdx))
      return;

    size_t leftChild_idx = 2*currentIdx + 1;
    size_t rightChild_idx = 2*currentIdx + 2;

    if (_elems[currentIdx] < _elems[leftChild_idx] &&
        _elems[currentIdx] < _elems[rightChild_idx])
      return;

    if (higherPriority(_elems[leftChild_idx], _elems[rightChild_idx])) {
      std::swap(_elems[currentIdx], _elems[leftChild_idx]);
      heapifyDown(leftChild_idx);
    }

    else {
      std::swap(_elems[currentIdx], _elems[rightChild_idx]);
      heapifyDown(rightChild_idx);
    }
}

template <class T, class Compare>
void heap<T, Compare>::heapifyUp(size_t currentIdx)
{
    if (currentIdx == root())
        return;
    size_t parentIdx = parent(currentIdx);
    if (higherPriority(_elems[currentIdx], _elems[parentIdx])) {
        std::swap(_elems[currentIdx], _elems[parentIdx]);
        heapifyUp(parentIdx);
    }
}

template <class T, class Compare>
heap<T, Compare>::heap()
{
    // @TODO Depending on your implementation, this function may or may
    ///   not need modifying
}

template <class T, class Compare>
heap<T, Compare>::heap(const std::vector<T>& elems)
{
    // @TODO Construct a heap using the buildHeap algorithm
    _elems = elems;
}

template <class T, class Compare>
T heap<T, Compare>::pop()
{
    // @TODO Remove, and return, the element with highest priority
    return T();
}

template <class T, class Compare>
T heap<T, Compare>::peek() const
{
    // @TODO Return, but do not remove, the element with highest priority
    return _elems[root()];
}

template <class T, class Compare>
void heap<T, Compare>::push(const T& elem)
{
    // @TODO Add elem to the heap
}

template <class T, class Compare>
void heap<T, Compare>::updateElem(const size_t & idx, const T& elem)
{
    // @TODO In-place updates the value stored in the heap array at idx
    // Corrects the heap to remain as a valid heap even after update
}


template <class T, class Compare>
bool heap<T, Compare>::empty() const
{
    // @TODO Determine if the heap is empty
    return true;
}

template <class T, class Compare>
void heap<T, Compare>::getElems(std::vector<T> & heaped) const
{
    for (size_t i = root(); i < _elems.size(); i++) {
        heaped.push_back(_elems[i]);
    }
}
