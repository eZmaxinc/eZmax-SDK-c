#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignbulksendsignermapping_request_v2.h"



static ezsignbulksendsignermapping_request_v2_t *ezsignbulksendsignermapping_request_v2_create_internal(
    int *pki_ezsignbulksendsignermapping_id,
    int *fki_ezsignbulksend_id,
    int *fki_user_id,
    ezmax_api_definition__full_field_e_ezsignbulksendsignermapping_role__e e_ezsignbulksendsignermapping_role,
    char *s_ezsignbulksendsignermapping_description
    ) {
    ezsignbulksendsignermapping_request_v2_t *ezsignbulksendsignermapping_request_v2_local_var = malloc(sizeof(ezsignbulksendsignermapping_request_v2_t));
    if (!ezsignbulksendsignermapping_request_v2_local_var) {
        return NULL;
    }
    memset(ezsignbulksendsignermapping_request_v2_local_var, 0, sizeof(ezsignbulksendsignermapping_request_v2_t));
    ezsignbulksendsignermapping_request_v2_local_var->_library_owned = 1;
    ezsignbulksendsignermapping_request_v2_local_var->pki_ezsignbulksendsignermapping_id = pki_ezsignbulksendsignermapping_id;
    ezsignbulksendsignermapping_request_v2_local_var->fki_ezsignbulksend_id = fki_ezsignbulksend_id;
    ezsignbulksendsignermapping_request_v2_local_var->fki_user_id = fki_user_id;
    ezsignbulksendsignermapping_request_v2_local_var->e_ezsignbulksendsignermapping_role = e_ezsignbulksendsignermapping_role;
    ezsignbulksendsignermapping_request_v2_local_var->s_ezsignbulksendsignermapping_description = s_ezsignbulksendsignermapping_description;
    return ezsignbulksendsignermapping_request_v2_local_var;
}

__attribute__((deprecated)) ezsignbulksendsignermapping_request_v2_t *ezsignbulksendsignermapping_request_v2_create(
    int *pki_ezsignbulksendsignermapping_id,
    int *fki_ezsignbulksend_id,
    int *fki_user_id,
    ezmax_api_definition__full_field_e_ezsignbulksendsignermapping_role__e e_ezsignbulksendsignermapping_role,
    char *s_ezsignbulksendsignermapping_description
    ) {
    int *pki_ezsignbulksendsignermapping_id_copy = NULL;
    if (pki_ezsignbulksendsignermapping_id) {
        pki_ezsignbulksendsignermapping_id_copy = malloc(sizeof(int));
        if (pki_ezsignbulksendsignermapping_id_copy) *pki_ezsignbulksendsignermapping_id_copy = *pki_ezsignbulksendsignermapping_id;
    }
    int *fki_ezsignbulksend_id_copy = NULL;
    if (fki_ezsignbulksend_id) {
        fki_ezsignbulksend_id_copy = malloc(sizeof(int));
        if (fki_ezsignbulksend_id_copy) *fki_ezsignbulksend_id_copy = *fki_ezsignbulksend_id;
    }
    int *fki_user_id_copy = NULL;
    if (fki_user_id) {
        fki_user_id_copy = malloc(sizeof(int));
        if (fki_user_id_copy) *fki_user_id_copy = *fki_user_id;
    }
    ezsignbulksendsignermapping_request_v2_t *result = ezsignbulksendsignermapping_request_v2_create_internal (
        pki_ezsignbulksendsignermapping_id_copy,
        fki_ezsignbulksend_id_copy,
        fki_user_id_copy,
        e_ezsignbulksendsignermapping_role,
        s_ezsignbulksendsignermapping_description
        );
    if (!result) {
        free(pki_ezsignbulksendsignermapping_id_copy);
        free(fki_ezsignbulksend_id_copy);
        free(fki_user_id_copy);
    }
    return result;
}

void ezsignbulksendsignermapping_request_v2_free(ezsignbulksendsignermapping_request_v2_t *ezsignbulksendsignermapping_request_v2) {
    if(NULL == ezsignbulksendsignermapping_request_v2){
        return ;
    }
    if(ezsignbulksendsignermapping_request_v2->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsignbulksendsignermapping_request_v2_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignbulksendsignermapping_request_v2->pki_ezsignbulksendsignermapping_id) {
        free(ezsignbulksendsignermapping_request_v2->pki_ezsignbulksendsignermapping_id);
        ezsignbulksendsignermapping_request_v2->pki_ezsignbulksendsignermapping_id = NULL;
    }
    if (ezsignbulksendsignermapping_request_v2->fki_ezsignbulksend_id) {
        free(ezsignbulksendsignermapping_request_v2->fki_ezsignbulksend_id);
        ezsignbulksendsignermapping_request_v2->fki_ezsignbulksend_id = NULL;
    }
    if (ezsignbulksendsignermapping_request_v2->fki_user_id) {
        free(ezsignbulksendsignermapping_request_v2->fki_user_id);
        ezsignbulksendsignermapping_request_v2->fki_user_id = NULL;
    }
    if (ezsignbulksendsignermapping_request_v2->s_ezsignbulksendsignermapping_description) {
        free(ezsignbulksendsignermapping_request_v2->s_ezsignbulksendsignermapping_description);
        ezsignbulksendsignermapping_request_v2->s_ezsignbulksendsignermapping_description = NULL;
    }
    free(ezsignbulksendsignermapping_request_v2);
}

