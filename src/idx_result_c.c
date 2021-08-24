#include <assert.h>

#include "idx_memory_c.h"
#include "idx_result_c.h"

void idx_result_free(struct idx_result result) {
	switch(result.type) {
		case IDX_MEMORY:
			idx_memory_free(result.memory);
		case IDX_FILE:
			break;
		case IDX_ELEMENT:
			idx_element_free(result.element);
	}
}

