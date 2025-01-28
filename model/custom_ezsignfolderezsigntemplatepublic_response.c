#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "custom_ezsignfolderezsigntemplatepublic_response.h"



static custom_ezsignfolderezsigntemplatepublic_response_t *custom_ezsignfolderezsigntemplatepublic_response_create_internal(
    int pki_ezsignfolder_id,
    char *s_ezsignfolder_description,
    ezmax_api_definition__full_field_e_ezsignfolder_step__e e_ezsignfolder_step,
    int i_ezsignfolder_signaturetotal,
    int i_ezsignfolder_formfieldtotal,
    int i_ezsignfolder_signaturesigned,
    list_t *a_obj_ezsignfolderezsigntemplatepublic_signer
    ) {
    custom_ezsignfolderezsigntemplatepublic_response_t *custom_ezsignfolderezsigntemplatepublic_response_local_var = malloc(sizeof(custom_ezsignfolderezsigntemplatepublic_response_t));
    if (!custom_ezsignfolderezsigntemplatepublic_response_local_var) {
        return NULL;
    }
    custom_ezsignfolderezsigntemplatepublic_response_local_var->pki_ezsignfolder_id = pki_ezsignfolder_id;
    custom_ezsignfolderezsigntemplatepublic_response_local_var->s_ezsignfolder_description = s_ezsignfolder_description;
    custom_ezsignfolderezsigntemplatepublic_response_local_var->e_ezsignfolder_step = e_ezsignfolder_step;
    custom_ezsignfolderezsigntemplatepublic_response_local_var->i_ezsignfolder_signaturetotal = i_ezsignfolder_signaturetotal;
    custom_ezsignfolderezsigntemplatepublic_response_local_var->i_ezsignfolder_formfieldtotal = i_ezsignfolder_formfieldtotal;
    custom_ezsignfolderezsigntemplatepublic_response_local_var->i_ezsignfolder_signaturesigned = i_ezsignfolder_signaturesigned;
    custom_ezsignfolderezsigntemplatepublic_response_local_var->a_obj_ezsignfolderezsigntemplatepublic_signer = a_obj_ezsignfolderezsigntemplatepublic_signer;

    custom_ezsignfolderezsigntemplatepublic_response_local_var->_library_owned = 1;
    return custom_ezsignfolderezsigntemplatepublic_response_local_var;
}

__attribute__((deprecated)) custom_ezsignfolderezsigntemplatepublic_response_t *custom_ezsignfolderezsigntemplatepublic_response_create(
    int pki_ezsignfolder_id,
    char *s_ezsignfolder_description,
    ezmax_api_definition__full_field_e_ezsignfolder_step__e e_ezsignfolder_step,
    int i_ezsignfolder_signaturetotal,
    int i_ezsignfolder_formfieldtotal,
    int i_ezsignfolder_signaturesigned,
    list_t *a_obj_ezsignfolderezsigntemplatepublic_signer
    ) {
    return custom_ezsignfolderezsigntemplatepublic_response_create_internal (
        pki_ezsignfolder_id,
        s_ezsignfolder_description,
        e_ezsignfolder_step,
        i_ezsignfolder_signaturetotal,
        i_ezsignfolder_formfieldtotal,
        i_ezsignfolder_signaturesigned,
        a_obj_ezsignfolderezsigntemplatepublic_signer
        );
}

