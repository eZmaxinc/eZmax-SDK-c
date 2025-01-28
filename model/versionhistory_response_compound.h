/*
 * versionhistory_response_compound.h
 *
 * A Versionhistory Object
 */

#ifndef _versionhistory_response_compound_H_
#define _versionhistory_response_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct versionhistory_response_compound_t versionhistory_response_compound_t;

#include "field_e_versionhistory_type.h"
#include "field_e_versionhistory_usertype.h"
#include "multilingual_versionhistory_detail.h"



typedef struct versionhistory_response_compound_t {
    int pki_versionhistory_id; //numeric
    int fki_module_id; //numeric
    int fki_modulesection_id; //numeric
    char *s_module_name_x; // string
    char *s_modulesection_name_x; // string
    ezmax_api_definition__full_field_e_versionhistory_usertype__e e_versionhistory_usertype; //referenced enum
    struct multilingual_versionhistory_detail_t *obj_versionhistory_detail; //model
    char *dt_versionhistory_date; // string
    char *dt_versionhistory_dateend; // string
    ezmax_api_definition__full_field_e_versionhistory_type__e e_versionhistory_type; //referenced enum
    int b_versionhistory_draft; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} versionhistory_response_compound_t;

__attribute__((deprecated)) versionhistory_response_compound_t *versionhistory_response_compound_create(
    int pki_versionhistory_id,
    int fki_module_id,
    int fki_modulesection_id,
    char *s_module_name_x,
    char *s_modulesection_name_x,
    ezmax_api_definition__full_field_e_versionhistory_usertype__e e_versionhistory_usertype,
    multilingual_versionhistory_detail_t *obj_versionhistory_detail,
    char *dt_versionhistory_date,
    char *dt_versionhistory_dateend,
    ezmax_api_definition__full_field_e_versionhistory_type__e e_versionhistory_type,
    int b_versionhistory_draft
);

void versionhistory_response_compound_free(versionhistory_response_compound_t *versionhistory_response_compound);

versionhistory_response_compound_t *versionhistory_response_compound_parseFromJSON(cJSON *versionhistory_response_compoundJSON);

cJSON *versionhistory_response_compound_convertToJSON(versionhistory_response_compound_t *versionhistory_response_compound);

#endif /* _versionhistory_response_compound_H_ */

