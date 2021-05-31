/*
 * ezsignsignature_request.h
 *
 * An Ezsignsignature Object
 */

#ifndef _ezsignsignature_request_H_
#define _ezsignsignature_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignsignature_request_t ezsignsignature_request_t;

#include "field_e_ezsignsignature_type.h"

// Enum  for ezsignsignature_request

typedef enum  { ezmax_api_definition_ezsignsignature_request__NULL = 0, ezmax_api_definition_ezsignsignature_request__Acknowledgement, ezmax_api_definition_ezsignsignature_request__City, ezmax_api_definition_ezsignsignature_request__Handwritten, ezmax_api_definition_ezsignsignature_request__Initials, ezmax_api_definition_ezsignsignature_request__Name } ezmax_api_definition_ezsignsignature_request__e;

char* ezsignsignature_request_e_ezsignsignature_type_ToString(ezmax_api_definition_ezsignsignature_request__e e_ezsignsignature_type);

ezmax_api_definition_ezsignsignature_request__e ezsignsignature_request_e_ezsignsignature_type_FromString(char* e_ezsignsignature_type);



typedef struct ezsignsignature_request_t {
    int fki_ezsignfoldersignerassociation_id; //numeric
    int i_ezsignpage_pagenumber; //numeric
    int i_ezsignsignature_x; //numeric
    int i_ezsignsignature_y; //numeric
    int i_ezsignsignature_step; //numeric
    int fki_ezsigndocument_id; //numeric

} ezsignsignature_request_t;

ezsignsignature_request_t *ezsignsignature_request_create(
    int fki_ezsignfoldersignerassociation_id,
    int i_ezsignpage_pagenumber,
    int i_ezsignsignature_x,
    int i_ezsignsignature_y,
    int i_ezsignsignature_step,
    int fki_ezsigndocument_id
);

void ezsignsignature_request_free(ezsignsignature_request_t *ezsignsignature_request);

ezsignsignature_request_t *ezsignsignature_request_parseFromJSON(cJSON *ezsignsignature_requestJSON);

cJSON *ezsignsignature_request_convertToJSON(ezsignsignature_request_t *ezsignsignature_request);

#endif /* _ezsignsignature_request_H_ */

