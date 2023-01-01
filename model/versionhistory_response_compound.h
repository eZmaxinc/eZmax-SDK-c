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

// Enum  for versionhistory_response_compound

typedef enum  { ezmax_api_definition__full_versionhistory_response_compound__NULL = 0, ezmax_api_definition__full_versionhistory_response_compound__, ezmax_api_definition__full_versionhistory_response_compound__AgentBroker, ezmax_api_definition__full_versionhistory_response_compound__EzsignUser, ezmax_api_definition__full_versionhistory_response_compound__Normal } ezmax_api_definition__full_versionhistory_response_compound__e;

char* versionhistory_response_compound_e_versionhistory_usertype_ToString(ezmax_api_definition__full_versionhistory_response_compound__e e_versionhistory_usertype);

ezmax_api_definition__full_versionhistory_response_compound__e versionhistory_response_compound_e_versionhistory_usertype_FromString(char* e_versionhistory_usertype);

// Enum  for versionhistory_response_compound

typedef enum  { ezmax_api_definition__full_versionhistory_response_compound__NULL = 0, ezmax_api_definition__full_versionhistory_response_compound__AgentBroker, ezmax_api_definition__full_versionhistory_response_compound__NewFeature, ezmax_api_definition__full_versionhistory_response_compound__Correction, ezmax_api_definition__full_versionhistory_response_compound__Modification, ezmax_api_definition__full_versionhistory_response_compound__ImportantMessage } ezmax_api_definition__full_versionhistory_response_compound__e;

char* versionhistory_response_compound_e_versionhistory_type_ToString(ezmax_api_definition__full_versionhistory_response_compound__e e_versionhistory_type);

ezmax_api_definition__full_versionhistory_response_compound__e versionhistory_response_compound_e_versionhistory_type_FromString(char* e_versionhistory_type);



typedef struct versionhistory_response_compound_t {
    int pki_versionhistory_id; //numeric
    int fki_module_id; //numeric
    int fki_modulesection_id; //numeric
    char *s_module_name_x; // string
    char *s_modulesection_name_x; // string
    field_e_versionhistory_usertype_t *e_versionhistory_usertype; // custom
    struct multilingual_versionhistory_detail_t *obj_versionhistory_detail; //model
    char *dt_versionhistory_date; // string
    char *dt_versionhistory_dateend; // string
    field_e_versionhistory_type_t *e_versionhistory_type; // custom
    int b_versionhistory_draft; //boolean

} versionhistory_response_compound_t;

versionhistory_response_compound_t *versionhistory_response_compound_create(
    int pki_versionhistory_id,
    int fki_module_id,
    int fki_modulesection_id,
    char *s_module_name_x,
    char *s_modulesection_name_x,
    field_e_versionhistory_usertype_t *e_versionhistory_usertype,
    multilingual_versionhistory_detail_t *obj_versionhistory_detail,
    char *dt_versionhistory_date,
    char *dt_versionhistory_dateend,
    field_e_versionhistory_type_t *e_versionhistory_type,
    int b_versionhistory_draft
);

void versionhistory_response_compound_free(versionhistory_response_compound_t *versionhistory_response_compound);

versionhistory_response_compound_t *versionhistory_response_compound_parseFromJSON(cJSON *versionhistory_response_compoundJSON);

cJSON *versionhistory_response_compound_convertToJSON(versionhistory_response_compound_t *versionhistory_response_compound);

#endif /* _versionhistory_response_compound_H_ */

