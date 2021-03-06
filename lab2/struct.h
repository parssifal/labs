#ifndef struct_h
#define struct_h

#include "list.h"

//QUEUE
typedef struct passenger{
	char* id;
	int ta;
	int ts;
	struct passenger* next;
}pas;

typedef struct stand{
	int lengh;
	int time;
	pas* pas;
	pas* first;
	pas* last;
}stand;

typedef struct queue{
	int sts;
	stand* st;
}queue;

int do_everything_list(queue* q, list* l);

void push_struct(queue* q, lpas* pq, int time);

void pop_struct(queue* q, int time);

void read_struct(queue* q, int time);

void delete_struct(queue* q);

void init_struct(queue* q);

#endif // struct_h
