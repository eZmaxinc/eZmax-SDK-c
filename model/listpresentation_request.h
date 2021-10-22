/*
 * listpresentation_request.h
 *
 * A Listpresentation element
 */

#ifndef _listpresentation_request_H_
#define _listpresentation_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct listpresentation_request_t listpresentation_request_t;




typedef struct listpresentation_request_t {
    char *s_listpresentation_description; // string
    char *s_listpresentation_filter; // string
    char *s_listpresentation_orderby; // string
    list_t *a_s_column_name; //primitive container
    int i_listpresentation_row_max; //numeric
    int i_listpresentation_row_offset; //numeric

} listpresentation_request_t;

listpresentation_request_t *listpresentation_request_create(
    char *s_listpresentation_description,
    char *s_listpresentation_filter,
    char *s_listpresentation_orderby,
    list_t *a_s_column_name,
    int i_listpresentation_row_max,
    int i_listpresentation_row_offset
);

void listpresentation_request_free(listpresentation_request_t *listpresentation_request);

listpresentation_request_t *listpresentation_request_parseFromJSON(cJSON *listpresentation_requestJSON);

cJSON *listpresentation_request_convertToJSON(listpresentation_request_t *listpresentation_request);

#endif /* _listpresentation_request_H_ */

