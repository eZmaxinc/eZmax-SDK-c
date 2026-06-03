/*
 * inscriptiontemp_list_element.h
 *
 * A Inscriptiontemp List Element
 */

#ifndef _inscriptiontemp_list_element_H_
#define _inscriptiontemp_list_element_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct inscriptiontemp_list_element_t inscriptiontemp_list_element_t;

#include "field_e_inscriptiontemp_status.h"



typedef struct inscriptiontemp_list_element_t {
    int *pki_inscriptiontemp_id; //numeric
    ezmax_api_definition__full_field_e_inscriptiontemp_status__e e_inscriptiontemp_status; //referenced enum
    char *s_inscriptiontemp_mls; // string
    char *s_inscriptiontemp_description; // string
    int *b_inscriptiontemp_isactive; //boolean
    char *dt_created_date; // string
    char *dt_modified_date; // string

    int _library_owned; // Is the library responsible for freeing this object?
} inscriptiontemp_list_element_t;

__attribute__((deprecated)) inscriptiontemp_list_element_t *inscriptiontemp_list_element_create(
    int *pki_inscriptiontemp_id,
    ezmax_api_definition__full_field_e_inscriptiontemp_status__e e_inscriptiontemp_status,
    char *s_inscriptiontemp_mls,
    char *s_inscriptiontemp_description,
    int *b_inscriptiontemp_isactive,
    char *dt_created_date,
    char *dt_modified_date
);

void inscriptiontemp_list_element_free(inscriptiontemp_list_element_t *inscriptiontemp_list_element);

inscriptiontemp_list_element_t *inscriptiontemp_list_element_parseFromJSON(cJSON *inscriptiontemp_list_elementJSON);

cJSON *inscriptiontemp_list_element_convertToJSON(inscriptiontemp_list_element_t *inscriptiontemp_list_element);

#endif /* _inscriptiontemp_list_element_H_ */

