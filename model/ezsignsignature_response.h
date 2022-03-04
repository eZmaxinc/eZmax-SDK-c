/*
 * ezsignsignature_response.h
 *
 * An Ezsignsignature Object
 */

#ifndef _ezsignsignature_response_H_
#define _ezsignsignature_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignsignature_response_t ezsignsignature_response_t;

#include "field_e_ezsignsignature_type.h"

// Enum  for ezsignsignature_response

typedef enum  { ezmax_api_definition_ezsignsignature_response__NULL = 0, ezmax_api_definition_ezsignsignature_response__Acknowledgement, ezmax_api_definition_ezsignsignature_response__City, ezmax_api_definition_ezsignsignature_response__Handwritten, ezmax_api_definition_ezsignsignature_response__Initials, ezmax_api_definition_ezsignsignature_response__Name } ezmax_api_definition_ezsignsignature_response__e;

char* ezsignsignature_response_e_ezsignsignature_type_ToString(ezmax_api_definition_ezsignsignature_response__e e_ezsignsignature_type);

ezmax_api_definition_ezsignsignature_response__e ezsignsignature_response_e_ezsignsignature_type_FromString(char* e_ezsignsignature_type);



typedef struct ezsignsignature_response_t {
    int pki_ezsignsignature_id; //numeric
    int fki_ezsignfoldersignerassociation_id; //numeric
    int i_ezsignpage_pagenumber; //numeric
    int i_ezsignsignature_x; //numeric
    int i_ezsignsignature_y; //numeric
    int i_ezsignsignature_step; //numeric
    field_e_ezsignsignature_type_t *e_ezsignsignature_type; // custom
    int fki_ezsigndocument_id; //numeric

} ezsignsignature_response_t;

ezsignsignature_response_t *ezsignsignature_response_create(
    int pki_ezsignsignature_id,
    int fki_ezsignfoldersignerassociation_id,
    int i_ezsignpage_pagenumber,
    int i_ezsignsignature_x,
    int i_ezsignsignature_y,
    int i_ezsignsignature_step,
    field_e_ezsignsignature_type_t *e_ezsignsignature_type,
    int fki_ezsigndocument_id
);

void ezsignsignature_response_free(ezsignsignature_response_t *ezsignsignature_response);

ezsignsignature_response_t *ezsignsignature_response_parseFromJSON(cJSON *ezsignsignature_responseJSON);

cJSON *ezsignsignature_response_convertToJSON(ezsignsignature_response_t *ezsignsignature_response);

#endif /* _ezsignsignature_response_H_ */

