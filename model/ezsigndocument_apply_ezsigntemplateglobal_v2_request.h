/*
 * ezsigndocument_apply_ezsigntemplateglobal_v2_request.h
 *
 * Request for POST /2/object/ezsigndocument/{pkiEzsigndocumentID}/applyEzsigntemplateglobal
 */

#ifndef _ezsigndocument_apply_ezsigntemplateglobal_v2_request_H_
#define _ezsigndocument_apply_ezsigntemplateglobal_v2_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigndocument_apply_ezsigntemplateglobal_v2_request_t ezsigndocument_apply_ezsigntemplateglobal_v2_request_t;




typedef struct ezsigndocument_apply_ezsigntemplateglobal_v2_request_t {
    int *fki_ezsigntemplateglobal_id; //numeric
    list_t *a_s_ezsigntemplateglobalsigner; //primitive container
    list_t *a_fki_ezsignfoldersignerassociation_id; //primitive container
    list_t *a_s_ezsigntemplateglobalannotation_description; //primitive container
    list_t *a_s_ezsigntemplateglobalannotation_defaulttext; //primitive container

    int _library_owned; // Is the library responsible for freeing this object?
} ezsigndocument_apply_ezsigntemplateglobal_v2_request_t;

__attribute__((deprecated)) ezsigndocument_apply_ezsigntemplateglobal_v2_request_t *ezsigndocument_apply_ezsigntemplateglobal_v2_request_create(
    int *fki_ezsigntemplateglobal_id,
    list_t *a_s_ezsigntemplateglobalsigner,
    list_t *a_fki_ezsignfoldersignerassociation_id,
    list_t *a_s_ezsigntemplateglobalannotation_description,
    list_t *a_s_ezsigntemplateglobalannotation_defaulttext
);

void ezsigndocument_apply_ezsigntemplateglobal_v2_request_free(ezsigndocument_apply_ezsigntemplateglobal_v2_request_t *ezsigndocument_apply_ezsigntemplateglobal_v2_request);

ezsigndocument_apply_ezsigntemplateglobal_v2_request_t *ezsigndocument_apply_ezsigntemplateglobal_v2_request_parseFromJSON(cJSON *ezsigndocument_apply_ezsigntemplateglobal_v2_requestJSON);

cJSON *ezsigndocument_apply_ezsigntemplateglobal_v2_request_convertToJSON(ezsigndocument_apply_ezsigntemplateglobal_v2_request_t *ezsigndocument_apply_ezsigntemplateglobal_v2_request);

#endif /* _ezsigndocument_apply_ezsigntemplateglobal_v2_request_H_ */

