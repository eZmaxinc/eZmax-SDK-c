#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignimportfolder_response_compound.h"



static ezsignimportfolder_response_compound_t *ezsignimportfolder_response_compound_create_internal(
    int pki_ezsignimportfolder_id,
    char *s_ezsignimportfolder_name,
    list_t *a_obj_ezsignimportdocument
    ) {
    ezsignimportfolder_response_compound_t *ezsignimportfolder_response_compound_local_var = malloc(sizeof(ezsignimportfolder_response_compound_t));
    if (!ezsignimportfolder_response_compound_local_var) {
        return NULL;
    }
    ezsignimportfolder_response_compound_local_var->pki_ezsignimportfolder_id = pki_ezsignimportfolder_id;
    ezsignimportfolder_response_compound_local_var->s_ezsignimportfolder_name = s_ezsignimportfolder_name;
    ezsignimportfolder_response_compound_local_var->a_obj_ezsignimportdocument = a_obj_ezsignimportdocument;

    ezsignimportfolder_response_compound_local_var->_library_owned = 1;
    return ezsignimportfolder_response_compound_local_var;
}

__attribute__((deprecated)) ezsignimportfolder_response_compound_t *ezsignimportfolder_response_compound_create(
    int pki_ezsignimportfolder_id,
    char *s_ezsignimportfolder_name,
    list_t *a_obj_ezsignimportdocument
    ) {
    return ezsignimportfolder_response_compound_create_internal (
        pki_ezsignimportfolder_id,
        s_ezsignimportfolder_name,
        a_obj_ezsignimportdocument
        );
}

void ezsignimportfolder_response_compound_free(ezsignimportfolder_response_compound_t *ezsignimportfolder_response_compound) {
    if(NULL == ezsignimportfolder_response_compound){
        return ;
    }
    if(ezsignimportfolder_response_compound->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsignimportfolder_response_compound_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignimportfolder_response_compound->s_ezsignimportfolder_name) {
        free(ezsignimportfolder_response_compound->s_ezsignimportfolder_name);
        ezsignimportfolder_response_compound->s_ezsignimportfolder_name = NULL;
    }
    if (ezsignimportfolder_response_compound->a_obj_ezsignimportdocument) {
        list_ForEach(listEntry, ezsignimportfolder_response_compound->a_obj_ezsignimportdocument) {
            custom_ezsignimportdocument_response_free(listEntry->data);
        }
        list_freeList(ezsignimportfolder_response_compound->a_obj_ezsignimportdocument);
        ezsignimportfolder_response_compound->a_obj_ezsignimportdocument = NULL;
    }
    free(ezsignimportfolder_response_compound);
}

cJSON *ezsignimportfolder_response_compound_convertToJSON(ezsignimportfolder_response_compound_t *ezsignimportfolder_response_compound) {
    cJSON *item = cJSON_CreateObject();

    // ezsignimportfolder_response_compound->pki_ezsignimportfolder_id
    if (!ezsignimportfolder_response_compound->pki_ezsignimportfolder_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsignimportfolderID", ezsignimportfolder_response_compound->pki_ezsignimportfolder_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignimportfolder_response_compound->s_ezsignimportfolder_name
    if (!ezsignimportfolder_response_compound->s_ezsignimportfolder_name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsignimportfolderName", ezsignimportfolder_response_compound->s_ezsignimportfolder_name) == NULL) {
    goto fail; //String
    }


    // ezsignimportfolder_response_compound->a_obj_ezsignimportdocument
    if(ezsignimportfolder_response_compound->a_obj_ezsignimportdocument) {
    cJSON *a_obj_ezsignimportdocument = cJSON_AddArrayToObject(item, "a_objEzsignimportdocument");
    if(a_obj_ezsignimportdocument == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsignimportdocumentListEntry;
    if (ezsignimportfolder_response_compound->a_obj_ezsignimportdocument) {
    list_ForEach(a_obj_ezsignimportdocumentListEntry, ezsignimportfolder_response_compound->a_obj_ezsignimportdocument) {
    cJSON *itemLocal = custom_ezsignimportdocument_response_convertToJSON(a_obj_ezsignimportdocumentListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsignimportdocument, itemLocal);
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

ezsignimportfolder_response_compound_t *ezsignimportfolder_response_compound_parseFromJSON(cJSON *ezsignimportfolder_response_compoundJSON){

    ezsignimportfolder_response_compound_t *ezsignimportfolder_response_compound_local_var = NULL;

    // define the local list for ezsignimportfolder_response_compound->a_obj_ezsignimportdocument
    list_t *a_obj_ezsignimportdocumentList = NULL;

    // ezsignimportfolder_response_compound->pki_ezsignimportfolder_id
    cJSON *pki_ezsignimportfolder_id = cJSON_GetObjectItemCaseSensitive(ezsignimportfolder_response_compoundJSON, "pkiEzsignimportfolderID");
    if (cJSON_IsNull(pki_ezsignimportfolder_id)) {
        pki_ezsignimportfolder_id = NULL;
    }
    if (!pki_ezsignimportfolder_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsignimportfolder_id))
    {
    goto end; //Numeric
    }

    // ezsignimportfolder_response_compound->s_ezsignimportfolder_name
    cJSON *s_ezsignimportfolder_name = cJSON_GetObjectItemCaseSensitive(ezsignimportfolder_response_compoundJSON, "sEzsignimportfolderName");
    if (cJSON_IsNull(s_ezsignimportfolder_name)) {
        s_ezsignimportfolder_name = NULL;
    }
    if (!s_ezsignimportfolder_name) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsignimportfolder_name))
    {
    goto end; //String
    }

    // ezsignimportfolder_response_compound->a_obj_ezsignimportdocument
    cJSON *a_obj_ezsignimportdocument = cJSON_GetObjectItemCaseSensitive(ezsignimportfolder_response_compoundJSON, "a_objEzsignimportdocument");
    if (cJSON_IsNull(a_obj_ezsignimportdocument)) {
        a_obj_ezsignimportdocument = NULL;
    }
    if (a_obj_ezsignimportdocument) { 
    cJSON *a_obj_ezsignimportdocument_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezsignimportdocument)){
        goto end; //nonprimitive container
    }

    a_obj_ezsignimportdocumentList = list_createList();

    cJSON_ArrayForEach(a_obj_ezsignimportdocument_local_nonprimitive,a_obj_ezsignimportdocument )
    {
        if(!cJSON_IsObject(a_obj_ezsignimportdocument_local_nonprimitive)){
            goto end;
        }
        custom_ezsignimportdocument_response_t *a_obj_ezsignimportdocumentItem = custom_ezsignimportdocument_response_parseFromJSON(a_obj_ezsignimportdocument_local_nonprimitive);

        list_addElement(a_obj_ezsignimportdocumentList, a_obj_ezsignimportdocumentItem);
    }
    }


    ezsignimportfolder_response_compound_local_var = ezsignimportfolder_response_compound_create_internal (
        pki_ezsignimportfolder_id->valuedouble,
        strdup(s_ezsignimportfolder_name->valuestring),
        a_obj_ezsignimportdocument ? a_obj_ezsignimportdocumentList : NULL
        );

    return ezsignimportfolder_response_compound_local_var;
end:
    if (a_obj_ezsignimportdocumentList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsignimportdocumentList) {
            custom_ezsignimportdocument_response_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsignimportdocumentList);
        a_obj_ezsignimportdocumentList = NULL;
    }
    return NULL;

}
