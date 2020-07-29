# Circular Queue

## Problem

Design your implementation of the circular queue. The circular queue is a linear data structure in which the operations are performed based on FIFO (First In First Out) principle and the last position is connected back to the first position to make a circle. It is also called "Ring Buffer".

One of the benefits of the circular queue is that we can make use of the spaces in front of the queue. In a normal queue, once the queue becomes full, we cannot insert the next element even if there is a space in front of the queue. But using the circular queue, we can use the space to store new values.

## Logic

We have to design a queue on the based on a fixed size array. The most space efficient and logical implementation of the queue is the circular queue where you reuse the fixed array for all the normal queue operations. We design the circular queue with the help of 2 pointers -> head pointer & tail pointer. The head pointer keeps track of the first element in the queue and implements the operations such as front() and dequeue(). The tail pointer keeps track of the last element in the queue and implements the operations such as rear() and enqueue(). Instead of using pointers we could have even used integer indexes but using pointers clears our conceptual understanding of pointers and provides practice not messing up with them.

## Important Points

- Queue

- Two pointer method

- Static arrays
