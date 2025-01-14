#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "custom_ezsignfoldertransmission_response.h"


char* custom_ezsignfoldertransmission_response_e_ezsignfolder_step_ToString(ezmax_api_definition__full_custom_ezsignfoldertransmission_response__e e_ezsignfolder_step) {
    char* e_ezsignfolder_stepArray[] =  { "NULL", "Unsent", "PendingSend", "Sent", "PartiallySigned", "Expired", "Completed", "Archived", "Disposed" };
    return e_ezsignfolder_stepArray[e_ezsignfolder_step];
}

ezmax_api_definition__full_custom_ezsignfoldertransmission_response__e custom_ezsignfoldertransmission_response_e_ezsignfolder_step_FromString(char* e_ezsignfolder_step){
    int stringToReturn = 0;
    char *e_ezsignfolder_stepArray[] =  { "NULL", "Unsent", "PendingSend", "Sent", "PartiallySigned", "Expired", "Completed", "Archived", "Disposed" };
    size_t sizeofArray = sizeof(e_ezsignfolder_stepArray) / sizeof(e_ezsignfolder_stepArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_ezsignfolder_step, e_ezsignfolder_stepArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

custom_ezsignfoldertransmission_response_t *custom_ezsignfoldertransmission_response_create(
    int pki_ezsignfolder_id,
    char *s_ezsignfolder_description,
    field_e_ezsignfolder_step_t *e_ezsignfolder_step,
    int i_ezsignfolder_signaturetotal,
    int i_ezsignfolder_formfieldtotal,
    int i_ezsignfolder_signaturesigned,
    list_t *a_obj_ezsignfoldertransmission_signer
    ) {
    custom_ezsignfoldertransmission_response_t *custom_ezsignfoldertransmission_response_local_var = malloc(sizeof(custom_ezsignfoldertransmission_response_t));
    if (!custom_ezsignfoldertransmission_response_local_var) {
        return NULL;
    }
    custom_ezsignfoldertransmission_response_local_var->pki_ezsignfolder_id = pki_ezsignfolder_id;
    custom_ezsignfoldertransmission_response_local_var->s_ezsignfolder_description = s_ezsignfolder_description;
    custom_ezsignfoldertransmission_response_local_var->e_ezsignfolder_step = e_ezsignfolder_step;
    custom_ezsignfoldertransmission_response_local_var->i_ezsignfolder_signaturetotal = i_ezsignfolder_signaturetotal;
    custom_ezsignfoldertransmission_response_local_var->i_ezsignfolder_formfieldtotal = i_ezsignfolder_formfieldtotal;
    custom_ezsignfoldertransmission_response_local_var->i_ezsignfolder_signaturesigned = i_ezsignfolder_signaturesigned;
    custom_ezsignfoldertransmission_response_local_var->a_obj_ezsignfoldertransmission_signer = a_obj_ezsignfoldertransmission_signer;

    return custom_ezsignfoldertransmission_response_local_var;
}


void custom_ezsignfoldertransmission_response_free(custom_ezsignfoldertransmission_response_t *custom_ezsignfoldertransmission_response) {
    if(NULL == custom_ezsignfoldertransmission_response){
        return ;
    }
    listEntry_t *listEntry;
    if (custom_ezsignfoldertransmission_response->s_ezsignfolder_description) {
        free(custom_ezsignfoldertransmission_response->s_ezsignfolder_description);
        custom_ezsignfoldertransmission_response->s_ezsignfolder_description = NULL;
    }
    if (custom_ezsignfoldertransmission_response->e_ezsignfolder_step) {
        field_e_ezsignfolder_step_free(custom_ezsignfoldertransmission_response->e_ezsignfolder_step);
        custom_ezsignfoldertransmission_response->e_ezsignfolder_step = NULL;
    }
    if (custom_ezsignfoldertransmission_response->a_obj_ezsignfoldertransmission_signer) {
        list_ForEach(listEntry, custom_ezsignfoldertransmission_response->a_obj_ezsignfoldertransmission_signer) {
            custom_ezsignfoldertransmission_signer_response_free(listEntry->data);
        }
        list_freeList(custom_ezsignfoldertransmission_response->a_obj_ezsignfoldertransmission_signer);
        custom_ezsignfoldertransmission_response->a_obj_ezsignfoldertransmission_signer = NULL;
    }
    free(custom_ezsignfoldertransmission_response);
}

cJSON *custom_ezsignfoldertransmission_response_convertToJSON(custom_ezsignfoldertransmission_response_t *custom_ezsignfoldertransmission_response) {
    cJSON *item = cJSON_CreateObject();

    // custom_ezsignfoldertransmission_response->pki_ezsignfolder_id
    if (!custom_ezsignfoldertransmission_response->pki_ezsignfolder_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsignfolderID", custom_ezsignfoldertransmission_response->pki_ezsignfolder_id) == NULL) {
    goto fail; //Numeric
    }


    // custom_ezsignfoldertransmission_response->s_ezsignfolder_description
    if (!custom_ezsignfoldertransmission_response->s_ezsignfolder_description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsignfolderDescription", custom_ezsignfoldertransmission_response->s_ezsignfolder_description) == NULL) {
    goto fail; //String
    }


    // custom_ezsignfoldertransmission_response->e_ezsignfolder_step
    if (ezmax_api_definition__full_custom_ezsignfoldertransmission_response__NULL == custom_ezsignfoldertransmission_response->e_ezsignfolder_step) {
        goto fail;
    }
    cJSON *e_ezsignfolder_step_local_JSON = field_e_ezsignfolder_step_convertToJSON(custom_ezsignfoldertransmission_response->e_ezsignfolder_step);
    if(e_ezsignfolder_step_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignfolderStep", e_ezsignfolder_step_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // custom_ezsignfoldertransmission_response->i_ezsignfolder_signaturetotal
    if (!custom_ezsignfoldertransmission_response->i_ezsignfolder_signaturetotal) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsignfolderSignaturetotal", custom_ezsignfoldertransmission_response->i_ezsignfolder_signaturetotal) == NULL) {
    goto fail; //Numeric
    }


    // custom_ezsignfoldertransmission_response->i_ezsignfolder_formfieldtotal
    if (!custom_ezsignfoldertransmission_response->i_ezsignfolder_formfieldtotal) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsignfolderFormfieldtotal", custom_ezsignfoldertransmission_response->i_ezsignfolder_formfieldtotal) == NULL) {
    goto fail; //Numeric
    }


    // custom_ezsignfoldertransmission_response->i_ezsignfolder_signaturesigned
    if (!custom_ezsignfoldertransmission_response->i_ezsignfolder_signaturesigned) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsignfolderSignaturesigned", custom_ezsignfoldertransmission_response->i_ezsignfolder_signaturesigned) == NULL) {
    goto fail; //Numeric
    }


    // custom_ezsignfoldertransmission_response->a_obj_ezsignfoldertransmission_signer
    if (!custom_ezsignfoldertransmission_response->a_obj_ezsignfoldertransmission_signer) {
        goto fail;
    }
    cJSON *a_obj_ezsignfoldertransmission_signer = cJSON_AddArrayToObject(item, "a_objEzsignfoldertransmissionSigner");
    if(a_obj_ezsignfoldertransmission_signer == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsignfoldertransmission_signerListEntry;
    if (custom_ezsignfoldertransmission_response->a_obj_ezsignfoldertransmission_signer) {
    list_ForEach(a_obj_ezsignfoldertransmission_signerListEntry, custom_ezsignfoldertransmission_response->a_obj_ezsignfoldertransmission_signer) {
    cJSON *itemLocal = custom_ezsignfoldertransmission_signer_response_convertToJSON(a_obj_ezsignfoldertransmission_signerListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsignfoldertransmission_signer, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

custom_ezsignfoldertransmission_response_t *custom_ezsignfoldertransmission_response_parseFromJSON(cJSON *custom_ezsignfoldertransmission_responseJSON){

    custom_ezsignfoldertransmission_response_t *custom_ezsignfoldertransmission_response_local_var = NULL;

    // define the local variable for custom_ezsignfoldertransmission_response->e_ezsignfolder_step
    field_e_ezsignfolder_step_t *e_ezsignfolder_step_local_nonprim = NULL;

    // define the local list for custom_ezsignfoldertransmission_response->a_obj_ezsignfoldertransmission_signer
    list_t *a_obj_ezsignfoldertransmission_signerList = NULL;

    // custom_ezsignfoldertransmission_response->pki_ezsignfolder_id
    cJSON *pki_ezsignfolder_id = cJSON_GetObjectItemCaseSensitive(custom_ezsignfoldertransmission_responseJSON, "pkiEzsignfolderID");
    if (!pki_ezsignfolder_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsignfolder_id))
    {
    goto end; //Numeric
    }

    // custom_ezsignfoldertransmission_response->s_ezsignfolder_description
    cJSON *s_ezsignfolder_description = cJSON_GetObjectItemCaseSensitive(custom_ezsignfoldertransmission_responseJSON, "sEzsignfolderDescription");
    if (!s_ezsignfolder_description) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsignfolder_description))
    {
    goto end; //String
    }

    // custom_ezsignfoldertransmission_response->e_ezsignfolder_step
    cJSON *e_ezsignfolder_step = cJSON_GetObjectItemCaseSensitive(custom_ezsignfoldertransmission_responseJSON, "eEzsignfolderStep");
    if (!e_ezsignfolder_step) {
        goto end;
    }

    
    e_ezsignfolder_step_local_nonprim = field_e_ezsignfolder_step_parseFromJSON(e_ezsignfolder_step); //custom

    // custom_ezsignfoldertransmission_response->i_ezsignfolder_signaturetotal
    cJSON *i_ezsignfolder_signaturetotal = cJSON_GetObjectItemCaseSensitive(custom_ezsignfoldertransmission_responseJSON, "iEzsignfolderSignaturetotal");
    if (!i_ezsignfolder_signaturetotal) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignfolder_signaturetotal))
    {
    goto end; //Numeric
    }

    // custom_ezsignfoldertransmission_response->i_ezsignfolder_formfieldtotal
    cJSON *i_ezsignfolder_formfieldtotal = cJSON_GetObjectItemCaseSensitive(custom_ezsignfoldertransmission_responseJSON, "iEzsignfolderFormfieldtotal");
    if (!i_ezsignfolder_formfieldtotal) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignfolder_formfieldtotal))
    {
    goto end; //Numeric
    }

    // custom_ezsignfoldertransmission_response->i_ezsignfolder_signaturesigned
    cJSON *i_ezsignfolder_signaturesigned = cJSON_GetObjectItemCaseSensitive(custom_ezsignfoldertransmission_responseJSON, "iEzsignfolderSignaturesigned");
    if (!i_ezsignfolder_signaturesigned) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignfolder_signaturesigned))
    {
    goto end; //Numeric
    }

    // custom_ezsignfoldertransmission_response->a_obj_ezsignfoldertransmission_signer
    cJSON *a_obj_ezsignfoldertransmission_signer = cJSON_GetObjectItemCaseSensitive(custom_ezsignfoldertransmission_responseJSON, "a_objEzsignfoldertransmissionSigner");
    if (!a_obj_ezsignfoldertransmission_signer) {
        goto end;
    }

    
    cJSON *a_obj_ezsignfoldertransmission_signer_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezsignfoldertransmission_signer)){
        goto end; //nonprimitive container
    }

    a_obj_ezsignfoldertransmission_signerList = list_createList();

    cJSON_ArrayForEach(a_obj_ezsignfoldertransmission_signer_local_nonprimitive,a_obj_ezsignfoldertransmission_signer )
    {
        if(!cJSON_IsObject(a_obj_ezsignfoldertransmission_signer_local_nonprimitive)){
            goto end;
        }
        custom_ezsignfoldertransmission_signer_response_t *a_obj_ezsignfoldertransmission_signerItem = custom_ezsignfoldertransmission_signer_response_parseFromJSON(a_obj_ezsignfoldertransmission_signer_local_nonprimitive);

        list_addElement(a_obj_ezsignfoldertransmission_signerList, a_obj_ezsignfoldertransmission_signerItem);
    }


    custom_ezsignfoldertransmission_response_local_var = custom_ezsignfoldertransmission_response_create (
        pki_ezsignfolder_id->valuedouble,
        strdup(s_ezsignfolder_description->valuestring),
        e_ezsignfolder_step_local_nonprim,
        i_ezsignfolder_signaturetotal->valuedouble,
        i_ezsignfolder_formfieldtotal->valuedouble,
        i_ezsignfolder_signaturesigned->valuedouble,
        a_obj_ezsignfoldertransmission_signerList
        );

    return custom_ezsignfoldertransmission_response_local_var;
end:
    if (e_ezsignfolder_step_local_nonprim) {
        field_e_ezsignfolder_step_free(e_ezsignfolder_step_local_nonprim);
        e_ezsignfolder_step_local_nonprim = NULL;
    }
    if (a_obj_ezsignfoldertransmission_signerList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsignfoldertransmission_signerList) {
            custom_ezsignfoldertransmission_signer_response_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsignfoldertransmission_signerList);
        a_obj_ezsignfoldertransmission_signerList = NULL;
    }
    return NULL;

}