cJSON *ezsignbulksendsignermapping_request_v2_convertToJSON(ezsignbulksendsignermapping_request_v2_t *ezsignbulksendsignermapping_request_v2) {
    cJSON *item = cJSON_CreateObject();

    // ezsignbulksendsignermapping_request_v2->pki_ezsignbulksendsignermapping_id
    if(ezsignbulksendsignermapping_request_v2->pki_ezsignbulksendsignermapping_id) {
    if(cJSON_AddNumberToObject(item, "pkiEzsignbulksendsignermappingID", *ezsignbulksendsignermapping_request_v2->pki_ezsignbulksendsignermapping_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignbulksendsignermapping_request_v2->fki_ezsignbulksend_id
    if (!ezsignbulksendsignermapping_request_v2->fki_ezsignbulksend_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsignbulksendID", *ezsignbulksendsignermapping_request_v2->fki_ezsignbulksend_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignbulksendsignermapping_request_v2->fki_user_id
    if(ezsignbulksendsignermapping_request_v2->fki_user_id) {
    if(cJSON_AddNumberToObject(item, "fkiUserID", *ezsignbulksendsignermapping_request_v2->fki_user_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignbulksendsignermapping_request_v2->e_ezsignbulksendsignermapping_role
    if(ezsignbulksendsignermapping_request_v2->e_ezsignbulksendsignermapping_role != ezmax_api_definition__full_field_e_ezsignbulksendsignermapping_role__NULL) {
    cJSON *e_ezsignbulksendsignermapping_role_local_JSON = field_e_ezsignbulksendsignermapping_role_convertToJSON(ezsignbulksendsignermapping_request_v2->e_ezsignbulksendsignermapping_role);
    if(e_ezsignbulksendsignermapping_role_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignbulksendsignermappingRole", e_ezsignbulksendsignermapping_role_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // ezsignbulksendsignermapping_request_v2->s_ezsignbulksendsignermapping_description
    if (!ezsignbulksendsignermapping_request_v2->s_ezsignbulksendsignermapping_description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsignbulksendsignermappingDescription", ezsignbulksendsignermapping_request_v2->s_ezsignbulksendsignermapping_description) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsignbulksendsignermapping_request_v2_t *ezsignbulksendsignermapping_request_v2_parseFromJSON(cJSON *ezsignbulksendsignermapping_request_v2JSON){

    ezsignbulksendsignermapping_request_v2_t *ezsignbulksendsignermapping_request_v2_local_var = NULL;

    // define the local variable for ezsignbulksendsignermapping_request_v2->pki_ezsignbulksendsignermapping_id
    int *pki_ezsignbulksendsignermapping_id_local_var = NULL;

    // define the local variable for ezsignbulksendsignermapping_request_v2->fki_ezsignbulksend_id
    int *fki_ezsignbulksend_id_local_var = NULL;

    // define the local variable for ezsignbulksendsignermapping_request_v2->fki_user_id
    int *fki_user_id_local_var = NULL;

    // define the local variable for ezsignbulksendsignermapping_request_v2->e_ezsignbulksendsignermapping_role
    ezmax_api_definition__full_field_e_ezsignbulksendsignermapping_role__e e_ezsignbulksendsignermapping_role_local_nonprim = 0;

    char *s_ezsignbulksendsignermapping_description_local_str = NULL;

    // ezsignbulksendsignermapping_request_v2->pki_ezsignbulksendsignermapping_id
    cJSON *pki_ezsignbulksendsignermapping_id = cJSON_GetObjectItemCaseSensitive(ezsignbulksendsignermapping_request_v2JSON, "pkiEzsignbulksendsignermappingID");
    if (cJSON_IsNull(pki_ezsignbulksendsignermapping_id)) {
        pki_ezsignbulksendsignermapping_id = NULL;
    }
    if (pki_ezsignbulksendsignermapping_id) { 
    if(!cJSON_IsNumber(pki_ezsignbulksendsignermapping_id))
    {
    goto end; //Numeric
    }
    pki_ezsignbulksendsignermapping_id_local_var = malloc(sizeof(int));
    if(!pki_ezsignbulksendsignermapping_id_local_var)
    {
        goto end;
    }
    *pki_ezsignbulksendsignermapping_id_local_var = pki_ezsignbulksendsignermapping_id->valuedouble;
    }

    // ezsignbulksendsignermapping_request_v2->fki_ezsignbulksend_id
    cJSON *fki_ezsignbulksend_id = cJSON_GetObjectItemCaseSensitive(ezsignbulksendsignermapping_request_v2JSON, "fkiEzsignbulksendID");
    if (cJSON_IsNull(fki_ezsignbulksend_id)) {
        fki_ezsignbulksend_id = NULL;
    }
    if (!fki_ezsignbulksend_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsignbulksend_id))
    {
    goto end; //Numeric
    }
    fki_ezsignbulksend_id_local_var = malloc(sizeof(int));
    if(!fki_ezsignbulksend_id_local_var)
    {
        goto end;
    }
    *fki_ezsignbulksend_id_local_var = fki_ezsignbulksend_id->valuedouble;

    // ezsignbulksendsignermapping_request_v2->fki_user_id
    cJSON *fki_user_id = cJSON_GetObjectItemCaseSensitive(ezsignbulksendsignermapping_request_v2JSON, "fkiUserID");
    if (cJSON_IsNull(fki_user_id)) {
        fki_user_id = NULL;
    }
    if (fki_user_id) { 
    if(!cJSON_IsNumber(fki_user_id))
    {
    goto end; //Numeric
    }
    fki_user_id_local_var = malloc(sizeof(int));
    if(!fki_user_id_local_var)
    {
        goto end;
    }
    *fki_user_id_local_var = fki_user_id->valuedouble;
    }

    // ezsignbulksendsignermapping_request_v2->e_ezsignbulksendsignermapping_role
    cJSON *e_ezsignbulksendsignermapping_role = cJSON_GetObjectItemCaseSensitive(ezsignbulksendsignermapping_request_v2JSON, "eEzsignbulksendsignermappingRole");
    if (cJSON_IsNull(e_ezsignbulksendsignermapping_role)) {
        e_ezsignbulksendsignermapping_role = NULL;
    }
    if (e_ezsignbulksendsignermapping_role) { 
    e_ezsignbulksendsignermapping_role_local_nonprim = field_e_ezsignbulksendsignermapping_role_parseFromJSON(e_ezsignbulksendsignermapping_role); //custom
    }

    // ezsignbulksendsignermapping_request_v2->s_ezsignbulksendsignermapping_description
    cJSON *s_ezsignbulksendsignermapping_description = cJSON_GetObjectItemCaseSensitive(ezsignbulksendsignermapping_request_v2JSON, "sEzsignbulksendsignermappingDescription");
    if (cJSON_IsNull(s_ezsignbulksendsignermapping_description)) {
        s_ezsignbulksendsignermapping_description = NULL;
    }
    if (!s_ezsignbulksendsignermapping_description) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsignbulksendsignermapping_description))
    {
    goto end; //String
    }


    if (s_ezsignbulksendsignermapping_description && !cJSON_IsNull(s_ezsignbulksendsignermapping_description)) s_ezsignbulksendsignermapping_description_local_str = strdup(s_ezsignbulksendsignermapping_description->valuestring);

    ezsignbulksendsignermapping_request_v2_local_var = ezsignbulksendsignermapping_request_v2_create_internal (
        pki_ezsignbulksendsignermapping_id_local_var,
        fki_ezsignbulksend_id_local_var,
        fki_user_id_local_var,
        e_ezsignbulksendsignermapping_role ? e_ezsignbulksendsignermapping_role_local_nonprim : 0,
        s_ezsignbulksendsignermapping_description_local_str
        );

    if (!ezsignbulksendsignermapping_request_v2_local_var) {
        goto end;
    }

    return ezsignbulksendsignermapping_request_v2_local_var;
end:
    if (pki_ezsignbulksendsignermapping_id_local_var) {
        free(pki_ezsignbulksendsignermapping_id_local_var);
        pki_ezsignbulksendsignermapping_id_local_var = NULL;
    }
    if (fki_ezsignbulksend_id_local_var) {
        free(fki_ezsignbulksend_id_local_var);
        fki_ezsignbulksend_id_local_var = NULL;
    }
    if (fki_user_id_local_var) {
        free(fki_user_id_local_var);
        fki_user_id_local_var = NULL;
    }
    if (e_ezsignbulksendsignermapping_role_local_nonprim) {
        e_ezsignbulksendsignermapping_role_local_nonprim = 0;
    }
    if (s_ezsignbulksendsignermapping_description_local_str) {
        free(s_ezsignbulksendsignermapping_description_local_str);
        s_ezsignbulksendsignermapping_description_local_str = NULL;
    }
    return NULL;

}
