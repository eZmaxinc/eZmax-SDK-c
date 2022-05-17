#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigndocument_request_patch.h"



ezsigndocument_request_patch_t *ezsigndocument_request_patch_create(
    char *dt_ezsigndocument_duedate,
    char *s_ezsigndocument_name
    ) {
    ezsigndocument_request_patch_t *ezsigndocument_request_patch_local_var = malloc(sizeof(ezsigndocument_request_patch_t));
    if (!ezsigndocument_request_patch_local_var) {
        return NULL;
    }
    ezsigndocument_request_patch_local_var->dt_ezsigndocument_duedate = dt_ezsigndocument_duedate;
    ezsigndocument_request_patch_local_var->s_ezsigndocument_name = s_ezsigndocument_name;

    return ezsigndocument_request_patch_local_var;
}


void ezsigndocument_request_patch_free(ezsigndocument_request_patch_t *ezsigndocument_request_patch) {
    if(NULL == ezsigndocument_request_patch){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigndocument_request_patch->dt_ezsigndocument_duedate) {
        free(ezsigndocument_request_patch->dt_ezsigndocument_duedate);
        ezsigndocument_request_patch->dt_ezsigndocument_duedate = NULL;
    }
    if (ezsigndocument_request_patch->s_ezsigndocument_name) {
        free(ezsigndocument_request_patch->s_ezsigndocument_name);
        ezsigndocument_request_patch->s_ezsigndocument_name = NULL;
    }
    free(ezsigndocument_request_patch);
}

cJSON *ezsigndocument_request_patch_convertToJSON(ezsigndocument_request_patch_t *ezsigndocument_request_patch) {
    cJSON *item = cJSON_CreateObject();

    // ezsigndocument_request_patch->dt_ezsigndocument_duedate
    if(ezsigndocument_request_patch->dt_ezsigndocument_duedate) {
    if(cJSON_AddStringToObject(item, "dtEzsigndocumentDuedate", ezsigndocument_request_patch->dt_ezsigndocument_duedate) == NULL) {
    goto fail; //String
    }
    }


    // ezsigndocument_request_patch->s_ezsigndocument_name
    if(ezsigndocument_request_patch->s_ezsigndocument_name) {
    if(cJSON_AddStringToObject(item, "sEzsigndocumentName", ezsigndocument_request_patch->s_ezsigndocument_name) == NULL) {
    goto fail; //String
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigndocument_request_patch_t *ezsigndocument_request_patch_parseFromJSON(cJSON *ezsigndocument_request_patchJSON){

    ezsigndocument_request_patch_t *ezsigndocument_request_patch_local_var = NULL;

    // ezsigndocument_request_patch->dt_ezsigndocument_duedate
    cJSON *dt_ezsigndocument_duedate = cJSON_GetObjectItemCaseSensitive(ezsigndocument_request_patchJSON, "dtEzsigndocumentDuedate");
    if (dt_ezsigndocument_duedate) { 
    if(!cJSON_IsString(dt_ezsigndocument_duedate))
    {
    goto end; //String
    }
    }

    // ezsigndocument_request_patch->s_ezsigndocument_name
    cJSON *s_ezsigndocument_name = cJSON_GetObjectItemCaseSensitive(ezsigndocument_request_patchJSON, "sEzsigndocumentName");
    if (s_ezsigndocument_name) { 
    if(!cJSON_IsString(s_ezsigndocument_name))
    {
    goto end; //String
    }
    }


    ezsigndocument_request_patch_local_var = ezsigndocument_request_patch_create (
        dt_ezsigndocument_duedate ? strdup(dt_ezsigndocument_duedate->valuestring) : NULL,
        s_ezsigndocument_name ? strdup(s_ezsigndocument_name->valuestring) : NULL
        );

    return ezsigndocument_request_patch_local_var;
end:
    return NULL;

}
