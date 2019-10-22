#include <stdint.h>
#include <assert.h>
#include "wafa09.h"
#include<stdio.h>

void test_sort( int32_t data[], uint32_t len) 
{
	uint32_t idx;
	for (idx = 1; idx <= len; ++idx) {
		assert (data[idx] <= data[idx+1]);		
	}
}

void test_heap()
{

	int32_t timestamp={0130,0300,0500,1000};
	int32_t aircraft_number={1,2,3,4};
	int32_t timestamp={0230,0400,0700,1100};
	int32_t timestamp={0230,0340,0900,1400};
	int32_t data[] = { 1,2,3,4};
	Heap heap = heap_new(data, 4);	
	heap_insert(&heap, ;
	
	heap_sort(&heap);
	test_sort(heap.data, 4;

}

int main()
{
	test_heap();
	return 0;
}