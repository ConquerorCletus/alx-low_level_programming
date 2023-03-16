# 0x0B: More Malloc and Free
## Calloc
**calloc** - clear allocation
This is a function in the stdlib.h that assigns multiple blocks of the same size.

####
	(void *)calloc(n, size_t)

## Realloc
**realloc** -reallocation
This is also a function defined un the stdlib.h that is used to change size of memory block without losing old data.

####
	(void *)realloc(void *ptr, size_t newsize)
