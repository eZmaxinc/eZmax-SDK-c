#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatepackage_get_object_v1_response_m_payload.h"



ezsigntemplatepackage_get_object_v1_response_m_payload_t *ezsigntemplatepackage_get_object_v1_response_m_payload_create(
    int pki_ezsigntemplatepackage_id,
    int fki_ezsignfoldertype_id,
    int fki_language_id,
    char *s_language_name_x,
    char *s_ezsigntemplatepackage_description,
    int b_ezsigntemplatepackage_adminonly,
    int b_ezsigntemplatepackage_needvalidation,
    int b_ezsigntemplatepackage_isactive,
    char *s_ezsignfoldertype_name_x,
    list_t *a_obj_ezsigntemplatepackagesigner,
    list_t *a_obj_ezsigntemplatepackagemembership
    ) {
    ezsigntemplatepackage_get_object_v1_response_m_payload_t *ezsigntemplatepackage_get_object_v1_response_m_payload_local_var = malloc(sizeof(ezsigntemplatepackage_get_object_v1_response_m_payload_t));
    if (!ezsigntemplatepackage_get_object_v1_response_m_payload_local_var) {
        return NULL;
    }
    ezsigntemplatepackage_get_object_v1_response_m_payload_local_var->pki_ezsigntemplatepackage_id = pki_ezsigntemplatepackage_id;
    ezsigntemplatepackage_get_object_v1_response_m_payload_local_var->fki_ezsignfoldertype_id = fki_ezsignfoldertype_id;
    ezsigntemplatepackage_get_object_v1_response_m_payload_local_var->fki_language_id = fki_language_id;
    ezsigntemplatepackage_get_object_v1_response_m_payload_local_var->s_language_name_x = s_language_name_x;
    ezsigntemplatepackage_get_object_v1_response_m_payload_local_var->s_ezsigntemplatepackage_description = s_ezsigntemplatepackage_description;
    ezsigntemplatepackage_get_object_v1_response_m_payload_local_var->b_ezsigntemplatepackage_adminonly = b_ezsigntemplatepackage_adminonly;
    ezsigntemplatepackage_get_object_v1_response_m_payload_local_var->b_ezsigntemplatepackage_needvalidation = b_ezsigntemplatepackage_needvalidation;
    ezsigntemplatepackage_get_object_v1_response_m_payload_local_var->b_ezsigntemplatepackage_isactive = b_ezsigntemplatepackage_isactive;
    ezsigntemplatepackage_get_object_v1_response_m_payload_local_var->s_ezsignfoldertype_name_x = s_ezsignfoldertype_name_x;
    ezsigntemplatepackage_get_object_v1_response_m_payload_local_var->a_obj_ezsigntemplatepackagesigner = a_obj_ezsigntemplatepackagesigner;
    ezsigntemplatepackage_get_object_v1_response_m_payload_local_var->a_obj_ezsigntemplatepackagemembership = a_obj_ezsigntemplatepackagemembership;

    return ezsigntemplatepackage_get_object_v1_response_m_payload_local_var;
}


