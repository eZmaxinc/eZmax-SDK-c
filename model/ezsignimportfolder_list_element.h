/*
 * ezsignimportfolder_list_element.h
 *
 * A Ezsignimportfolder List Element
 */

#ifndef _ezsignimportfolder_list_element_H_
#define _ezsignimportfolder_list_element_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignimportfolder_list_element_t ezsignimportfolder_list_element_t;

#include "computed_e_ezsignimportfolder_status.h"



typedef struct ezsignimportfolder_list_element_t {
    int pki_ezsignimportfolder_id; //numeric
    char *s_ezsignimportfolder_name; // string
    char *dt_created_date; // string
    char *dt_modified_date; // string
    int i_total_ezsignimportdocument; //numeric
    int i_total_ezsignimportdocument_not_imported; //numeric
    ezmax_api_definition__full_computed_e_ezsignimportfolder_status__e e_ezsignimportfolder_status; //referenced enum

    int _library_owned; // Is the library responsible for freeing this object?
} ezsignimportfolder_list_element_t;

__attribute__((deprecated)) ezsignimportfolder_list_element_t *ezsignimportfolder_list_element_create(
    int pki_ezsignimportfolder_id,
    char *s_ezsignimportfolder_name,
    char *dt_created_date,
    char *dt_modified_date,
    int i_total_ezsignimportdocument,
    int i_total_ezsignimportdocument_not_imported,
    ezmax_api_definition__full_computed_e_ezsignimportfolder_status__e e_ezsignimportfolder_status
);

void ezsignimportfolder_list_element_free(ezsignimportfolder_list_element_t *ezsignimportfolder_list_element);

ezsignimportfolder_list_element_t *ezsignimportfolder_list_element_parseFromJSON(cJSON *ezsignimportfolder_list_elementJSON);

cJSON *ezsignimportfolder_list_element_convertToJSON(ezsignimportfolder_list_element_t *ezsignimportfolder_list_element);

#endif /* _ezsignimportfolder_list_element_H_ */

