#include<iostream>

using namespace std;

class BST {

  struct node {
    int data;
    node * left;
    node * right;
  };

  node * root;

  node * makeEmpty(node * t) {
    if (t == NULL)
      return NULL; {
      makeEmpty(t -> left);
      makeEmpty(t -> right);
      delete t;
    }
    return NULL;
  }

  node * insert(int x, node * t) {
    if (t == NULL) {
      t = new node;
      t -> data = x;
      t -> left = t -> right = NULL;
    } else if (x < t -> data && (((t->data) - x) > 3))
      t -> left = insert(x, t -> left);
    else if (x > t -> data && ((x-(t->data)) > 3) )
      t -> right = insert(x, t -> right);
    return t;
  }

  node * findMin(node * t) {
    if (t == NULL)
      return NULL;
    else if (t -> left == NULL)
      return t;
    else
      return findMin(t -> left);
  }

  node * findMax(node * t) {
    if (t == NULL)
      return NULL;
    else if (t -> right == NULL)
      return t;
    else
      return findMax(t -> right);
  }

  node * remove(int x, node * t) {
    node * temp;
    if (t == NULL)
      return NULL;
    else if (x < t -> data)
      t -> left = remove(x, t -> left);
    else if (x > t -> data)
      t -> right = remove(x, t -> right);
    else if (t -> left && t -> right) {
      temp = findMin(t -> right);
      t -> data = temp -> data;
      t -> right = remove(t -> data, t -> right);
    } else {
      temp = t;
      if (t -> left == NULL)
        t = t -> right;
      else if (t -> right == NULL)
        t = t -> left;
      delete temp;
    }

    return t;
  }

  void inorder(node * t) {
    if (t == NULL)
      return;
    inorder(t -> left);
    cout << t -> data << " ";
    inorder(t -> right);
  }
  int maxHeight(node* t)
  {
    if (t == NULL)
            return 0;
        else {
         
            int lHeight = maxHeight(t->left);
            int rHeight = maxHeight(t->right);
    
            
            if (lHeight > rHeight)
                return (lHeight + 1);
            else
                return (rHeight + 1); 
        }
  }
  void LevelOrder(node* t)
    {
        int h = maxHeight(t);
        for (int i = 1; i <= h; i++)
            printCurrentLevel(t, i);
            
    }

 
   
    void printCurrentLevel(node* t, int level)
    {
        if (t == NULL)
            return;
        if (level == 1)
            cout << t->data << " ";
        else if (level > 1) {
            printCurrentLevel(t->left, level - 1);
            printCurrentLevel(t->right, level - 1);
        }
    }



  node * find(node * t, int x) {
    if (t == NULL)
      return NULL;
    else if (x < t -> data)
      return find(t -> left, x);
    else if (x > t -> data)
      return find(t -> right, x);
    else
      return t;
  }


  public:
    BST() {
      root = NULL;
    }

    ~BST() {
      root = makeEmpty(root);
    }

  void insert(int x) {
    root = insert(x, root);
  }

  void remove(int x) {
    root = remove(x, root);
  }

  void displayInorder() {
    inorder(root);
    cout << endl;
  }
  void displayLevelorder()
  {
    LevelOrder(root);
    cout<<endl;
  }

  void search(int x) {
    root = find(root, x);
  }
  void MaximumSoldiers(int x)
  {
    x=maxHeight(root);
    cout<<x-1;

  }
};

int main() {
  BST t;

  int i;

  while (true) {
    cin >> i;
    if (i == -1) break;
    t.insert(i);

  }
  t.MaximumSoldiers(i); 
  
  return 0;
}