void ezsigntemplatepackage_get_object_v1_response_m_payload_free(ezsigntemplatepackage_get_object_v1_response_m_payload_t *ezsigntemplatepackage_get_object_v1_response_m_payload) {
    if(NULL == ezsigntemplatepackage_get_object_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplatepackage_get_object_v1_response_m_payload->s_language_name_x) {
        free(ezsigntemplatepackage_get_object_v1_response_m_payload->s_language_name_x);
        ezsigntemplatepackage_get_object_v1_response_m_payload->s_language_name_x = NULL;
    }
    if (ezsigntemplatepackage_get_object_v1_response_m_payload->s_ezsigntemplatepackage_description) {
        free(ezsigntemplatepackage_get_object_v1_response_m_payload->s_ezsigntemplatepackage_description);
        ezsigntemplatepackage_get_object_v1_response_m_payload->s_ezsigntemplatepackage_description = NULL;
    }
    if (ezsigntemplatepackage_get_object_v1_response_m_payload->s_ezsignfoldertype_name_x) {
        free(ezsigntemplatepackage_get_object_v1_response_m_payload->s_ezsignfoldertype_name_x);
        ezsigntemplatepackage_get_object_v1_response_m_payload->s_ezsignfoldertype_name_x = NULL;
    }
    if (ezsigntemplatepackage_get_object_v1_response_m_payload->a_obj_ezsigntemplatepackagesigner) {
        list_ForEach(listEntry, ezsigntemplatepackage_get_object_v1_response_m_payload->a_obj_ezsigntemplatepackagesigner) {
            ezsigntemplatepackagesigner_response_compound_free(listEntry->data);
        }
        list_freeList(ezsigntemplatepackage_get_object_v1_response_m_payload->a_obj_ezsigntemplatepackagesigner);
        ezsigntemplatepackage_get_object_v1_response_m_payload->a_obj_ezsigntemplatepackagesigner = NULL;
    }
    if (ezsigntemplatepackage_get_object_v1_response_m_payload->a_obj_ezsigntemplatepackagemembership) {
        list_ForEach(listEntry, ezsigntemplatepackage_get_object_v1_response_m_payload->a_obj_ezsigntemplatepackagemembership) {
            ezsigntemplatepackagemembership_response_compound_free(listEntry->data);
        }
        list_freeList(ezsigntemplatepackage_get_object_v1_response_m_payload->a_obj_ezsigntemplatepackagemembership);
        ezsigntemplatepackage_get_object_v1_response_m_payload->a_obj_ezsigntemplatepackagemembership = NULL;
    }
    free(ezsigntemplatepackage_get_object_v1_response_m_payload);
}

