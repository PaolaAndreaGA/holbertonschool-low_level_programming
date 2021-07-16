malloc
 C Dynamic memory management
 Defined in header <stdlib.h>
 void* malloc( size_t size );
 Allocates size bytes of uninitialized storage.

If allocation succeeds, returns a pointer that is suitably aligned for any object type with fundamental alignment.

If size is zero, the behavior of malloc is implementation-defined. For example, a null pointer may be returned. Alternatively, a non-null pointer may be returned; but such a pointer should not be dereferenced, and should be passed to free to avoid memory leaks.

malloc is thread-safe: it behaves as though only accessing the memory locations visible through its argument, and not any static storage.

A previous call to free or realloc that deallocates a region of memory synchronizes-with a call to malloc that allocates the same or a part of the same region of memory. This synchronization occurs after any access to the memory by the deallocating function and before any access to the memory by malloc. There is a single total order of all allocation and deallocation functions operating on each particular region of memory.

(since C11)
Parameters
size	-	number of bytes to allocate
Return value
On success, returns the pointer to the beginning of newly allocated memory. To avoid a memory leak, the returned pointer must be deallocated with free() or realloc().

On failure, returns a null pointer.