void custom_ezsignfolderezsigntemplatepublic_response_free(custom_ezsignfolderezsigntemplatepublic_response_t *custom_ezsignfolderezsigntemplatepublic_response) {
    if(NULL == custom_ezsignfolderezsigntemplatepublic_response){
        return ;
    }
    if(custom_ezsignfolderezsigntemplatepublic_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "custom_ezsignfolderezsigntemplatepublic_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (custom_ezsignfolderezsigntemplatepublic_response->s_ezsignfolder_description) {
        free(custom_ezsignfolderezsigntemplatepublic_response->s_ezsignfolder_description);
        custom_ezsignfolderezsigntemplatepublic_response->s_ezsignfolder_description = NULL;
    }
    if (custom_ezsignfolderezsigntemplatepublic_response->a_obj_ezsignfolderezsigntemplatepublic_signer) {
        list_ForEach(listEntry, custom_ezsignfolderezsigntemplatepublic_response->a_obj_ezsignfolderezsigntemplatepublic_signer) {
            custom_ezsignfolderezsigntemplatepublic_signer_response_free(listEntry->data);
        }
        list_freeList(custom_ezsignfolderezsigntemplatepublic_response->a_obj_ezsignfolderezsigntemplatepublic_signer);
        custom_ezsignfolderezsigntemplatepublic_response->a_obj_ezsignfolderezsigntemplatepublic_signer = NULL;
    }
    free(custom_ezsignfolderezsigntemplatepublic_response);
}

