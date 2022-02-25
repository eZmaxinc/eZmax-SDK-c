/*
 * activesession_response_compound.h
 *
 * Payload for the /1/object/activesession/getCurrent API Request
 */

#ifndef _activesession_response_compound_H_
#define _activesession_response_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct activesession_response_compound_t activesession_response_compound_t;

#include "activesession_response.h"
#include "activesession_response_compound_all_of.h"
#include "activesession_response_compound_apikey.h"
#include "activesession_response_compound_user.h"
#include "field_e_activesession_sessiontype.h"
#include "field_e_activesession_weekdaystart.h"

// Enum  for activesession_response_compound

typedef enum  { ezmax_api_definition_activesession_response_compound__NULL = 0, ezmax_api_definition_activesession_response_compound__Normal } ezmax_api_definition_activesession_response_compound__e;

char* activesession_response_compound_e_activesession_sessiontype_ToString(ezmax_api_definition_activesession_response_compound__e e_activesession_sessiontype);

ezmax_api_definition_activesession_response_compound__e activesession_response_compound_e_activesession_sessiontype_FromString(char* e_activesession_sessiontype);

// Enum  for activesession_response_compound

typedef enum  { ezmax_api_definition_activesession_response_compound__NULL = 0, ezmax_api_definition_activesession_response_compound__Sunday, ezmax_api_definition_activesession_response_compound__Monday, ezmax_api_definition_activesession_response_compound__Tuesday, ezmax_api_definition_activesession_response_compound__Wednesday, ezmax_api_definition_activesession_response_compound__Thursday, ezmax_api_definition_activesession_response_compound__Friday, ezmax_api_definition_activesession_response_compound__Saturday } ezmax_api_definition_activesession_response_compound__e;

char* activesession_response_compound_e_activesession_weekdaystart_ToString(ezmax_api_definition_activesession_response_compound__e e_activesession_weekdaystart);

ezmax_api_definition_activesession_response_compound__e activesession_response_compound_e_activesession_weekdaystart_FromString(char* e_activesession_weekdaystart);



typedef struct activesession_response_compound_t {
    list_t *a_pki_permission_id; //primitive container
    struct activesession_response_compound_user_t *obj_user_real; //model
    struct activesession_response_compound_user_t *obj_user_cloned; //model
    struct activesession_response_compound_apikey_t *obj_apikey; //model
    list_t *a_e_module_internalname; //primitive container
    field_e_activesession_sessiontype_t *e_activesession_sessiontype; // custom
    field_e_activesession_weekdaystart_t *e_activesession_weekdaystart; // custom
    int fki_language_id; //numeric
    char *s_company_name_x; // string
    char *s_department_name_x; // string
    int b_activesession_debug; //boolean
    char *pks_customer_code; // string

} activesession_response_compound_t;

activesession_response_compound_t *activesession_response_compound_create(
    list_t *a_pki_permission_id,
    activesession_response_compound_user_t *obj_user_real,
    activesession_response_compound_user_t *obj_user_cloned,
    activesession_response_compound_apikey_t *obj_apikey,
    list_t *a_e_module_internalname,
    field_e_activesession_sessiontype_t *e_activesession_sessiontype,
    field_e_activesession_weekdaystart_t *e_activesession_weekdaystart,
    int fki_language_id,
    char *s_company_name_x,
    char *s_department_name_x,
    int b_activesession_debug,
    char *pks_customer_code
);

void activesession_response_compound_free(activesession_response_compound_t *activesession_response_compound);

activesession_response_compound_t *activesession_response_compound_parseFromJSON(cJSON *activesession_response_compoundJSON);

cJSON *activesession_response_compound_convertToJSON(activesession_response_compound_t *activesession_response_compound);

#endif /* _activesession_response_compound_H_ */
