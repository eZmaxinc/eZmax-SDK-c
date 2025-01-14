#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatepublic_create_ezsignfolder_v1_request.h"



ezsigntemplatepublic_create_ezsignfolder_v1_request_t *ezsigntemplatepublic_create_ezsignfolder_v1_request_create(
    char *pks_ezmaxcustomer_code,
    char *s_ezsigntemplatepublic_referenceid,
    list_t *a_s_ezsigntemplatesigner_description,
    list_t *a_obj_ezsignsigner
    ) {
    ezsigntemplatepublic_create_ezsignfolder_v1_request_t *ezsigntemplatepublic_create_ezsignfolder_v1_request_local_var = malloc(sizeof(ezsigntemplatepublic_create_ezsignfolder_v1_request_t));
    if (!ezsigntemplatepublic_create_ezsignfolder_v1_request_local_var) {
        return NULL;
    }
    ezsigntemplatepublic_create_ezsignfolder_v1_request_local_var->pks_ezmaxcustomer_code = pks_ezmaxcustomer_code;
    ezsigntemplatepublic_create_ezsignfolder_v1_request_local_var->s_ezsigntemplatepublic_referenceid = s_ezsigntemplatepublic_referenceid;
    ezsigntemplatepublic_create_ezsignfolder_v1_request_local_var->a_s_ezsigntemplatesigner_description = a_s_ezsigntemplatesigner_description;
    ezsigntemplatepublic_create_ezsignfolder_v1_request_local_var->a_obj_ezsignsigner = a_obj_ezsignsigner;

    return ezsigntemplatepublic_create_ezsignfolder_v1_request_local_var;
}


void ezsigntemplatepublic_create_ezsignfolder_v1_request_free(ezsigntemplatepublic_create_ezsignfolder_v1_request_t *ezsigntemplatepublic_create_ezsignfolder_v1_request) {
    if(NULL == ezsigntemplatepublic_create_ezsignfolder_v1_request){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplatepublic_create_ezsignfolder_v1_request->pks_ezmaxcustomer_code) {
        free(ezsigntemplatepublic_create_ezsignfolder_v1_request->pks_ezmaxcustomer_code);
        ezsigntemplatepublic_create_ezsignfolder_v1_request->pks_ezmaxcustomer_code = NULL;
    }
    if (ezsigntemplatepublic_create_ezsignfolder_v1_request->s_ezsigntemplatepublic_referenceid) {
        free(ezsigntemplatepublic_create_ezsignfolder_v1_request->s_ezsigntemplatepublic_referenceid);
        ezsigntemplatepublic_create_ezsignfolder_v1_request->s_ezsigntemplatepublic_referenceid = NULL;
    }
    if (ezsigntemplatepublic_create_ezsignfolder_v1_request->a_s_ezsigntemplatesigner_description) {
        list_ForEach(listEntry, ezsigntemplatepublic_create_ezsignfolder_v1_request->a_s_ezsigntemplatesigner_description) {
            free(listEntry->data);
        }
        list_freeList(ezsigntemplatepublic_create_ezsignfolder_v1_request->a_s_ezsigntemplatesigner_description);
        ezsigntemplatepublic_create_ezsignfolder_v1_request->a_s_ezsigntemplatesigner_description = NULL;
    }
    if (ezsigntemplatepublic_create_ezsignfolder_v1_request->a_obj_ezsignsigner) {
        list_ForEach(listEntry, ezsigntemplatepublic_create_ezsignfolder_v1_request->a_obj_ezsignsigner) {
            ezsignsigner_request_compound_free(listEntry->data);
        }
        list_freeList(ezsigntemplatepublic_create_ezsignfolder_v1_request->a_obj_ezsignsigner);
        ezsigntemplatepublic_create_ezsignfolder_v1_request->a_obj_ezsignsigner = NULL;
    }
    free(ezsigntemplatepublic_create_ezsignfolder_v1_request);
}

