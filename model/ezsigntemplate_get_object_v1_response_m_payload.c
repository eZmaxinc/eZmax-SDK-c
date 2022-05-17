#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplate_get_object_v1_response_m_payload.h"



ezsigntemplate_get_object_v1_response_m_payload_t *ezsigntemplate_get_object_v1_response_m_payload_create(
    int pki_ezsigntemplate_id,
    int fki_ezsigntemplatedocument_id,
    int fki_ezsignfoldertype_id,
    int fki_language_id,
    char *s_language_name_x,
    char *s_ezsigntemplate_description,
    int b_ezsigntemplate_adminonly,
    char *s_ezsignfoldertype_name_x,
    ezsigntemplatedocument_response_t *obj_ezsigntemplatedocument,
    list_t *a_obj_ezsigntemplatesigner
    ) {
    ezsigntemplate_get_object_v1_response_m_payload_t *ezsigntemplate_get_object_v1_response_m_payload_local_var = malloc(sizeof(ezsigntemplate_get_object_v1_response_m_payload_t));
    if (!ezsigntemplate_get_object_v1_response_m_payload_local_var) {
        return NULL;
    }
    ezsigntemplate_get_object_v1_response_m_payload_local_var->pki_ezsigntemplate_id = pki_ezsigntemplate_id;
    ezsigntemplate_get_object_v1_response_m_payload_local_var->fki_ezsigntemplatedocument_id = fki_ezsigntemplatedocument_id;
    ezsigntemplate_get_object_v1_response_m_payload_local_var->fki_ezsignfoldertype_id = fki_ezsignfoldertype_id;
    ezsigntemplate_get_object_v1_response_m_payload_local_var->fki_language_id = fki_language_id;
    ezsigntemplate_get_object_v1_response_m_payload_local_var->s_language_name_x = s_language_name_x;
    ezsigntemplate_get_object_v1_response_m_payload_local_var->s_ezsigntemplate_description = s_ezsigntemplate_description;
    ezsigntemplate_get_object_v1_response_m_payload_local_var->b_ezsigntemplate_adminonly = b_ezsigntemplate_adminonly;
    ezsigntemplate_get_object_v1_response_m_payload_local_var->s_ezsignfoldertype_name_x = s_ezsignfoldertype_name_x;
    ezsigntemplate_get_object_v1_response_m_payload_local_var->obj_ezsigntemplatedocument = obj_ezsigntemplatedocument;
    ezsigntemplate_get_object_v1_response_m_payload_local_var->a_obj_ezsigntemplatesigner = a_obj_ezsigntemplatesigner;

    return ezsigntemplate_get_object_v1_response_m_payload_local_var;
}


void ezsigntemplate_get_object_v1_response_m_payload_free(ezsigntemplate_get_object_v1_response_m_payload_t *ezsigntemplate_get_object_v1_response_m_payload) {
    if(NULL == ezsigntemplate_get_object_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplate_get_object_v1_response_m_payload->s_language_name_x) {
        free(ezsigntemplate_get_object_v1_response_m_payload->s_language_name_x);
        ezsigntemplate_get_object_v1_response_m_payload->s_language_name_x = NULL;
    }
    if (ezsigntemplate_get_object_v1_response_m_payload->s_ezsigntemplate_description) {
        free(ezsigntemplate_get_object_v1_response_m_payload->s_ezsigntemplate_description);
        ezsigntemplate_get_object_v1_response_m_payload->s_ezsigntemplate_description = NULL;
    }
    if (ezsigntemplate_get_object_v1_response_m_payload->s_ezsignfoldertype_name_x) {
        free(ezsigntemplate_get_object_v1_response_m_payload->s_ezsignfoldertype_name_x);
        ezsigntemplate_get_object_v1_response_m_payload->s_ezsignfoldertype_name_x = NULL;
    }
    if (ezsigntemplate_get_object_v1_response_m_payload->obj_ezsigntemplatedocument) {
        ezsigntemplatedocument_response_free(ezsigntemplate_get_object_v1_response_m_payload->obj_ezsigntemplatedocument);
        ezsigntemplate_get_object_v1_response_m_payload->obj_ezsigntemplatedocument = NULL;
    }
    if (ezsigntemplate_get_object_v1_response_m_payload->a_obj_ezsigntemplatesigner) {
        list_ForEach(listEntry, ezsigntemplate_get_object_v1_response_m_payload->a_obj_ezsigntemplatesigner) {
            ezsigntemplatesigner_response_compound_free(listEntry->data);
        }
        list_freeList(ezsigntemplate_get_object_v1_response_m_payload->a_obj_ezsigntemplatesigner);
        ezsigntemplate_get_object_v1_response_m_payload->a_obj_ezsigntemplatesigner = NULL;
    }
    free(ezsigntemplate_get_object_v1_response_m_payload);
}

