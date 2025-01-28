/*
 * common_audit.h
 *
 * Gives informations about the user that created the object and the last user to have modified it.  If the object was never modified after creation, objAuditdetailModified won&#39;t be returned. 
 */

#ifndef _common_audit_H_
#define _common_audit_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct common_audit_t common_audit_t;

#include "common_auditdetail.h"



typedef struct common_audit_t {
    struct common_auditdetail_t *obj_auditdetail_created; //model
    struct common_auditdetail_t *obj_auditdetail_modified; //model

    int _library_owned; // Is the library responsible for freeing this object?
} common_audit_t;

__attribute__((deprecated)) common_audit_t *common_audit_create(
    common_auditdetail_t *obj_auditdetail_created,
    common_auditdetail_t *obj_auditdetail_modified
);

void common_audit_free(common_audit_t *common_audit);

common_audit_t *common_audit_parseFromJSON(cJSON *common_auditJSON);

cJSON *common_audit_convertToJSON(common_audit_t *common_audit);

#endif /* _common_audit_H_ */