cJSON *ezsigntemplatepublic_create_ezsignfolder_v1_request_convertToJSON(ezsigntemplatepublic_create_ezsignfolder_v1_request_t *ezsigntemplatepublic_create_ezsignfolder_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatepublic_create_ezsignfolder_v1_request->pks_ezmaxcustomer_code
    if (!ezsigntemplatepublic_create_ezsignfolder_v1_request->pks_ezmaxcustomer_code) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "pksEzmaxcustomerCode", ezsigntemplatepublic_create_ezsignfolder_v1_request->pks_ezmaxcustomer_code) == NULL) {
    goto fail; //String
    }


    // ezsigntemplatepublic_create_ezsignfolder_v1_request->s_ezsigntemplatepublic_referenceid
    if (!ezsigntemplatepublic_create_ezsignfolder_v1_request->s_ezsigntemplatepublic_referenceid) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsigntemplatepublicReferenceid", ezsigntemplatepublic_create_ezsignfolder_v1_request->s_ezsigntemplatepublic_referenceid) == NULL) {
    goto fail; //String
    }


    // ezsigntemplatepublic_create_ezsignfolder_v1_request->a_s_ezsigntemplatesigner_description
    if (!ezsigntemplatepublic_create_ezsignfolder_v1_request->a_s_ezsigntemplatesigner_description) {
        goto fail;
    }
    cJSON *a_s_ezsigntemplatesigner_description = cJSON_AddArrayToObject(item, "a_sEzsigntemplatesignerDescription");
    if(a_s_ezsigntemplatesigner_description == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_s_ezsigntemplatesigner_descriptionListEntry;
    list_ForEach(a_s_ezsigntemplatesigner_descriptionListEntry, ezsigntemplatepublic_create_ezsignfolder_v1_request->a_s_ezsigntemplatesigner_description) {
    if(cJSON_AddStringToObject(a_s_ezsigntemplatesigner_description, "", (char*)a_s_ezsigntemplatesigner_descriptionListEntry->data) == NULL)
    {
        goto fail;
    }
    }


    // ezsigntemplatepublic_create_ezsignfolder_v1_request->a_obj_ezsignsigner
    if (!ezsigntemplatepublic_create_ezsignfolder_v1_request->a_obj_ezsignsigner) {
        goto fail;
    }
    cJSON *a_obj_ezsignsigner = cJSON_AddArrayToObject(item, "a_objEzsignsigner");
    if(a_obj_ezsignsigner == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsignsignerListEntry;
    if (ezsigntemplatepublic_create_ezsignfolder_v1_request->a_obj_ezsignsigner) {
    list_ForEach(a_obj_ezsignsignerListEntry, ezsigntemplatepublic_create_ezsignfolder_v1_request->a_obj_ezsignsigner) {
    cJSON *itemLocal = ezsignsigner_request_compound_convertToJSON(a_obj_ezsignsignerListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsignsigner, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigntemplatepublic_create_ezsignfolder_v1_request_t *ezsigntemplatepublic_create_ezsignfolder_v1_request_parseFromJSON(cJSON *ezsigntemplatepublic_create_ezsignfolder_v1_requestJSON){

    ezsigntemplatepublic_create_ezsignfolder_v1_request_t *ezsigntemplatepublic_create_ezsignfolder_v1_request_local_var = NULL;

    // define the local list for ezsigntemplatepublic_create_ezsignfolder_v1_request->a_s_ezsigntemplatesigner_description
    list_t *a_s_ezsigntemplatesigner_descriptionList = NULL;

    // define the local list for ezsigntemplatepublic_create_ezsignfolder_v1_request->a_obj_ezsignsigner
    list_t *a_obj_ezsignsignerList = NULL;

    // ezsigntemplatepublic_create_ezsignfolder_v1_request->pks_ezmaxcustomer_code
    cJSON *pks_ezmaxcustomer_code = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepublic_create_ezsignfolder_v1_requestJSON, "pksEzmaxcustomerCode");
    if (!pks_ezmaxcustomer_code) {
        goto end;
    }

    
    if(!cJSON_IsString(pks_ezmaxcustomer_code))
    {
    goto end; //String
    }

    // ezsigntemplatepublic_create_ezsignfolder_v1_request->s_ezsigntemplatepublic_referenceid
    cJSON *s_ezsigntemplatepublic_referenceid = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepublic_create_ezsignfolder_v1_requestJSON, "sEzsigntemplatepublicReferenceid");
    if (!s_ezsigntemplatepublic_referenceid) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsigntemplatepublic_referenceid))
    {
    goto end; //String
    }

    // ezsigntemplatepublic_create_ezsignfolder_v1_request->a_s_ezsigntemplatesigner_description
    cJSON *a_s_ezsigntemplatesigner_description = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepublic_create_ezsignfolder_v1_requestJSON, "a_sEzsigntemplatesignerDescription");
    if (!a_s_ezsigntemplatesigner_description) {
        goto end;
    }

    
    cJSON *a_s_ezsigntemplatesigner_description_local = NULL;
    if(!cJSON_IsArray(a_s_ezsigntemplatesigner_description)) {
        goto end;//primitive container
    }
    a_s_ezsigntemplatesigner_descriptionList = list_createList();

    cJSON_ArrayForEach(a_s_ezsigntemplatesigner_description_local, a_s_ezsigntemplatesigner_description)
    {
        if(!cJSON_IsString(a_s_ezsigntemplatesigner_description_local))
        {
            goto end;
        }
        list_addElement(a_s_ezsigntemplatesigner_descriptionList , strdup(a_s_ezsigntemplatesigner_description_local->valuestring));
    }

    // ezsigntemplatepublic_create_ezsignfolder_v1_request->a_obj_ezsignsigner
    cJSON *a_obj_ezsignsigner = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepublic_create_ezsignfolder_v1_requestJSON, "a_objEzsignsigner");
    if (!a_obj_ezsignsigner) {
        goto end;
    }

    
    cJSON *a_obj_ezsignsigner_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezsignsigner)){
        goto end; //nonprimitive container
    }

    a_obj_ezsignsignerList = list_createList();

    cJSON_ArrayForEach(a_obj_ezsignsigner_local_nonprimitive,a_obj_ezsignsigner )
    {
        if(!cJSON_IsObject(a_obj_ezsignsigner_local_nonprimitive)){
            goto end;
        }
        ezsignsigner_request_compound_t *a_obj_ezsignsignerItem = ezsignsigner_request_compound_parseFromJSON(a_obj_ezsignsigner_local_nonprimitive);

        list_addElement(a_obj_ezsignsignerList, a_obj_ezsignsignerItem);
    }


    ezsigntemplatepublic_create_ezsignfolder_v1_request_local_var = ezsigntemplatepublic_create_ezsignfolder_v1_request_create (
        strdup(pks_ezmaxcustomer_code->valuestring),
        strdup(s_ezsigntemplatepublic_referenceid->valuestring),
        a_s_ezsigntemplatesigner_descriptionList,
        a_obj_ezsignsignerList
        );

    return ezsigntemplatepublic_create_ezsignfolder_v1_request_local_var;
end:
    if (a_s_ezsigntemplatesigner_descriptionList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_s_ezsigntemplatesigner_descriptionList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_s_ezsigntemplatesigner_descriptionList);
        a_s_ezsigntemplatesigner_descriptionList = NULL;
    }
    if (a_obj_ezsignsignerList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsignsignerList) {
            ezsignsigner_request_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsignsignerList);
        a_obj_ezsignsignerList = NULL;
    }
    return NULL;

}
