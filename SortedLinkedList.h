#include "ItemType.h"
#include "ListNode.h"

class SortedLinkedList {
 public:

  SortedLinkedList();
  ~SortedLinkedList();
  int length() const;
  void insertItem(ItemType item);
  void deleteItem(ItemType item);
  void deleteItem(int index);
  int searchItem(ItemType item);
  ItemType searchItem(int index);
  ItemType GetNextItem();
  void ResetList();
  void DeleteAlternateNodes(ItemType item);
  void printList();
 // ListNode *merge(ListNode *l1, ListNode *l2)
  void Merge(SortedLinkedList first, SortedLinkedList second);
  //void Merge(ItemType item);
 // ListNode* Merge(ListNode* l1, ListNode* l2);

 private:
  ListNode* head;
  ListNode* currentPos;
  int lengthValue;

};