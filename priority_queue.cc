#include "priority_queue.h"

template <typename T>
templatePriorityQueue<T>::templatePriorityQueue(){
}

template <typename T>
templatePriorityQueue<T>::~templatePriorityQueue(){
}

template <typename T>
bool templatePriorityQueue<T>::empty() const{
  return storage.empty();
}

template <typename T>
int templatePriorityQueue<T>::size() {
  return storage.size();
}

template <typename T>
const T& templatePriorityQueue<T>::top() const{
  return storage.top();
}

template <typename T>
void templatePriorityQueue<T>::pop(){
  storage.pop();
}

template <typename T>
void templatePriorityQueue<T>::push(const T& val){
  storage.push(val);
}
