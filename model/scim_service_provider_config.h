/*
 * scim_service_provider_config.h
 *
 * 
 */

#ifndef _scim_service_provider_config_H_
#define _scim_service_provider_config_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct scim_service_provider_config_t scim_service_provider_config_t;

#include "scim_authentication_scheme.h"
#include "scim_service_provider_config_bulk.h"
#include "scim_service_provider_config_change_password.h"
#include "scim_service_provider_config_etag.h"
#include "scim_service_provider_config_filter.h"
#include "scim_service_provider_config_patch.h"
#include "scim_service_provider_config_sort.h"



typedef struct scim_service_provider_config_t {
    list_t *authentication_schemes; //nonprimitive container
    struct scim_service_provider_config_bulk_t *bulk; //model
    struct scim_service_provider_config_change_password_t *change_password; //model
    char *documentation_uri; // string
    struct scim_service_provider_config_etag_t *etag; //model
    struct scim_service_provider_config_filter_t *filter; //model
    struct scim_service_provider_config_patch_t *patch; //model
    struct scim_service_provider_config_sort_t *sort; //model

} scim_service_provider_config_t;

scim_service_provider_config_t *scim_service_provider_config_create(
    list_t *authentication_schemes,
    scim_service_provider_config_bulk_t *bulk,
    scim_service_provider_config_change_password_t *change_password,
    char *documentation_uri,
    scim_service_provider_config_etag_t *etag,
    scim_service_provider_config_filter_t *filter,
    scim_service_provider_config_patch_t *patch,
    scim_service_provider_config_sort_t *sort
);

void scim_service_provider_config_free(scim_service_provider_config_t *scim_service_provider_config);

scim_service_provider_config_t *scim_service_provider_config_parseFromJSON(cJSON *scim_service_provider_configJSON);

cJSON *scim_service_provider_config_convertToJSON(scim_service_provider_config_t *scim_service_provider_config);

#endif /* _scim_service_provider_config_H_ */