cJSON *custom_ezsignfolderezsigntemplatepublic_response_convertToJSON(custom_ezsignfolderezsigntemplatepublic_response_t *custom_ezsignfolderezsigntemplatepublic_response) {
    cJSON *item = cJSON_CreateObject();

    // custom_ezsignfolderezsigntemplatepublic_response->pki_ezsignfolder_id
    if (!custom_ezsignfolderezsigntemplatepublic_response->pki_ezsignfolder_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsignfolderID", custom_ezsignfolderezsigntemplatepublic_response->pki_ezsignfolder_id) == NULL) {
    goto fail; //Numeric
    }


    // custom_ezsignfolderezsigntemplatepublic_response->s_ezsignfolder_description
    if (!custom_ezsignfolderezsigntemplatepublic_response->s_ezsignfolder_description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsignfolderDescription", custom_ezsignfolderezsigntemplatepublic_response->s_ezsignfolder_description) == NULL) {
    goto fail; //String
    }


    // custom_ezsignfolderezsigntemplatepublic_response->e_ezsignfolder_step
    if (ezmax_api_definition__full_field_e_ezsignfolder_step__NULL == custom_ezsignfolderezsigntemplatepublic_response->e_ezsignfolder_step) {
        goto fail;
    }
    cJSON *e_ezsignfolder_step_local_JSON = field_e_ezsignfolder_step_convertToJSON(custom_ezsignfolderezsigntemplatepublic_response->e_ezsignfolder_step);
    if(e_ezsignfolder_step_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignfolderStep", e_ezsignfolder_step_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // custom_ezsignfolderezsigntemplatepublic_response->i_ezsignfolder_signaturetotal
    if (!custom_ezsignfolderezsigntemplatepublic_response->i_ezsignfolder_signaturetotal) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsignfolderSignaturetotal", custom_ezsignfolderezsigntemplatepublic_response->i_ezsignfolder_signaturetotal) == NULL) {
    goto fail; //Numeric
    }


    // custom_ezsignfolderezsigntemplatepublic_response->i_ezsignfolder_formfieldtotal
    if (!custom_ezsignfolderezsigntemplatepublic_response->i_ezsignfolder_formfieldtotal) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsignfolderFormfieldtotal", custom_ezsignfolderezsigntemplatepublic_response->i_ezsignfolder_formfieldtotal) == NULL) {
    goto fail; //Numeric
    }


    // custom_ezsignfolderezsigntemplatepublic_response->i_ezsignfolder_signaturesigned
    if (!custom_ezsignfolderezsigntemplatepublic_response->i_ezsignfolder_signaturesigned) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsignfolderSignaturesigned", custom_ezsignfolderezsigntemplatepublic_response->i_ezsignfolder_signaturesigned) == NULL) {
    goto fail; //Numeric
    }


    // custom_ezsignfolderezsigntemplatepublic_response->a_obj_ezsignfolderezsigntemplatepublic_signer
    if(custom_ezsignfolderezsigntemplatepublic_response->a_obj_ezsignfolderezsigntemplatepublic_signer) {
    cJSON *a_obj_ezsignfolderezsigntemplatepublic_signer = cJSON_AddArrayToObject(item, "a_objEzsignfolderezsigntemplatepublicSigner");
    if(a_obj_ezsignfolderezsigntemplatepublic_signer == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsignfolderezsigntemplatepublic_signerListEntry;
    if (custom_ezsignfolderezsigntemplatepublic_response->a_obj_ezsignfolderezsigntemplatepublic_signer) {
    list_ForEach(a_obj_ezsignfolderezsigntemplatepublic_signerListEntry, custom_ezsignfolderezsigntemplatepublic_response->a_obj_ezsignfolderezsigntemplatepublic_signer) {
    cJSON *itemLocal = custom_ezsignfolderezsigntemplatepublic_signer_response_convertToJSON(a_obj_ezsignfolderezsigntemplatepublic_signerListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsignfolderezsigntemplatepublic_signer, itemLocal);
    }
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

custom_ezsignfolderezsigntemplatepublic_response_t *custom_ezsignfolderezsigntemplatepublic_response_parseFromJSON(cJSON *custom_ezsignfolderezsigntemplatepublic_responseJSON){

    custom_ezsignfolderezsigntemplatepublic_response_t *custom_ezsignfolderezsigntemplatepublic_response_local_var = NULL;

    // define the local variable for custom_ezsignfolderezsigntemplatepublic_response->e_ezsignfolder_step
    ezmax_api_definition__full_field_e_ezsignfolder_step__e e_ezsignfolder_step_local_nonprim = 0;

    // define the local list for custom_ezsignfolderezsigntemplatepublic_response->a_obj_ezsignfolderezsigntemplatepublic_signer
    list_t *a_obj_ezsignfolderezsigntemplatepublic_signerList = NULL;

    // custom_ezsignfolderezsigntemplatepublic_response->pki_ezsignfolder_id
    cJSON *pki_ezsignfolder_id = cJSON_GetObjectItemCaseSensitive(custom_ezsignfolderezsigntemplatepublic_responseJSON, "pkiEzsignfolderID");
    if (cJSON_IsNull(pki_ezsignfolder_id)) {
        pki_ezsignfolder_id = NULL;
    }
    if (!pki_ezsignfolder_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsignfolder_id))
    {
    goto end; //Numeric
    }

    // custom_ezsignfolderezsigntemplatepublic_response->s_ezsignfolder_description
    cJSON *s_ezsignfolder_description = cJSON_GetObjectItemCaseSensitive(custom_ezsignfolderezsigntemplatepublic_responseJSON, "sEzsignfolderDescription");
    if (cJSON_IsNull(s_ezsignfolder_description)) {
        s_ezsignfolder_description = NULL;
    }
    if (!s_ezsignfolder_description) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsignfolder_description))
    {
    goto end; //String
    }

    // custom_ezsignfolderezsigntemplatepublic_response->e_ezsignfolder_step
    cJSON *e_ezsignfolder_step = cJSON_GetObjectItemCaseSensitive(custom_ezsignfolderezsigntemplatepublic_responseJSON, "eEzsignfolderStep");
    if (cJSON_IsNull(e_ezsignfolder_step)) {
        e_ezsignfolder_step = NULL;
    }
    if (!e_ezsignfolder_step) {
        goto end;
    }

    
    e_ezsignfolder_step_local_nonprim = field_e_ezsignfolder_step_parseFromJSON(e_ezsignfolder_step); //custom

    // custom_ezsignfolderezsigntemplatepublic_response->i_ezsignfolder_signaturetotal
    cJSON *i_ezsignfolder_signaturetotal = cJSON_GetObjectItemCaseSensitive(custom_ezsignfolderezsigntemplatepublic_responseJSON, "iEzsignfolderSignaturetotal");
    if (cJSON_IsNull(i_ezsignfolder_signaturetotal)) {
        i_ezsignfolder_signaturetotal = NULL;
    }
    if (!i_ezsignfolder_signaturetotal) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignfolder_signaturetotal))
    {
    goto end; //Numeric
    }

    // custom_ezsignfolderezsigntemplatepublic_response->i_ezsignfolder_formfieldtotal
    cJSON *i_ezsignfolder_formfieldtotal = cJSON_GetObjectItemCaseSensitive(custom_ezsignfolderezsigntemplatepublic_responseJSON, "iEzsignfolderFormfieldtotal");
    if (cJSON_IsNull(i_ezsignfolder_formfieldtotal)) {
        i_ezsignfolder_formfieldtotal = NULL;
    }
    if (!i_ezsignfolder_formfieldtotal) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignfolder_formfieldtotal))
    {
    goto end; //Numeric
    }

    // custom_ezsignfolderezsigntemplatepublic_response->i_ezsignfolder_signaturesigned
    cJSON *i_ezsignfolder_signaturesigned = cJSON_GetObjectItemCaseSensitive(custom_ezsignfolderezsigntemplatepublic_responseJSON, "iEzsignfolderSignaturesigned");
    if (cJSON_IsNull(i_ezsignfolder_signaturesigned)) {
        i_ezsignfolder_signaturesigned = NULL;
    }
    if (!i_ezsignfolder_signaturesigned) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignfolder_signaturesigned))
    {
    goto end; //Numeric
    }

    // custom_ezsignfolderezsigntemplatepublic_response->a_obj_ezsignfolderezsigntemplatepublic_signer
    cJSON *a_obj_ezsignfolderezsigntemplatepublic_signer = cJSON_GetObjectItemCaseSensitive(custom_ezsignfolderezsigntemplatepublic_responseJSON, "a_objEzsignfolderezsigntemplatepublicSigner");
    if (cJSON_IsNull(a_obj_ezsignfolderezsigntemplatepublic_signer)) {
        a_obj_ezsignfolderezsigntemplatepublic_signer = NULL;
    }
    if (a_obj_ezsignfolderezsigntemplatepublic_signer) { 
    cJSON *a_obj_ezsignfolderezsigntemplatepublic_signer_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezsignfolderezsigntemplatepublic_signer)){
        goto end; //nonprimitive container
    }

    a_obj_ezsignfolderezsigntemplatepublic_signerList = list_createList();

    cJSON_ArrayForEach(a_obj_ezsignfolderezsigntemplatepublic_signer_local_nonprimitive,a_obj_ezsignfolderezsigntemplatepublic_signer )
    {
        if(!cJSON_IsObject(a_obj_ezsignfolderezsigntemplatepublic_signer_local_nonprimitive)){
            goto end;
        }
        custom_ezsignfolderezsigntemplatepublic_signer_response_t *a_obj_ezsignfolderezsigntemplatepublic_signerItem = custom_ezsignfolderezsigntemplatepublic_signer_response_parseFromJSON(a_obj_ezsignfolderezsigntemplatepublic_signer_local_nonprimitive);

        list_addElement(a_obj_ezsignfolderezsigntemplatepublic_signerList, a_obj_ezsignfolderezsigntemplatepublic_signerItem);
    }
    }


    custom_ezsignfolderezsigntemplatepublic_response_local_var = custom_ezsignfolderezsigntemplatepublic_response_create_internal (
        pki_ezsignfolder_id->valuedouble,
        strdup(s_ezsignfolder_description->valuestring),
        e_ezsignfolder_step_local_nonprim,
        i_ezsignfolder_signaturetotal->valuedouble,
        i_ezsignfolder_formfieldtotal->valuedouble,
        i_ezsignfolder_signaturesigned->valuedouble,
        a_obj_ezsignfolderezsigntemplatepublic_signer ? a_obj_ezsignfolderezsigntemplatepublic_signerList : NULL
        );

    return custom_ezsignfolderezsigntemplatepublic_response_local_var;
end:
    if (e_ezsignfolder_step_local_nonprim) {
        e_ezsignfolder_step_local_nonprim = 0;
    }
    if (a_obj_ezsignfolderezsigntemplatepublic_signerList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsignfolderezsigntemplatepublic_signerList) {
            custom_ezsignfolderezsigntemplatepublic_signer_response_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsignfolderezsigntemplatepublic_signerList);
        a_obj_ezsignfolderezsigntemplatepublic_signerList = NULL;
    }
    return NULL;

}
