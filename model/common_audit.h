/*
 * common_audit.h
 *
 * Gives informations about the user that created the object and the last user to have modified it.  If the object was never modified after creation, both Created and Modified informations will be the same.  Apikey details will only be provided if the changes were made by an API key.  
 */

#ifndef _common_audit_H_
#define _common_audit_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct common_audit_t common_audit_t;




typedef struct common_audit_t {
    int fki_user_id_created; //numeric
    int fki_user_id_modified; //numeric
    int fki_apikey_id_created; //numeric
    int fki_apikey_id_modified; //numeric
    char *dt_created_date; // string
    char *dt_modified_date; // string

} common_audit_t;

common_audit_t *common_audit_create(
    int fki_user_id_created,
    int fki_user_id_modified,
    int fki_apikey_id_created,
    int fki_apikey_id_modified,
    char *dt_created_date,
    char *dt_modified_date
);

void common_audit_free(common_audit_t *common_audit);

common_audit_t *common_audit_parseFromJSON(cJSON *common_auditJSON);

cJSON *common_audit_convertToJSON(common_audit_t *common_audit);

#endif /* _common_audit_H_ */

