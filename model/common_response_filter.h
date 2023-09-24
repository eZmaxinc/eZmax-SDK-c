/*
 * common_response_filter.h
 *
 * Definition of Filters for getList
 */

#ifndef _common_response_filter_H_
#define _common_response_filter_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct common_response_filter_t common_response_filter_t;




typedef struct common_response_filter_t {
    list_t* a_auto_type; //map
    list_t* a_auto_type_having; //map
    list_t* a_enum; //map

} common_response_filter_t;

common_response_filter_t *common_response_filter_create(
    list_t* a_auto_type,
    list_t* a_auto_type_having,
    list_t* a_enum
);

void common_response_filter_free(common_response_filter_t *common_response_filter);

common_response_filter_t *common_response_filter_parseFromJSON(cJSON *common_response_filterJSON);

cJSON *common_response_filter_convertToJSON(common_response_filter_t *common_response_filter);

#endif /* _common_response_filter_H_ */

