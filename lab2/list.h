#ifndef list_h
#define list_h

typedef struct pas{
	char* id;
	int ta;
	int ts;
	struct pas* next;
}lpas;

typedef struct list{
	int lengh;
	lpas* first;
}list;

list* new_list(list* l);

void delete_list(list* l);

#endif //list_h
