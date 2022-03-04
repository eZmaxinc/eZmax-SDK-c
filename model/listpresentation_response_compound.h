/*
 * listpresentation_response_compound.h
 *
 * A Listpresentation Object and children to create a complete structure
 */

#ifndef _listpresentation_response_compound_H_
#define _listpresentation_response_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct listpresentation_response_compound_t listpresentation_response_compound_t;

#include "listpresentation_request.h"



typedef struct listpresentation_response_compound_t {
    char *s_listpresentation_description; // string
    char *s_listpresentation_filter; // string
    char *s_listpresentation_orderby; // string
    list_t *a_s_column_name; //primitive container
    int i_listpresentation_row_max; //numeric
    int i_listpresentation_row_offset; //numeric
    int b_listpresentation_default; //boolean

} listpresentation_response_compound_t;

listpresentation_response_compound_t *listpresentation_response_compound_create(
    char *s_listpresentation_description,
    char *s_listpresentation_filter,
    char *s_listpresentation_orderby,
    list_t *a_s_column_name,
    int i_listpresentation_row_max,
    int i_listpresentation_row_offset,
    int b_listpresentation_default
);

void listpresentation_response_compound_free(listpresentation_response_compound_t *listpresentation_response_compound);

listpresentation_response_compound_t *listpresentation_response_compound_parseFromJSON(cJSON *listpresentation_response_compoundJSON);

cJSON *listpresentation_response_compound_convertToJSON(listpresentation_response_compound_t *listpresentation_response_compound);

#endif /* _listpresentation_response_compound_H_ */

