#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/socket.h>
#include <vector>

#include "enums.h"

/** 
 * Forward declaration of Listener class
 */ 
class Listener; 

/** 
 * Forward declaration of Event 
 */ 

class Event;

typedef void (*Callback)(Event*);

/** 
 * Every connection is represented as Stream 
 * which is LinkedList 
 */ 
class Stream {
public:
	int state; 
	int flags; 
	int socket_fd; 
	int port; 
	int bytes_sent; 
	int bytes_received; 
	double last_activity; 
	double timeout; 
	std::vector<Listener*> listeners;
	Stream* next; 
};


class Listener {
 public:
 	int event; 
 	Callback callback; 
 	void* data; 
};

class Event {
 public:
 	int type; 
 	void* udata; 
 	Stream* stream; 
 	Stream* remote; 
 	const char* msg; 
 	char* data;
 	int size;  
};




int main(int argc, char* argv[]) {

	return 0;
}