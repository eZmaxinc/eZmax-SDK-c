/*
 * ezsigntemplatedocument_edit_object_v1_response_all_of.h
 *
 * 
 */

#ifndef _ezsigntemplatedocument_edit_object_v1_response_all_of_H_
#define _ezsigntemplatedocument_edit_object_v1_response_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatedocument_edit_object_v1_response_all_of_t ezsigntemplatedocument_edit_object_v1_response_all_of_t;

#include "common_response_warning.h"



typedef struct ezsigntemplatedocument_edit_object_v1_response_all_of_t {
    list_t *a_obj_warning; //nonprimitive container

} ezsigntemplatedocument_edit_object_v1_response_all_of_t;

ezsigntemplatedocument_edit_object_v1_response_all_of_t *ezsigntemplatedocument_edit_object_v1_response_all_of_create(
    list_t *a_obj_warning
);

void ezsigntemplatedocument_edit_object_v1_response_all_of_free(ezsigntemplatedocument_edit_object_v1_response_all_of_t *ezsigntemplatedocument_edit_object_v1_response_all_of);

ezsigntemplatedocument_edit_object_v1_response_all_of_t *ezsigntemplatedocument_edit_object_v1_response_all_of_parseFromJSON(cJSON *ezsigntemplatedocument_edit_object_v1_response_all_ofJSON);

cJSON *ezsigntemplatedocument_edit_object_v1_response_all_of_convertToJSON(ezsigntemplatedocument_edit_object_v1_response_all_of_t *ezsigntemplatedocument_edit_object_v1_response_all_of);

#endif /* _ezsigntemplatedocument_edit_object_v1_response_all_of_H_ */

