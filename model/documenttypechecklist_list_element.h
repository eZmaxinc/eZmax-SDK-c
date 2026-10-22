/*
 * documenttypechecklist_list_element.h
 *
 * A Documenttypechecklist List Element
 */

#ifndef _documenttypechecklist_list_element_H_
#define _documenttypechecklist_list_element_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct documenttypechecklist_list_element_t documenttypechecklist_list_element_t;

#include "field_e_documenttypechecklist_status.h"



typedef struct documenttypechecklist_list_element_t {
    int *pki_documenttypechecklist_id; //numeric
    int *fki_documenttype_id; //numeric
    ezmax_api_definition__full_field_e_documenttypechecklist_status__e e_documenttypechecklist_status; //referenced enum
    char *t_documenttypechecklist_comment; // string

    int _library_owned; // Is the library responsible for freeing this object?
} documenttypechecklist_list_element_t;

__attribute__((deprecated)) documenttypechecklist_list_element_t *documenttypechecklist_list_element_create(
    int *pki_documenttypechecklist_id,
    int *fki_documenttype_id,
    ezmax_api_definition__full_field_e_documenttypechecklist_status__e e_documenttypechecklist_status,
    char *t_documenttypechecklist_comment
);

void documenttypechecklist_list_element_free(documenttypechecklist_list_element_t *documenttypechecklist_list_element);

documenttypechecklist_list_element_t *documenttypechecklist_list_element_parseFromJSON(cJSON *documenttypechecklist_list_elementJSON);

cJSON *documenttypechecklist_list_element_convertToJSON(documenttypechecklist_list_element_t *documenttypechecklist_list_element);

#endif /* _documenttypechecklist_list_element_H_ */

