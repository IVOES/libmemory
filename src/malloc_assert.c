/*
 * Copyright © 2019 Embedded Artistry LLC.
 * License: MIT. See LICENSE file for details.
 */

#include <assert.h>
#include <malloc.h>
#include <memory.h>

#pragma mark - APIs -

__attribute__((weak)) void malloc_init(void)
{
	assert(0 && "malloc is not supported.");
}

void* malloc(size_t size)
{
	assert(0 && "malloc is not supported");
	return NULL;
}

void free(void* ptr)
{
	assert(0 && "malloc is not supported");
	while(1)
		;
}
