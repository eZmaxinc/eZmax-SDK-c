#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "common_audit.h"



static common_audit_t *common_audit_create_internal(
    common_auditdetail_t *obj_auditdetail_created,
    common_auditdetail_t *obj_auditdetail_modified
    ) {
    common_audit_t *common_audit_local_var = malloc(sizeof(common_audit_t));
    if (!common_audit_local_var) {
        return NULL;
    }
    common_audit_local_var->obj_auditdetail_created = obj_auditdetail_created;
    common_audit_local_var->obj_auditdetail_modified = obj_auditdetail_modified;

    common_audit_local_var->_library_owned = 1;
    return common_audit_local_var;
}

__attribute__((deprecated)) common_audit_t *common_audit_create(
    common_auditdetail_t *obj_auditdetail_created,
    common_auditdetail_t *obj_auditdetail_modified
    ) {
    return common_audit_create_internal (
        obj_auditdetail_created,
        obj_auditdetail_modified
        );
}

void common_audit_free(common_audit_t *common_audit) {
    if(NULL == common_audit){
        return ;
    }
    if(common_audit->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "common_audit_free");
        return ;
    }
    listEntry_t *listEntry;
    if (common_audit->obj_auditdetail_created) {
        common_auditdetail_free(common_audit->obj_auditdetail_created);
        common_audit->obj_auditdetail_created = NULL;
    }
    if (common_audit->obj_auditdetail_modified) {
        common_auditdetail_free(common_audit->obj_auditdetail_modified);
        common_audit->obj_auditdetail_modified = NULL;
    }
    free(common_audit);
}

cJSON *common_audit_convertToJSON(common_audit_t *common_audit) {
    cJSON *item = cJSON_CreateObject();

    // common_audit->obj_auditdetail_created
    if (!common_audit->obj_auditdetail_created) {
        goto fail;
    }
    cJSON *obj_auditdetail_created_local_JSON = common_auditdetail_convertToJSON(common_audit->obj_auditdetail_created);
    if(obj_auditdetail_created_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objAuditdetailCreated", obj_auditdetail_created_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // common_audit->obj_auditdetail_modified
    if(common_audit->obj_auditdetail_modified) {
    cJSON *obj_auditdetail_modified_local_JSON = common_auditdetail_convertToJSON(common_audit->obj_auditdetail_modified);
    if(obj_auditdetail_modified_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objAuditdetailModified", obj_auditdetail_modified_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

common_audit_t *common_audit_parseFromJSON(cJSON *common_auditJSON){

    common_audit_t *common_audit_local_var = NULL;

    // define the local variable for common_audit->obj_auditdetail_created
    common_auditdetail_t *obj_auditdetail_created_local_nonprim = NULL;

    // define the local variable for common_audit->obj_auditdetail_modified
    common_auditdetail_t *obj_auditdetail_modified_local_nonprim = NULL;

    // common_audit->obj_auditdetail_created
    cJSON *obj_auditdetail_created = cJSON_GetObjectItemCaseSensitive(common_auditJSON, "objAuditdetailCreated");
    if (cJSON_IsNull(obj_auditdetail_created)) {
        obj_auditdetail_created = NULL;
    }
    if (!obj_auditdetail_created) {
        goto end;
    }

    
    obj_auditdetail_created_local_nonprim = common_auditdetail_parseFromJSON(obj_auditdetail_created); //nonprimitive

    // common_audit->obj_auditdetail_modified
    cJSON *obj_auditdetail_modified = cJSON_GetObjectItemCaseSensitive(common_auditJSON, "objAuditdetailModified");
    if (cJSON_IsNull(obj_auditdetail_modified)) {
        obj_auditdetail_modified = NULL;
    }
    if (obj_auditdetail_modified) { 
    obj_auditdetail_modified_local_nonprim = common_auditdetail_parseFromJSON(obj_auditdetail_modified); //nonprimitive
    }


    common_audit_local_var = common_audit_create_internal (
        obj_auditdetail_created_local_nonprim,
        obj_auditdetail_modified ? obj_auditdetail_modified_local_nonprim : NULL
        );

    return common_audit_local_var;
end:
    if (obj_auditdetail_created_local_nonprim) {
        common_auditdetail_free(obj_auditdetail_created_local_nonprim);
        obj_auditdetail_created_local_nonprim = NULL;
    }
    if (obj_auditdetail_modified_local_nonprim) {
        common_auditdetail_free(obj_auditdetail_modified_local_nonprim);
        obj_auditdetail_modified_local_nonprim = NULL;
    }
    return NULL;

}
