#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "common_response_error_wrong_franchiseoffice.h"



static common_response_error_wrong_franchiseoffice_t *common_response_error_wrong_franchiseoffice_create_internal(
    char *s_error_message,
    ezmax_api_definition__full_field_e_error_code__e e_error_code,
    list_t *a_s_error_messagedetail,
    int fki_franchiseagence_id,
    char *s_franchiseagence_name,
    int fki_franchiseoffice_id,
    char *i_franchiseoffice_code
    ) {
    common_response_error_wrong_franchiseoffice_t *common_response_error_wrong_franchiseoffice_local_var = malloc(sizeof(common_response_error_wrong_franchiseoffice_t));
    if (!common_response_error_wrong_franchiseoffice_local_var) {
        return NULL;
    }
    common_response_error_wrong_franchiseoffice_local_var->s_error_message = s_error_message;
    common_response_error_wrong_franchiseoffice_local_var->e_error_code = e_error_code;
    common_response_error_wrong_franchiseoffice_local_var->a_s_error_messagedetail = a_s_error_messagedetail;
    common_response_error_wrong_franchiseoffice_local_var->fki_franchiseagence_id = fki_franchiseagence_id;
    common_response_error_wrong_franchiseoffice_local_var->s_franchiseagence_name = s_franchiseagence_name;
    common_response_error_wrong_franchiseoffice_local_var->fki_franchiseoffice_id = fki_franchiseoffice_id;
    common_response_error_wrong_franchiseoffice_local_var->i_franchiseoffice_code = i_franchiseoffice_code;

    common_response_error_wrong_franchiseoffice_local_var->_library_owned = 1;
    return common_response_error_wrong_franchiseoffice_local_var;
}

__attribute__((deprecated)) common_response_error_wrong_franchiseoffice_t *common_response_error_wrong_franchiseoffice_create(
    char *s_error_message,
    ezmax_api_definition__full_field_e_error_code__e e_error_code,
    list_t *a_s_error_messagedetail,
    int fki_franchiseagence_id,
    char *s_franchiseagence_name,
    int fki_franchiseoffice_id,
    char *i_franchiseoffice_code
    ) {
    return common_response_error_wrong_franchiseoffice_create_internal (
        s_error_message,
        e_error_code,
        a_s_error_messagedetail,
        fki_franchiseagence_id,
        s_franchiseagence_name,
        fki_franchiseoffice_id,
        i_franchiseoffice_code
        );
}

void common_response_error_wrong_franchiseoffice_free(common_response_error_wrong_franchiseoffice_t *common_response_error_wrong_franchiseoffice) {
    if(NULL == common_response_error_wrong_franchiseoffice){
        return ;
    }
    if(common_response_error_wrong_franchiseoffice->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "common_response_error_wrong_franchiseoffice_free");
        return ;
    }
    listEntry_t *listEntry;
    if (common_response_error_wrong_franchiseoffice->s_error_message) {
        free(common_response_error_wrong_franchiseoffice->s_error_message);
        common_response_error_wrong_franchiseoffice->s_error_message = NULL;
    }
    if (common_response_error_wrong_franchiseoffice->a_s_error_messagedetail) {
        list_ForEach(listEntry, common_response_error_wrong_franchiseoffice->a_s_error_messagedetail) {
            free(listEntry->data);
        }
        list_freeList(common_response_error_wrong_franchiseoffice->a_s_error_messagedetail);
        common_response_error_wrong_franchiseoffice->a_s_error_messagedetail = NULL;
    }
    if (common_response_error_wrong_franchiseoffice->s_franchiseagence_name) {
        free(common_response_error_wrong_franchiseoffice->s_franchiseagence_name);
        common_response_error_wrong_franchiseoffice->s_franchiseagence_name = NULL;
    }
    if (common_response_error_wrong_franchiseoffice->i_franchiseoffice_code) {
        free(common_response_error_wrong_franchiseoffice->i_franchiseoffice_code);
        common_response_error_wrong_franchiseoffice->i_franchiseoffice_code = NULL;
    }
    free(common_response_error_wrong_franchiseoffice);
}

