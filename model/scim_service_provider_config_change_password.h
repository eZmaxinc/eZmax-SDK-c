/*
 * scim_service_provider_config_change_password.h
 *
 * A complex type that specifies configuration options related to changing a password.
 */

#ifndef _scim_service_provider_config_change_password_H_
#define _scim_service_provider_config_change_password_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct scim_service_provider_config_change_password_t scim_service_provider_config_change_password_t;




typedef struct scim_service_provider_config_change_password_t {
    int supported; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} scim_service_provider_config_change_password_t;

__attribute__((deprecated)) scim_service_provider_config_change_password_t *scim_service_provider_config_change_password_create(
    int supported
);

void scim_service_provider_config_change_password_free(scim_service_provider_config_change_password_t *scim_service_provider_config_change_password);

scim_service_provider_config_change_password_t *scim_service_provider_config_change_password_parseFromJSON(cJSON *scim_service_provider_config_change_passwordJSON);

cJSON *scim_service_provider_config_change_password_convertToJSON(scim_service_provider_config_change_password_t *scim_service_provider_config_change_password);

#endif /* _scim_service_provider_config_change_password_H_ */

