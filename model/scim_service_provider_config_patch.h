/*
 * scim_service_provider_config_patch.h
 *
 * A complex type that specifies PATCH configuration options.
 */

#ifndef _scim_service_provider_config_patch_H_
#define _scim_service_provider_config_patch_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct scim_service_provider_config_patch_t scim_service_provider_config_patch_t;




typedef struct scim_service_provider_config_patch_t {
    int supported; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} scim_service_provider_config_patch_t;

__attribute__((deprecated)) scim_service_provider_config_patch_t *scim_service_provider_config_patch_create(
    int supported
);

void scim_service_provider_config_patch_free(scim_service_provider_config_patch_t *scim_service_provider_config_patch);

scim_service_provider_config_patch_t *scim_service_provider_config_patch_parseFromJSON(cJSON *scim_service_provider_config_patchJSON);

cJSON *scim_service_provider_config_patch_convertToJSON(scim_service_provider_config_patch_t *scim_service_provider_config_patch);

#endif /* _scim_service_provider_config_patch_H_ */

