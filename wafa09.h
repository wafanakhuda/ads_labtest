#ifndef _INCLUDED_HEAP_
#define _INCLUDED_HEAP_

#include <stdint.h>
#define HEAP_MAX_SIZE 32

typedef struct _heap_ Heap;
typedef struct _node_ Node;
typedef struct _slist_ Slist;


struct  _heap_
{
	uint32_t	size;
	int32_t		data[HEAP_MAX_SIZE]	;
};

struct _node_{
	int32_t timestamp;
	int32_t aircraft_number;
	int32_t takeoff;
	int32_t landing;
	Node *next;
	int32_t data;
};

struct _slist_{
	Node *head;
	Node *tail;
	uint32_t length;
};

Heap 		heap_new(int32_t data[], uint32_t len);
Heap*		heap_sort(Heap *heap);
Heap*		heap_insert(Heap *heap, int32_t key);
Heap*		heap_test(Heap *heap);
int32_t		heap_get_max(Heap *heap);
int32_t		heap_extract_max(Heap *heap);
uint32_t	heap_size(Heap *heap);
Node* slist_new_node(int32_t element)
Slist* slist_add_head(Slist *list,int32_t element)
#endif