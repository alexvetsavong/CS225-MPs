/**
 * @file avltree.cpp
 * Definitions of the binary tree functions you'll be writing for this lab.
 * You'll need to modify this file.
 */

template <class K, class V>
V AVLTree<K, V>::find(const K& key) const
{
    return find(root, key);
}

template <class K, class V>
V AVLTree<K, V>::find(Node* subtree, const K& key) const
{
    if (subtree == NULL)
        return V();
    else if (key == subtree->key)
        return subtree->value;
    else {
        if (key < subtree->key)
            return find(subtree->left, key);
        else
            return find(subtree->right, key);
    }
}

template <class K, class V>
void AVLTree<K, V>::rotateLeft(Node*& t)
{
    functionCalls.push_back("rotateLeft"); // Stores the rotation name (don't remove this)
    // your code here
    Node * T1 = NULL;
    Node * T2 = NULL;

    T1 = t->right;
    T2 = T1->left;

    T1->left = t;
    t->right = T2;
    t = T1;

    t->left->height = heightOrNeg1(t->left);
    t->right->height = heightOrNeg1(t->right);

    if (t->right->height > t->left->height) t->height = t->right->height + 1;
    else t->height = t->left->height + 1;
}

template <class K, class V>
void AVLTree<K, V>::rotateLeftRight(Node*& t)
{
    functionCalls.push_back("rotateLeftRight"); // Stores the rotation name (don't remove this)
    // Implemented for you:
    rotateLeft(t->left);
    rotateRight(t);
}

template <class K, class V>
void AVLTree<K, V>::rotateRight(Node*& t)
{
    functionCalls.push_back("rotateRight"); // Stores the rotation name (don't remove this)
    // your code here
    Node * T1 = NULL;
    Node * T2 = NULL;

    T1 = t->left;
    T2 = T1->right;

    T1->right = t;
    t->left = T2;
    t = T1;

    t->left->height = heightOrNeg1(t->left);
    t->right->height = heightOrNeg1(t->right);

    if (t->right->height > t->left->height) t->height = t->right->height + 1;
    else t->height = t->left->height + 1;
}

template <class K, class V>
void AVLTree<K, V>::rotateRightLeft(Node*& t)
{
    functionCalls.push_back("rotateRightLeft"); // Stores the rotation name (don't remove this)
    // your code here
    rotateRight(t->right);
    rotateLeft(t);
}

template <class K, class V>
void AVLTree<K, V>::rebalance(Node*& subtree)
{
    // your code here
    int balance = heightOrNeg1(subtree->left) - heightOrNeg1(subtree->right);

      if (balance > 1 && subtree->key < subtree->left->key)
          rotateRight(subtree);

      if (balance > 1 && subtree->key > subtree->left->key)
          rotateLeftRight(subtree);

      if (balance < -1 && subtree->key > subtree->left->key)
          rotateLeft(subtree);

      if (balance < -1 && subtree->key > subtree->left->key)
          rotateRightLeft(subtree);

    subtree->left->height = heightOrNeg1(subtree->left);
    subtree->right->height = heightOrNeg1(subtree->right);

    if (subtree->right->height > subtree->left->height) subtree->height = subtree->right->height + 1;
    else subtree->height = subtree->left->height + 1;
}

template <class K, class V>
void AVLTree<K, V>::insert(const K & key, const V & value)
{
    insert(root, key, value);
}

template <class K, class V>
void AVLTree<K, V>::insert(Node*& subtree, const K& key, const V& value)
{
    // your code here
    if(subtree == NULL) subtree = new Node(key,value);

    else if (key < subtree->key) {
      insert(subtree->left, key, value);
    }
    else if (key > subtree->key) {
      insert(subtree->right, key, value);
    }
    else {
      rebalance(subtree);
      return;
    }
}

template <class K, class V>
void AVLTree<K, V>::remove(const K& key)
{
    remove(root, key);
}

template <class K, class V>
void AVLTree<K, V>::remove(Node*& subtree, const K& key)
{
    if (subtree == NULL)
        return;

    if (key < subtree->key) {
        // your code here
        remove(subtree->left, key);
    } else if (key > subtree->key) {
        // your code here
        remove(subtree->right, key);
    } else {
        if (subtree->left == NULL && subtree->right == NULL) {
            /* no-child remove */
            // your code here
            delete subtree;
        } else if (subtree->left != NULL && subtree->right != NULL) {
            /* two-child remove */
            // your code here
        } else {
            /* one-child remove */
            // your code here
            if (subtree->left != NULL) {
              swap(subtree,subtree->left);
              delete subtree->left;
            } else if (subtree->right != NULL) {
              swap(subtree,subtree->right);
              delete subtree->right;
            }
        }
        // your code here
    }
    rebalance(subtree);
}
