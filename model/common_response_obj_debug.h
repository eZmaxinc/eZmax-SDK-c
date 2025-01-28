/*
 * common_response_obj_debug.h
 *
 * This is a generic debug object that is returned by all API requests
 */

#ifndef _common_response_obj_debug_H_
#define _common_response_obj_debug_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct common_response_obj_debug_t common_response_obj_debug_t;

#include "common_response_obj_sql_query.h"



typedef struct common_response_obj_debug_t {
    char *s_memory_usage; // string
    char *s_run_time; // string
    int i_sql_selects; //numeric
    int i_sql_queries; //numeric
    list_t *a_obj_sql_query; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} common_response_obj_debug_t;

__attribute__((deprecated)) common_response_obj_debug_t *common_response_obj_debug_create(
    char *s_memory_usage,
    char *s_run_time,
    int i_sql_selects,
    int i_sql_queries,
    list_t *a_obj_sql_query
);

void common_response_obj_debug_free(common_response_obj_debug_t *common_response_obj_debug);

common_response_obj_debug_t *common_response_obj_debug_parseFromJSON(cJSON *common_response_obj_debugJSON);

cJSON *common_response_obj_debug_convertToJSON(common_response_obj_debug_t *common_response_obj_debug);

#endif /* _common_response_obj_debug_H_ */

