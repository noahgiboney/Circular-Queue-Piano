#include "CircleQueue.h"

bool CircleQueue::isFull() {

	if (front == 0 && back == SIZE - 1) { // if front points to 0 and back points to last element then queue is full
		return true; 
	}
	if (front == back + 1) { // if front and back are equal queue is full
		return true; 
	}
	else {
		return false; //if above conditions are not met then queue is not full
	}
}
bool CircleQueue::isEmpty() {

	if (front == -1) { //if no elemets are pushed then front is still -1 then queue is empty
		return true; 
	}
	else {
		return false; //if above conditions are not met then queue is full
	}
}

void CircleQueue::push(char element) {

	if (isFull()) { //return if queue is full
		return; 
	}
	if (front == -1) { //if front is indexed at -1, move it 0
		front = 0; 
	}
	back = (back + 1) % SIZE; //move back index
	array[back] = element; // push the element at back of array
}

char CircleQueue::pop() {

	if (isEmpty()) { // first see if queue is empty, if it is return garbage
		return(-1);
	}
	else {
		element = array[front]; //access the element at front index
	}
	if (front == back) { // if front and back point to the same index, then set indecies to -1
		front = -1; 
		back = -1;
	}
	else {
		front = (front + 1) % SIZE; //move front index
	}
	return element; //return last element in queue
}