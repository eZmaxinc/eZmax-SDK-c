/*
 * common_response_obj_sql_query.h
 *
 * Definition of objSQLQuery Object
 */

#ifndef _common_response_obj_sql_query_H_
#define _common_response_obj_sql_query_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct common_response_obj_sql_query_t common_response_obj_sql_query_t;




typedef struct common_response_obj_sql_query_t {
    char *s_query; // string
    float f_duration; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} common_response_obj_sql_query_t;

__attribute__((deprecated)) common_response_obj_sql_query_t *common_response_obj_sql_query_create(
    char *s_query,
    float f_duration
);

void common_response_obj_sql_query_free(common_response_obj_sql_query_t *common_response_obj_sql_query);

common_response_obj_sql_query_t *common_response_obj_sql_query_parseFromJSON(cJSON *common_response_obj_sql_queryJSON);

cJSON *common_response_obj_sql_query_convertToJSON(common_response_obj_sql_query_t *common_response_obj_sql_query);

#endif /* _common_response_obj_sql_query_H_ */

