/*
 * global_ezmaxcustomer_get_configuration_v1_response.h
 *
 * Response for GET /1/ezmaxcustomer/{pksEzmaxcustomerCode}/getConfiguration
 */

#ifndef _global_ezmaxcustomer_get_configuration_v1_response_H_
#define _global_ezmaxcustomer_get_configuration_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct global_ezmaxcustomer_get_configuration_v1_response_t global_ezmaxcustomer_get_configuration_v1_response_t;




typedef struct global_ezmaxcustomer_get_configuration_v1_response_t {
    char *s_infrastructureregion_code; // string
    char *s_infrastructureregion_code_web; // string
    char *s_infrastructureenvironmenttype_description; // string
    char *s_cognito_client_id_external; // string
    char *s_cognito_client_id_ezmaxpublic; // string

} global_ezmaxcustomer_get_configuration_v1_response_t;

global_ezmaxcustomer_get_configuration_v1_response_t *global_ezmaxcustomer_get_configuration_v1_response_create(
    char *s_infrastructureregion_code,
    char *s_infrastructureregion_code_web,
    char *s_infrastructureenvironmenttype_description,
    char *s_cognito_client_id_external,
    char *s_cognito_client_id_ezmaxpublic
);

void global_ezmaxcustomer_get_configuration_v1_response_free(global_ezmaxcustomer_get_configuration_v1_response_t *global_ezmaxcustomer_get_configuration_v1_response);

global_ezmaxcustomer_get_configuration_v1_response_t *global_ezmaxcustomer_get_configuration_v1_response_parseFromJSON(cJSON *global_ezmaxcustomer_get_configuration_v1_responseJSON);

cJSON *global_ezmaxcustomer_get_configuration_v1_response_convertToJSON(global_ezmaxcustomer_get_configuration_v1_response_t *global_ezmaxcustomer_get_configuration_v1_response);

#endif /* _global_ezmaxcustomer_get_configuration_v1_response_H_ */

