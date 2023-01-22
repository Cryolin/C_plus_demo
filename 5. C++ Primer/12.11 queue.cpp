// queue.cpp -- Queue and Customer methods
#include "12.10 queue.h"
#include <cstdlib> // (or stdlib.h) for rand()
// Queue methods
Queue::Queue(int qs) : qsize(qs)
{
    front = rear = NULL;    // or nullptr
    items = 0;
}
// 析构函数：把原来开辟的内存空间都释放掉，队列不为空的时候解散队列
Queue::~Queue()
{
    Node* temp;
    while (front != NULL)   // while queue is not yet empty
    {
        temp = front;       // save address of front item
        front = front->next;// reset pointer to next item
        delete temp;        // delete former front
    }
}
bool Queue::isempty() const
{
    return items == 0;
}
bool Queue::isfull() const
{
    return items == qsize;
}
int Queue::queuecount() const
{
    return items;
}
// Add item to queue
bool Queue::enqueue(const Item& item)
{
    if (isfull())
        return false;
    Node* add = new Node;  // create node，存放新的队列节点
    // on failure, new throws std::bad_alloc exception
    add->item = item;       // set node pointers
    add->next = NULL;       // or nullptr;队列的最后是空的
    items++;                // 节点个数++
    if (front == NULL)      // if queue is empty,
        front = add;        // place item at front
    else
        rear->next = add;   // else place at rear
    rear = add;             // have rear point to new node
    return true;
}
// Place front item into item variable and remove from queue
bool Queue::dequeue(Item& item)
{
    if (front == NULL)
        return false;
    item = front->item;     // set item to first item in queue
    items--;                // 节点个数--
    Node* temp = front;    // save location of first item
    front = front->next;    // reset front to next item
    delete temp;            // delete former first item
    if (items == 0)
        rear = NULL;
    return true;
}
// customer method
// when is the time at which the customer arrives
// the arrival time is set to when and the processing
// time set to a random value in the range 1 - 3
void Customer::set(long when)
{
    processtime = std::rand() % 3 + 1;  // 记录操作了多长时间
    arrive = when;  // 记录何时开始操作
}