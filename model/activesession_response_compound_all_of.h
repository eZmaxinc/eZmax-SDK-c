/*
 * activesession_response_compound_all_of.h
 *
 * 
 */

#ifndef _activesession_response_compound_all_of_H_
#define _activesession_response_compound_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct activesession_response_compound_all_of_t activesession_response_compound_all_of_t;

#include "activesession_response_compound_apikey.h"
#include "activesession_response_compound_user.h"



typedef struct activesession_response_compound_all_of_t {
    list_t *a_pki_permission_id; //primitive container
    struct activesession_response_compound_user_t *obj_user_real; //model
    struct activesession_response_compound_user_t *obj_user_cloned; //model
    struct activesession_response_compound_apikey_t *obj_apikey; //model
    list_t *a_e_module_internalname; //primitive container

} activesession_response_compound_all_of_t;

activesession_response_compound_all_of_t *activesession_response_compound_all_of_create(
    list_t *a_pki_permission_id,
    activesession_response_compound_user_t *obj_user_real,
    activesession_response_compound_user_t *obj_user_cloned,
    activesession_response_compound_apikey_t *obj_apikey,
    list_t *a_e_module_internalname
);

void activesession_response_compound_all_of_free(activesession_response_compound_all_of_t *activesession_response_compound_all_of);

activesession_response_compound_all_of_t *activesession_response_compound_all_of_parseFromJSON(cJSON *activesession_response_compound_all_ofJSON);

cJSON *activesession_response_compound_all_of_convertToJSON(activesession_response_compound_all_of_t *activesession_response_compound_all_of);

#endif /* _activesession_response_compound_all_of_H_ */