cJSON *ezsigntemplatepackage_get_object_v1_response_m_payload_convertToJSON(ezsigntemplatepackage_get_object_v1_response_m_payload_t *ezsigntemplatepackage_get_object_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatepackage_get_object_v1_response_m_payload->pki_ezsigntemplatepackage_id
    if (!ezsigntemplatepackage_get_object_v1_response_m_payload->pki_ezsigntemplatepackage_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsigntemplatepackageID", ezsigntemplatepackage_get_object_v1_response_m_payload->pki_ezsigntemplatepackage_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatepackage_get_object_v1_response_m_payload->fki_ezsignfoldertype_id
    if (!ezsigntemplatepackage_get_object_v1_response_m_payload->fki_ezsignfoldertype_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsignfoldertypeID", ezsigntemplatepackage_get_object_v1_response_m_payload->fki_ezsignfoldertype_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatepackage_get_object_v1_response_m_payload->fki_language_id
    if (!ezsigntemplatepackage_get_object_v1_response_m_payload->fki_language_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiLanguageID", ezsigntemplatepackage_get_object_v1_response_m_payload->fki_language_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatepackage_get_object_v1_response_m_payload->s_language_name_x
    if (!ezsigntemplatepackage_get_object_v1_response_m_payload->s_language_name_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sLanguageNameX", ezsigntemplatepackage_get_object_v1_response_m_payload->s_language_name_x) == NULL) {
    goto fail; //String
    }


    // ezsigntemplatepackage_get_object_v1_response_m_payload->s_ezsigntemplatepackage_description
    if (!ezsigntemplatepackage_get_object_v1_response_m_payload->s_ezsigntemplatepackage_description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsigntemplatepackageDescription", ezsigntemplatepackage_get_object_v1_response_m_payload->s_ezsigntemplatepackage_description) == NULL) {
    goto fail; //String
    }


    // ezsigntemplatepackage_get_object_v1_response_m_payload->b_ezsigntemplatepackage_adminonly
    if (!ezsigntemplatepackage_get_object_v1_response_m_payload->b_ezsigntemplatepackage_adminonly) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsigntemplatepackageAdminonly", ezsigntemplatepackage_get_object_v1_response_m_payload->b_ezsigntemplatepackage_adminonly) == NULL) {
    goto fail; //Bool
    }


    // ezsigntemplatepackage_get_object_v1_response_m_payload->b_ezsigntemplatepackage_needvalidation
    if (!ezsigntemplatepackage_get_object_v1_response_m_payload->b_ezsigntemplatepackage_needvalidation) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsigntemplatepackageNeedvalidation", ezsigntemplatepackage_get_object_v1_response_m_payload->b_ezsigntemplatepackage_needvalidation) == NULL) {
    goto fail; //Bool
    }


    // ezsigntemplatepackage_get_object_v1_response_m_payload->b_ezsigntemplatepackage_isactive
    if (!ezsigntemplatepackage_get_object_v1_response_m_payload->b_ezsigntemplatepackage_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsigntemplatepackageIsactive", ezsigntemplatepackage_get_object_v1_response_m_payload->b_ezsigntemplatepackage_isactive) == NULL) {
    goto fail; //Bool
    }


    // ezsigntemplatepackage_get_object_v1_response_m_payload->s_ezsignfoldertype_name_x
    if (!ezsigntemplatepackage_get_object_v1_response_m_payload->s_ezsignfoldertype_name_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsignfoldertypeNameX", ezsigntemplatepackage_get_object_v1_response_m_payload->s_ezsignfoldertype_name_x) == NULL) {
    goto fail; //String
    }


    // ezsigntemplatepackage_get_object_v1_response_m_payload->a_obj_ezsigntemplatepackagesigner
    if (!ezsigntemplatepackage_get_object_v1_response_m_payload->a_obj_ezsigntemplatepackagesigner) {
        goto fail;
    }
    cJSON *a_obj_ezsigntemplatepackagesigner = cJSON_AddArrayToObject(item, "a_objEzsigntemplatepackagesigner");
    if(a_obj_ezsigntemplatepackagesigner == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsigntemplatepackagesignerListEntry;
    if (ezsigntemplatepackage_get_object_v1_response_m_payload->a_obj_ezsigntemplatepackagesigner) {
    list_ForEach(a_obj_ezsigntemplatepackagesignerListEntry, ezsigntemplatepackage_get_object_v1_response_m_payload->a_obj_ezsigntemplatepackagesigner) {
    cJSON *itemLocal = ezsigntemplatepackagesigner_response_compound_convertToJSON(a_obj_ezsigntemplatepackagesignerListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsigntemplatepackagesigner, itemLocal);
    }
    }


    // ezsigntemplatepackage_get_object_v1_response_m_payload->a_obj_ezsigntemplatepackagemembership
    if (!ezsigntemplatepackage_get_object_v1_response_m_payload->a_obj_ezsigntemplatepackagemembership) {
        goto fail;
    }
    cJSON *a_obj_ezsigntemplatepackagemembership = cJSON_AddArrayToObject(item, "a_objEzsigntemplatepackagemembership");
    if(a_obj_ezsigntemplatepackagemembership == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsigntemplatepackagemembershipListEntry;
    if (ezsigntemplatepackage_get_object_v1_response_m_payload->a_obj_ezsigntemplatepackagemembership) {
    list_ForEach(a_obj_ezsigntemplatepackagemembershipListEntry, ezsigntemplatepackage_get_object_v1_response_m_payload->a_obj_ezsigntemplatepackagemembership) {
    cJSON *itemLocal = ezsigntemplatepackagemembership_response_compound_convertToJSON(a_obj_ezsigntemplatepackagemembershipListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsigntemplatepackagemembership, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigntemplatepackage_get_object_v1_response_m_payload_t *ezsigntemplatepackage_get_object_v1_response_m_payload_parseFromJSON(cJSON *ezsigntemplatepackage_get_object_v1_response_m_payloadJSON){

    ezsigntemplatepackage_get_object_v1_response_m_payload_t *ezsigntemplatepackage_get_object_v1_response_m_payload_local_var = NULL;

    // define the local list for ezsigntemplatepackage_get_object_v1_response_m_payload->a_obj_ezsigntemplatepackagesigner
    list_t *a_obj_ezsigntemplatepackagesignerList = NULL;

    // define the local list for ezsigntemplatepackage_get_object_v1_response_m_payload->a_obj_ezsigntemplatepackagemembership
    list_t *a_obj_ezsigntemplatepackagemembershipList = NULL;

    // ezsigntemplatepackage_get_object_v1_response_m_payload->pki_ezsigntemplatepackage_id
    cJSON *pki_ezsigntemplatepackage_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackage_get_object_v1_response_m_payloadJSON, "pkiEzsigntemplatepackageID");
    if (!pki_ezsigntemplatepackage_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsigntemplatepackage_id))
    {
    goto end; //Numeric
    }

    // ezsigntemplatepackage_get_object_v1_response_m_payload->fki_ezsignfoldertype_id
    cJSON *fki_ezsignfoldertype_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackage_get_object_v1_response_m_payloadJSON, "fkiEzsignfoldertypeID");
    if (!fki_ezsignfoldertype_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsignfoldertype_id))
    {
    goto end; //Numeric
    }

    // ezsigntemplatepackage_get_object_v1_response_m_payload->fki_language_id
    cJSON *fki_language_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackage_get_object_v1_response_m_payloadJSON, "fkiLanguageID");
    if (!fki_language_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_language_id))
    {
    goto end; //Numeric
    }

    // ezsigntemplatepackage_get_object_v1_response_m_payload->s_language_name_x
    cJSON *s_language_name_x = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackage_get_object_v1_response_m_payloadJSON, "sLanguageNameX");
    if (!s_language_name_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_language_name_x))
    {
    goto end; //String
    }

    // ezsigntemplatepackage_get_object_v1_response_m_payload->s_ezsigntemplatepackage_description
    cJSON *s_ezsigntemplatepackage_description = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackage_get_object_v1_response_m_payloadJSON, "sEzsigntemplatepackageDescription");
    if (!s_ezsigntemplatepackage_description) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsigntemplatepackage_description))
    {
    goto end; //String
    }

    // ezsigntemplatepackage_get_object_v1_response_m_payload->b_ezsigntemplatepackage_adminonly
    cJSON *b_ezsigntemplatepackage_adminonly = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackage_get_object_v1_response_m_payloadJSON, "bEzsigntemplatepackageAdminonly");
    if (!b_ezsigntemplatepackage_adminonly) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsigntemplatepackage_adminonly))
    {
    goto end; //Bool
    }

    // ezsigntemplatepackage_get_object_v1_response_m_payload->b_ezsigntemplatepackage_needvalidation
    cJSON *b_ezsigntemplatepackage_needvalidation = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackage_get_object_v1_response_m_payloadJSON, "bEzsigntemplatepackageNeedvalidation");
    if (!b_ezsigntemplatepackage_needvalidation) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsigntemplatepackage_needvalidation))
    {
    goto end; //Bool
    }

    // ezsigntemplatepackage_get_object_v1_response_m_payload->b_ezsigntemplatepackage_isactive
    cJSON *b_ezsigntemplatepackage_isactive = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackage_get_object_v1_response_m_payloadJSON, "bEzsigntemplatepackageIsactive");
    if (!b_ezsigntemplatepackage_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsigntemplatepackage_isactive))
    {
    goto end; //Bool
    }

    // ezsigntemplatepackage_get_object_v1_response_m_payload->s_ezsignfoldertype_name_x
    cJSON *s_ezsignfoldertype_name_x = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackage_get_object_v1_response_m_payloadJSON, "sEzsignfoldertypeNameX");
    if (!s_ezsignfoldertype_name_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsignfoldertype_name_x))
    {
    goto end; //String
    }

    // ezsigntemplatepackage_get_object_v1_response_m_payload->a_obj_ezsigntemplatepackagesigner
    cJSON *a_obj_ezsigntemplatepackagesigner = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackage_get_object_v1_response_m_payloadJSON, "a_objEzsigntemplatepackagesigner");
    if (!a_obj_ezsigntemplatepackagesigner) {
        goto end;
    }

    
    cJSON *a_obj_ezsigntemplatepackagesigner_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezsigntemplatepackagesigner)){
        goto end; //nonprimitive container
    }

    a_obj_ezsigntemplatepackagesignerList = list_createList();

    cJSON_ArrayForEach(a_obj_ezsigntemplatepackagesigner_local_nonprimitive,a_obj_ezsigntemplatepackagesigner )
    {
        if(!cJSON_IsObject(a_obj_ezsigntemplatepackagesigner_local_nonprimitive)){
            goto end;
        }
        ezsigntemplatepackagesigner_response_compound_t *a_obj_ezsigntemplatepackagesignerItem = ezsigntemplatepackagesigner_response_compound_parseFromJSON(a_obj_ezsigntemplatepackagesigner_local_nonprimitive);

        list_addElement(a_obj_ezsigntemplatepackagesignerList, a_obj_ezsigntemplatepackagesignerItem);
    }

    // ezsigntemplatepackage_get_object_v1_response_m_payload->a_obj_ezsigntemplatepackagemembership
    cJSON *a_obj_ezsigntemplatepackagemembership = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackage_get_object_v1_response_m_payloadJSON, "a_objEzsigntemplatepackagemembership");
    if (!a_obj_ezsigntemplatepackagemembership) {
        goto end;
    }

    
    cJSON *a_obj_ezsigntemplatepackagemembership_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezsigntemplatepackagemembership)){
        goto end; //nonprimitive container
    }

    a_obj_ezsigntemplatepackagemembershipList = list_createList();

    cJSON_ArrayForEach(a_obj_ezsigntemplatepackagemembership_local_nonprimitive,a_obj_ezsigntemplatepackagemembership )
    {
        if(!cJSON_IsObject(a_obj_ezsigntemplatepackagemembership_local_nonprimitive)){
            goto end;
        }
        ezsigntemplatepackagemembership_response_compound_t *a_obj_ezsigntemplatepackagemembershipItem = ezsigntemplatepackagemembership_response_compound_parseFromJSON(a_obj_ezsigntemplatepackagemembership_local_nonprimitive);

        list_addElement(a_obj_ezsigntemplatepackagemembershipList, a_obj_ezsigntemplatepackagemembershipItem);
    }


    ezsigntemplatepackage_get_object_v1_response_m_payload_local_var = ezsigntemplatepackage_get_object_v1_response_m_payload_create (
        pki_ezsigntemplatepackage_id->valuedouble,
        fki_ezsignfoldertype_id->valuedouble,
        fki_language_id->valuedouble,
        strdup(s_language_name_x->valuestring),
        strdup(s_ezsigntemplatepackage_description->valuestring),
        b_ezsigntemplatepackage_adminonly->valueint,
        b_ezsigntemplatepackage_needvalidation->valueint,
        b_ezsigntemplatepackage_isactive->valueint,
        strdup(s_ezsignfoldertype_name_x->valuestring),
        a_obj_ezsigntemplatepackagesignerList,
        a_obj_ezsigntemplatepackagemembershipList
        );

    return ezsigntemplatepackage_get_object_v1_response_m_payload_local_var;
end:
    if (a_obj_ezsigntemplatepackagesignerList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsigntemplatepackagesignerList) {
            ezsigntemplatepackagesigner_response_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsigntemplatepackagesignerList);
        a_obj_ezsigntemplatepackagesignerList = NULL;
    }
    if (a_obj_ezsigntemplatepackagemembershipList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsigntemplatepackagemembershipList) {
            ezsigntemplatepackagemembership_response_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsigntemplatepackagemembershipList);
        a_obj_ezsigntemplatepackagemembershipList = NULL;
    }
    return NULL;

}