cJSON *ezsigntemplate_get_object_v1_response_m_payload_convertToJSON(ezsigntemplate_get_object_v1_response_m_payload_t *ezsigntemplate_get_object_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplate_get_object_v1_response_m_payload->pki_ezsigntemplate_id
    if (!ezsigntemplate_get_object_v1_response_m_payload->pki_ezsigntemplate_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsigntemplateID", ezsigntemplate_get_object_v1_response_m_payload->pki_ezsigntemplate_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplate_get_object_v1_response_m_payload->fki_ezsigntemplatedocument_id
    if(ezsigntemplate_get_object_v1_response_m_payload->fki_ezsigntemplatedocument_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzsigntemplatedocumentID", ezsigntemplate_get_object_v1_response_m_payload->fki_ezsigntemplatedocument_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplate_get_object_v1_response_m_payload->fki_ezsignfoldertype_id
    if (!ezsigntemplate_get_object_v1_response_m_payload->fki_ezsignfoldertype_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsignfoldertypeID", ezsigntemplate_get_object_v1_response_m_payload->fki_ezsignfoldertype_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplate_get_object_v1_response_m_payload->fki_language_id
    if (!ezsigntemplate_get_object_v1_response_m_payload->fki_language_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiLanguageID", ezsigntemplate_get_object_v1_response_m_payload->fki_language_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplate_get_object_v1_response_m_payload->s_language_name_x
    if (!ezsigntemplate_get_object_v1_response_m_payload->s_language_name_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sLanguageNameX", ezsigntemplate_get_object_v1_response_m_payload->s_language_name_x) == NULL) {
    goto fail; //String
    }


    // ezsigntemplate_get_object_v1_response_m_payload->s_ezsigntemplate_description
    if (!ezsigntemplate_get_object_v1_response_m_payload->s_ezsigntemplate_description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsigntemplateDescription", ezsigntemplate_get_object_v1_response_m_payload->s_ezsigntemplate_description) == NULL) {
    goto fail; //String
    }


    // ezsigntemplate_get_object_v1_response_m_payload->b_ezsigntemplate_adminonly
    if (!ezsigntemplate_get_object_v1_response_m_payload->b_ezsigntemplate_adminonly) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsigntemplateAdminonly", ezsigntemplate_get_object_v1_response_m_payload->b_ezsigntemplate_adminonly) == NULL) {
    goto fail; //Bool
    }


    // ezsigntemplate_get_object_v1_response_m_payload->s_ezsignfoldertype_name_x
    if (!ezsigntemplate_get_object_v1_response_m_payload->s_ezsignfoldertype_name_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsignfoldertypeNameX", ezsigntemplate_get_object_v1_response_m_payload->s_ezsignfoldertype_name_x) == NULL) {
    goto fail; //String
    }


    // ezsigntemplate_get_object_v1_response_m_payload->obj_ezsigntemplatedocument
    if(ezsigntemplate_get_object_v1_response_m_payload->obj_ezsigntemplatedocument) {
    cJSON *obj_ezsigntemplatedocument_local_JSON = ezsigntemplatedocument_response_convertToJSON(ezsigntemplate_get_object_v1_response_m_payload->obj_ezsigntemplatedocument);
    if(obj_ezsigntemplatedocument_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzsigntemplatedocument", obj_ezsigntemplatedocument_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // ezsigntemplate_get_object_v1_response_m_payload->a_obj_ezsigntemplatesigner
    if (!ezsigntemplate_get_object_v1_response_m_payload->a_obj_ezsigntemplatesigner) {
        goto fail;
    }
    cJSON *a_obj_ezsigntemplatesigner = cJSON_AddArrayToObject(item, "a_objEzsigntemplatesigner");
    if(a_obj_ezsigntemplatesigner == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsigntemplatesignerListEntry;
    if (ezsigntemplate_get_object_v1_response_m_payload->a_obj_ezsigntemplatesigner) {
    list_ForEach(a_obj_ezsigntemplatesignerListEntry, ezsigntemplate_get_object_v1_response_m_payload->a_obj_ezsigntemplatesigner) {
    cJSON *itemLocal = ezsigntemplatesigner_response_compound_convertToJSON(a_obj_ezsigntemplatesignerListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsigntemplatesigner, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigntemplate_get_object_v1_response_m_payload_t *ezsigntemplate_get_object_v1_response_m_payload_parseFromJSON(cJSON *ezsigntemplate_get_object_v1_response_m_payloadJSON){

    ezsigntemplate_get_object_v1_response_m_payload_t *ezsigntemplate_get_object_v1_response_m_payload_local_var = NULL;

    // define the local variable for ezsigntemplate_get_object_v1_response_m_payload->obj_ezsigntemplatedocument
    ezsigntemplatedocument_response_t *obj_ezsigntemplatedocument_local_nonprim = NULL;

    // define the local list for ezsigntemplate_get_object_v1_response_m_payload->a_obj_ezsigntemplatesigner
    list_t *a_obj_ezsigntemplatesignerList = NULL;

    // ezsigntemplate_get_object_v1_response_m_payload->pki_ezsigntemplate_id
    cJSON *pki_ezsigntemplate_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_get_object_v1_response_m_payloadJSON, "pkiEzsigntemplateID");
    if (!pki_ezsigntemplate_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsigntemplate_id))
    {
    goto end; //Numeric
    }

    // ezsigntemplate_get_object_v1_response_m_payload->fki_ezsigntemplatedocument_id
    cJSON *fki_ezsigntemplatedocument_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_get_object_v1_response_m_payloadJSON, "fkiEzsigntemplatedocumentID");
    if (fki_ezsigntemplatedocument_id) { 
    if(!cJSON_IsNumber(fki_ezsigntemplatedocument_id))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplate_get_object_v1_response_m_payload->fki_ezsignfoldertype_id
    cJSON *fki_ezsignfoldertype_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_get_object_v1_response_m_payloadJSON, "fkiEzsignfoldertypeID");
    if (!fki_ezsignfoldertype_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsignfoldertype_id))
    {
    goto end; //Numeric
    }

    // ezsigntemplate_get_object_v1_response_m_payload->fki_language_id
    cJSON *fki_language_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_get_object_v1_response_m_payloadJSON, "fkiLanguageID");
    if (!fki_language_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_language_id))
    {
    goto end; //Numeric
    }

    // ezsigntemplate_get_object_v1_response_m_payload->s_language_name_x
    cJSON *s_language_name_x = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_get_object_v1_response_m_payloadJSON, "sLanguageNameX");
    if (!s_language_name_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_language_name_x))
    {
    goto end; //String
    }

    // ezsigntemplate_get_object_v1_response_m_payload->s_ezsigntemplate_description
    cJSON *s_ezsigntemplate_description = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_get_object_v1_response_m_payloadJSON, "sEzsigntemplateDescription");
    if (!s_ezsigntemplate_description) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsigntemplate_description))
    {
    goto end; //String
    }

    // ezsigntemplate_get_object_v1_response_m_payload->b_ezsigntemplate_adminonly
    cJSON *b_ezsigntemplate_adminonly = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_get_object_v1_response_m_payloadJSON, "bEzsigntemplateAdminonly");
    if (!b_ezsigntemplate_adminonly) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsigntemplate_adminonly))
    {
    goto end; //Bool
    }

    // ezsigntemplate_get_object_v1_response_m_payload->s_ezsignfoldertype_name_x
    cJSON *s_ezsignfoldertype_name_x = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_get_object_v1_response_m_payloadJSON, "sEzsignfoldertypeNameX");
    if (!s_ezsignfoldertype_name_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsignfoldertype_name_x))
    {
    goto end; //String
    }

    // ezsigntemplate_get_object_v1_response_m_payload->obj_ezsigntemplatedocument
    cJSON *obj_ezsigntemplatedocument = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_get_object_v1_response_m_payloadJSON, "objEzsigntemplatedocument");
    if (obj_ezsigntemplatedocument) { 
    obj_ezsigntemplatedocument_local_nonprim = ezsigntemplatedocument_response_parseFromJSON(obj_ezsigntemplatedocument); //nonprimitive
    }

    // ezsigntemplate_get_object_v1_response_m_payload->a_obj_ezsigntemplatesigner
    cJSON *a_obj_ezsigntemplatesigner = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_get_object_v1_response_m_payloadJSON, "a_objEzsigntemplatesigner");
    if (!a_obj_ezsigntemplatesigner) {
        goto end;
    }

    
    cJSON *a_obj_ezsigntemplatesigner_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezsigntemplatesigner)){
        goto end; //nonprimitive container
    }

    a_obj_ezsigntemplatesignerList = list_createList();

    cJSON_ArrayForEach(a_obj_ezsigntemplatesigner_local_nonprimitive,a_obj_ezsigntemplatesigner )
    {
        if(!cJSON_IsObject(a_obj_ezsigntemplatesigner_local_nonprimitive)){
            goto end;
        }
        ezsigntemplatesigner_response_compound_t *a_obj_ezsigntemplatesignerItem = ezsigntemplatesigner_response_compound_parseFromJSON(a_obj_ezsigntemplatesigner_local_nonprimitive);

        list_addElement(a_obj_ezsigntemplatesignerList, a_obj_ezsigntemplatesignerItem);
    }


    ezsigntemplate_get_object_v1_response_m_payload_local_var = ezsigntemplate_get_object_v1_response_m_payload_create (
        pki_ezsigntemplate_id->valuedouble,
        fki_ezsigntemplatedocument_id ? fki_ezsigntemplatedocument_id->valuedouble : 0,
        fki_ezsignfoldertype_id->valuedouble,
        fki_language_id->valuedouble,
        strdup(s_language_name_x->valuestring),
        strdup(s_ezsigntemplate_description->valuestring),
        b_ezsigntemplate_adminonly->valueint,
        strdup(s_ezsignfoldertype_name_x->valuestring),
        obj_ezsigntemplatedocument ? obj_ezsigntemplatedocument_local_nonprim : NULL,
        a_obj_ezsigntemplatesignerList
        );

    return ezsigntemplate_get_object_v1_response_m_payload_local_var;
end:
    if (obj_ezsigntemplatedocument_local_nonprim) {
        ezsigntemplatedocument_response_free(obj_ezsigntemplatedocument_local_nonprim);
        obj_ezsigntemplatedocument_local_nonprim = NULL;
    }
    if (a_obj_ezsigntemplatesignerList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsigntemplatesignerList) {
            ezsigntemplatesigner_response_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsigntemplatesignerList);
        a_obj_ezsigntemplatesignerList = NULL;
    }
    return NULL;

}
