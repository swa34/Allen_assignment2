#ifndef SORTEDLINKEDLIST_H
#define SORTEDLINKEDLIST_H

#include "ItemType.h"
#include "ListNode.h"
#include <iostream>

using namespace std;

//struct ListNode{
//  ItemType info;
//  ListNode* next;
//};

class LinkedList{

  int length;
  ListNode* head;
  ListNode* current;
  ListNode* findNode(ItemType &item);
  void getNextNode(); 
  
 public:
  LinkedList();
  ~LinkedList();
  int lengthIs()const;
  void retrieveItem(ItemType &item, bool &found);
  void insertItem(ItemType &item);
  void deleteItem(ItemType &item);
  void resetList();
  void getNextItem(ItemType &item);
  void makeEmpty();
  void print();
};


#endif
