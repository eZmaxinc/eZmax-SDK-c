#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignsignature_sign_v1_request.h"


char* ezsignsignature_sign_v1_request_e_attachments_confirmation_decision_ToString(ezmax_api_definition__full_ezsignsignature_sign_v1_request_EATTACHMENTSCONFIRMATIONDECISION_e e_attachments_confirmation_decision) {
    char* e_attachments_confirmation_decisionArray[] =  { "NULL", "Accepted", "Refused" };
    return e_attachments_confirmation_decisionArray[e_attachments_confirmation_decision];
}

ezmax_api_definition__full_ezsignsignature_sign_v1_request_EATTACHMENTSCONFIRMATIONDECISION_e ezsignsignature_sign_v1_request_e_attachments_confirmation_decision_FromString(char* e_attachments_confirmation_decision){
    int stringToReturn = 0;
    char *e_attachments_confirmation_decisionArray[] =  { "NULL", "Accepted", "Refused" };
    size_t sizeofArray = sizeof(e_attachments_confirmation_decisionArray) / sizeof(e_attachments_confirmation_decisionArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_attachments_confirmation_decision, e_attachments_confirmation_decisionArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

ezsignsignature_sign_v1_request_t *ezsignsignature_sign_v1_request_create(
    int fki_ezsignsigningreason_id,
    char *s_value,
    ezmax_api_definition__full_ezsignsignature_sign_v1_request_EATTACHMENTSCONFIRMATIONDECISION_e e_attachments_confirmation_decision,
    char *s_attachments_refusal_reason,
    char *s_svg,
    list_t *a_obj_file,
    int b_is_automatic
    ) {
    ezsignsignature_sign_v1_request_t *ezsignsignature_sign_v1_request_local_var = malloc(sizeof(ezsignsignature_sign_v1_request_t));
    if (!ezsignsignature_sign_v1_request_local_var) {
        return NULL;
    }
    ezsignsignature_sign_v1_request_local_var->fki_ezsignsigningreason_id = fki_ezsignsigningreason_id;
    ezsignsignature_sign_v1_request_local_var->s_value = s_value;
    ezsignsignature_sign_v1_request_local_var->e_attachments_confirmation_decision = e_attachments_confirmation_decision;
    ezsignsignature_sign_v1_request_local_var->s_attachments_refusal_reason = s_attachments_refusal_reason;
    ezsignsignature_sign_v1_request_local_var->s_svg = s_svg;
    ezsignsignature_sign_v1_request_local_var->a_obj_file = a_obj_file;
    ezsignsignature_sign_v1_request_local_var->b_is_automatic = b_is_automatic;

    return ezsignsignature_sign_v1_request_local_var;
}


void ezsignsignature_sign_v1_request_free(ezsignsignature_sign_v1_request_t *ezsignsignature_sign_v1_request) {
    if(NULL == ezsignsignature_sign_v1_request){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignsignature_sign_v1_request->s_value) {
        free(ezsignsignature_sign_v1_request->s_value);
        ezsignsignature_sign_v1_request->s_value = NULL;
    }
    if (ezsignsignature_sign_v1_request->s_attachments_refusal_reason) {
        free(ezsignsignature_sign_v1_request->s_attachments_refusal_reason);
        ezsignsignature_sign_v1_request->s_attachments_refusal_reason = NULL;
    }
    if (ezsignsignature_sign_v1_request->s_svg) {
        free(ezsignsignature_sign_v1_request->s_svg);
        ezsignsignature_sign_v1_request->s_svg = NULL;
    }
    if (ezsignsignature_sign_v1_request->a_obj_file) {
        list_ForEach(listEntry, ezsignsignature_sign_v1_request->a_obj_file) {
            common_file_free(listEntry->data);
        }
        list_freeList(ezsignsignature_sign_v1_request->a_obj_file);
        ezsignsignature_sign_v1_request->a_obj_file = NULL;
    }
    free(ezsignsignature_sign_v1_request);
}

cJSON *ezsignsignature_sign_v1_request_convertToJSON(ezsignsignature_sign_v1_request_t *ezsignsignature_sign_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsignsignature_sign_v1_request->fki_ezsignsigningreason_id
    if(ezsignsignature_sign_v1_request->fki_ezsignsigningreason_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzsignsigningreasonID", ezsignsignature_sign_v1_request->fki_ezsignsigningreason_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignsignature_sign_v1_request->s_value
    if(ezsignsignature_sign_v1_request->s_value) {
    if(cJSON_AddStringToObject(item, "sValue", ezsignsignature_sign_v1_request->s_value) == NULL) {
    goto fail; //String
    }
    }


    // ezsignsignature_sign_v1_request->e_attachments_confirmation_decision
    if(ezsignsignature_sign_v1_request->e_attachments_confirmation_decision != ezmax_api_definition__full_ezsignsignature_sign_v1_request_EATTACHMENTSCONFIRMATIONDECISION_NULL) {
    if(cJSON_AddStringToObject(item, "eAttachmentsConfirmationDecision", e_attachments_confirmation_decisionezsignsignature_sign_v1_request_ToString(ezsignsignature_sign_v1_request->e_attachments_confirmation_decision)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // ezsignsignature_sign_v1_request->s_attachments_refusal_reason
    if(ezsignsignature_sign_v1_request->s_attachments_refusal_reason) {
    if(cJSON_AddStringToObject(item, "sAttachmentsRefusalReason", ezsignsignature_sign_v1_request->s_attachments_refusal_reason) == NULL) {
    goto fail; //String
    }
    }


    // ezsignsignature_sign_v1_request->s_svg
    if(ezsignsignature_sign_v1_request->s_svg) {
    if(cJSON_AddStringToObject(item, "sSvg", ezsignsignature_sign_v1_request->s_svg) == NULL) {
    goto fail; //String
    }
    }


    // ezsignsignature_sign_v1_request->a_obj_file
    if(ezsignsignature_sign_v1_request->a_obj_file) {
    cJSON *a_obj_file = cJSON_AddArrayToObject(item, "a_objFile");
    if(a_obj_file == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_fileListEntry;
    if (ezsignsignature_sign_v1_request->a_obj_file) {
    list_ForEach(a_obj_fileListEntry, ezsignsignature_sign_v1_request->a_obj_file) {
    cJSON *itemLocal = common_file_convertToJSON(a_obj_fileListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_file, itemLocal);
    }
    }
    }


    // ezsignsignature_sign_v1_request->b_is_automatic
    if (!ezsignsignature_sign_v1_request->b_is_automatic) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bIsAutomatic", ezsignsignature_sign_v1_request->b_is_automatic) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsignsignature_sign_v1_request_t *ezsignsignature_sign_v1_request_parseFromJSON(cJSON *ezsignsignature_sign_v1_requestJSON){

    ezsignsignature_sign_v1_request_t *ezsignsignature_sign_v1_request_local_var = NULL;

    // define the local list for ezsignsignature_sign_v1_request->a_obj_file
    list_t *a_obj_fileList = NULL;

    // ezsignsignature_sign_v1_request->fki_ezsignsigningreason_id
    cJSON *fki_ezsignsigningreason_id = cJSON_GetObjectItemCaseSensitive(ezsignsignature_sign_v1_requestJSON, "fkiEzsignsigningreasonID");
    if (fki_ezsignsigningreason_id) { 
    if(!cJSON_IsNumber(fki_ezsignsigningreason_id))
    {
    goto end; //Numeric
    }
    }

    // ezsignsignature_sign_v1_request->s_value
    cJSON *s_value = cJSON_GetObjectItemCaseSensitive(ezsignsignature_sign_v1_requestJSON, "sValue");
    if (s_value) { 
    if(!cJSON_IsString(s_value) && !cJSON_IsNull(s_value))
    {
    goto end; //String
    }
    }

    // ezsignsignature_sign_v1_request->e_attachments_confirmation_decision
    cJSON *e_attachments_confirmation_decision = cJSON_GetObjectItemCaseSensitive(ezsignsignature_sign_v1_requestJSON, "eAttachmentsConfirmationDecision");
    ezmax_api_definition__full_ezsignsignature_sign_v1_request_EATTACHMENTSCONFIRMATIONDECISION_e e_attachments_confirmation_decisionVariable;
    if (e_attachments_confirmation_decision) { 
    if(!cJSON_IsString(e_attachments_confirmation_decision))
    {
    goto end; //Enum
    }
    e_attachments_confirmation_decisionVariable = ezsignsignature_sign_v1_request_e_attachments_confirmation_decision_FromString(e_attachments_confirmation_decision->valuestring);
    }

    // ezsignsignature_sign_v1_request->s_attachments_refusal_reason
    cJSON *s_attachments_refusal_reason = cJSON_GetObjectItemCaseSensitive(ezsignsignature_sign_v1_requestJSON, "sAttachmentsRefusalReason");
    if (s_attachments_refusal_reason) { 
    if(!cJSON_IsString(s_attachments_refusal_reason) && !cJSON_IsNull(s_attachments_refusal_reason))
    {
    goto end; //String
    }
    }

    // ezsignsignature_sign_v1_request->s_svg
    cJSON *s_svg = cJSON_GetObjectItemCaseSensitive(ezsignsignature_sign_v1_requestJSON, "sSvg");
    if (s_svg) { 
    if(!cJSON_IsString(s_svg) && !cJSON_IsNull(s_svg))
    {
    goto end; //String
    }
    }

    // ezsignsignature_sign_v1_request->a_obj_file
    cJSON *a_obj_file = cJSON_GetObjectItemCaseSensitive(ezsignsignature_sign_v1_requestJSON, "a_objFile");
    if (a_obj_file) { 
    cJSON *a_obj_file_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_file)){
        goto end; //nonprimitive container
    }

    a_obj_fileList = list_createList();

    cJSON_ArrayForEach(a_obj_file_local_nonprimitive,a_obj_file )
    {
        if(!cJSON_IsObject(a_obj_file_local_nonprimitive)){
            goto end;
        }
        common_file_t *a_obj_fileItem = common_file_parseFromJSON(a_obj_file_local_nonprimitive);

        list_addElement(a_obj_fileList, a_obj_fileItem);
    }
    }

    // ezsignsignature_sign_v1_request->b_is_automatic
    cJSON *b_is_automatic = cJSON_GetObjectItemCaseSensitive(ezsignsignature_sign_v1_requestJSON, "bIsAutomatic");
    if (!b_is_automatic) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_is_automatic))
    {
    goto end; //Bool
    }


    ezsignsignature_sign_v1_request_local_var = ezsignsignature_sign_v1_request_create (
        fki_ezsignsigningreason_id ? fki_ezsignsigningreason_id->valuedouble : 0,
        s_value && !cJSON_IsNull(s_value) ? strdup(s_value->valuestring) : NULL,
        e_attachments_confirmation_decision ? e_attachments_confirmation_decisionVariable : ezmax_api_definition__full_ezsignsignature_sign_v1_request_EATTACHMENTSCONFIRMATIONDECISION_NULL,
        s_attachments_refusal_reason && !cJSON_IsNull(s_attachments_refusal_reason) ? strdup(s_attachments_refusal_reason->valuestring) : NULL,
        s_svg && !cJSON_IsNull(s_svg) ? strdup(s_svg->valuestring) : NULL,
        a_obj_file ? a_obj_fileList : NULL,
        b_is_automatic->valueint
        );

    return ezsignsignature_sign_v1_request_local_var;
end:
    if (a_obj_fileList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_fileList) {
            common_file_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_fileList);
        a_obj_fileList = NULL;
    }
    return NULL;

}