cJSON *common_response_error_wrong_franchiseoffice_convertToJSON(common_response_error_wrong_franchiseoffice_t *common_response_error_wrong_franchiseoffice) {
    cJSON *item = cJSON_CreateObject();

    // common_response_error_wrong_franchiseoffice->s_error_message
    if (!common_response_error_wrong_franchiseoffice->s_error_message) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sErrorMessage", common_response_error_wrong_franchiseoffice->s_error_message) == NULL) {
    goto fail; //String
    }


    // common_response_error_wrong_franchiseoffice->e_error_code
    if (ezmax_api_definition__full_field_e_error_code__NULL == common_response_error_wrong_franchiseoffice->e_error_code) {
        goto fail;
    }
    cJSON *e_error_code_local_JSON = field_e_error_code_convertToJSON(common_response_error_wrong_franchiseoffice->e_error_code);
    if(e_error_code_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eErrorCode", e_error_code_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // common_response_error_wrong_franchiseoffice->a_s_error_messagedetail
    if(common_response_error_wrong_franchiseoffice->a_s_error_messagedetail) {
    cJSON *a_s_error_messagedetail = cJSON_AddArrayToObject(item, "a_sErrorMessagedetail");
    if(a_s_error_messagedetail == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_s_error_messagedetailListEntry;
    list_ForEach(a_s_error_messagedetailListEntry, common_response_error_wrong_franchiseoffice->a_s_error_messagedetail) {
    if(cJSON_AddStringToObject(a_s_error_messagedetail, "", a_s_error_messagedetailListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // common_response_error_wrong_franchiseoffice->fki_franchiseagence_id
    if (!common_response_error_wrong_franchiseoffice->fki_franchiseagence_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiFranchiseagenceID", common_response_error_wrong_franchiseoffice->fki_franchiseagence_id) == NULL) {
    goto fail; //Numeric
    }


    // common_response_error_wrong_franchiseoffice->s_franchiseagence_name
    if (!common_response_error_wrong_franchiseoffice->s_franchiseagence_name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sFranchiseagenceName", common_response_error_wrong_franchiseoffice->s_franchiseagence_name) == NULL) {
    goto fail; //String
    }


    // common_response_error_wrong_franchiseoffice->fki_franchiseoffice_id
    if (!common_response_error_wrong_franchiseoffice->fki_franchiseoffice_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiFranchiseofficeID", common_response_error_wrong_franchiseoffice->fki_franchiseoffice_id) == NULL) {
    goto fail; //Numeric
    }


    // common_response_error_wrong_franchiseoffice->i_franchiseoffice_code
    if (!common_response_error_wrong_franchiseoffice->i_franchiseoffice_code) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "iFranchiseofficeCode", common_response_error_wrong_franchiseoffice->i_franchiseoffice_code) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

common_response_error_wrong_franchiseoffice_t *common_response_error_wrong_franchiseoffice_parseFromJSON(cJSON *common_response_error_wrong_franchiseofficeJSON){

    common_response_error_wrong_franchiseoffice_t *common_response_error_wrong_franchiseoffice_local_var = NULL;

    // define the local variable for common_response_error_wrong_franchiseoffice->e_error_code
    ezmax_api_definition__full_field_e_error_code__e e_error_code_local_nonprim = 0;

    // define the local list for common_response_error_wrong_franchiseoffice->a_s_error_messagedetail
    list_t *a_s_error_messagedetailList = NULL;

    // common_response_error_wrong_franchiseoffice->s_error_message
    cJSON *s_error_message = cJSON_GetObjectItemCaseSensitive(common_response_error_wrong_franchiseofficeJSON, "sErrorMessage");
    if (cJSON_IsNull(s_error_message)) {
        s_error_message = NULL;
    }
    if (!s_error_message) {
        goto end;
    }

    
    if(!cJSON_IsString(s_error_message))
    {
    goto end; //String
    }

    // common_response_error_wrong_franchiseoffice->e_error_code
    cJSON *e_error_code = cJSON_GetObjectItemCaseSensitive(common_response_error_wrong_franchiseofficeJSON, "eErrorCode");
    if (cJSON_IsNull(e_error_code)) {
        e_error_code = NULL;
    }
    if (!e_error_code) {
        goto end;
    }

    
    e_error_code_local_nonprim = field_e_error_code_parseFromJSON(e_error_code); //custom

    // common_response_error_wrong_franchiseoffice->a_s_error_messagedetail
    cJSON *a_s_error_messagedetail = cJSON_GetObjectItemCaseSensitive(common_response_error_wrong_franchiseofficeJSON, "a_sErrorMessagedetail");
    if (cJSON_IsNull(a_s_error_messagedetail)) {
        a_s_error_messagedetail = NULL;
    }
    if (a_s_error_messagedetail) { 
    cJSON *a_s_error_messagedetail_local = NULL;
    if(!cJSON_IsArray(a_s_error_messagedetail)) {
        goto end;//primitive container
    }
    a_s_error_messagedetailList = list_createList();

    cJSON_ArrayForEach(a_s_error_messagedetail_local, a_s_error_messagedetail)
    {
        if(!cJSON_IsString(a_s_error_messagedetail_local))
        {
            goto end;
        }
        list_addElement(a_s_error_messagedetailList , strdup(a_s_error_messagedetail_local->valuestring));
    }
    }

    // common_response_error_wrong_franchiseoffice->fki_franchiseagence_id
    cJSON *fki_franchiseagence_id = cJSON_GetObjectItemCaseSensitive(common_response_error_wrong_franchiseofficeJSON, "fkiFranchiseagenceID");
    if (cJSON_IsNull(fki_franchiseagence_id)) {
        fki_franchiseagence_id = NULL;
    }
    if (!fki_franchiseagence_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_franchiseagence_id))
    {
    goto end; //Numeric
    }

    // common_response_error_wrong_franchiseoffice->s_franchiseagence_name
    cJSON *s_franchiseagence_name = cJSON_GetObjectItemCaseSensitive(common_response_error_wrong_franchiseofficeJSON, "sFranchiseagenceName");
    if (cJSON_IsNull(s_franchiseagence_name)) {
        s_franchiseagence_name = NULL;
    }
    if (!s_franchiseagence_name) {
        goto end;
    }

    
    if(!cJSON_IsString(s_franchiseagence_name))
    {
    goto end; //String
    }

    // common_response_error_wrong_franchiseoffice->fki_franchiseoffice_id
    cJSON *fki_franchiseoffice_id = cJSON_GetObjectItemCaseSensitive(common_response_error_wrong_franchiseofficeJSON, "fkiFranchiseofficeID");
    if (cJSON_IsNull(fki_franchiseoffice_id)) {
        fki_franchiseoffice_id = NULL;
    }
    if (!fki_franchiseoffice_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_franchiseoffice_id))
    {
    goto end; //Numeric
    }

    // common_response_error_wrong_franchiseoffice->i_franchiseoffice_code
    cJSON *i_franchiseoffice_code = cJSON_GetObjectItemCaseSensitive(common_response_error_wrong_franchiseofficeJSON, "iFranchiseofficeCode");
    if (cJSON_IsNull(i_franchiseoffice_code)) {
        i_franchiseoffice_code = NULL;
    }
    if (!i_franchiseoffice_code) {
        goto end;
    }

    
    if(!cJSON_IsString(i_franchiseoffice_code))
    {
    goto end; //String
    }


    common_response_error_wrong_franchiseoffice_local_var = common_response_error_wrong_franchiseoffice_create_internal (
        strdup(s_error_message->valuestring),
        e_error_code_local_nonprim,
        a_s_error_messagedetail ? a_s_error_messagedetailList : NULL,
        fki_franchiseagence_id->valuedouble,
        strdup(s_franchiseagence_name->valuestring),
        fki_franchiseoffice_id->valuedouble,
        strdup(i_franchiseoffice_code->valuestring)
        );

    return common_response_error_wrong_franchiseoffice_local_var;
end:
    if (e_error_code_local_nonprim) {
        e_error_code_local_nonprim = 0;
    }
    if (a_s_error_messagedetailList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_s_error_messagedetailList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_s_error_messagedetailList);
        a_s_error_messagedetailList = NULL;
    }
    return NULL;

}
