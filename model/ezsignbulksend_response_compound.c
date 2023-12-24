#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignbulksend_response_compound.h"


char* e_ezsignfoldertype_privacylevelezsignbulksend_response_compound_ToString(ezmax_api_definition__full_ezsignbulksend_response_compound__e e_ezsignfoldertype_privacylevel) {
    char* e_ezsignfoldertype_privacylevelArray[] =  { "NULL", "User", "Usergroup" };
    return e_ezsignfoldertype_privacylevelArray[e_ezsignfoldertype_privacylevel];
}

ezmax_api_definition__full_ezsignbulksend_response_compound__e e_ezsignfoldertype_privacylevelezsignbulksend_response_compound_FromString(char* e_ezsignfoldertype_privacylevel){
    int stringToReturn = 0;
    char *e_ezsignfoldertype_privacylevelArray[] =  { "NULL", "User", "Usergroup" };
    size_t sizeofArray = sizeof(e_ezsignfoldertype_privacylevelArray) / sizeof(e_ezsignfoldertype_privacylevelArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_ezsignfoldertype_privacylevel, e_ezsignfoldertype_privacylevelArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

ezsignbulksend_response_compound_t *ezsignbulksend_response_compound_create(
    int pki_ezsignbulksend_id,
    int fki_ezsignfoldertype_id,
    int fki_language_id,
    char *s_language_name_x,
    field_e_ezsignfoldertype_privacylevel_t *e_ezsignfoldertype_privacylevel,
    char *s_ezsignfoldertype_name_x,
    char *s_ezsignbulksend_description,
    char *t_ezsignbulksend_note,
    int b_ezsignbulksend_needvalidation,
    int b_ezsignbulksend_isactive,
    common_audit_t *obj_audit,
    list_t *a_obj_ezsignbulksenddocumentmapping,
    list_t *a_obj_ezsignbulksendsignermapping
    ) {
    ezsignbulksend_response_compound_t *ezsignbulksend_response_compound_local_var = malloc(sizeof(ezsignbulksend_response_compound_t));
    if (!ezsignbulksend_response_compound_local_var) {
        return NULL;
    }
    ezsignbulksend_response_compound_local_var->pki_ezsignbulksend_id = pki_ezsignbulksend_id;
    ezsignbulksend_response_compound_local_var->fki_ezsignfoldertype_id = fki_ezsignfoldertype_id;
    ezsignbulksend_response_compound_local_var->fki_language_id = fki_language_id;
    ezsignbulksend_response_compound_local_var->s_language_name_x = s_language_name_x;
    ezsignbulksend_response_compound_local_var->e_ezsignfoldertype_privacylevel = e_ezsignfoldertype_privacylevel;
    ezsignbulksend_response_compound_local_var->s_ezsignfoldertype_name_x = s_ezsignfoldertype_name_x;
    ezsignbulksend_response_compound_local_var->s_ezsignbulksend_description = s_ezsignbulksend_description;
    ezsignbulksend_response_compound_local_var->t_ezsignbulksend_note = t_ezsignbulksend_note;
    ezsignbulksend_response_compound_local_var->b_ezsignbulksend_needvalidation = b_ezsignbulksend_needvalidation;
    ezsignbulksend_response_compound_local_var->b_ezsignbulksend_isactive = b_ezsignbulksend_isactive;
    ezsignbulksend_response_compound_local_var->obj_audit = obj_audit;
    ezsignbulksend_response_compound_local_var->a_obj_ezsignbulksenddocumentmapping = a_obj_ezsignbulksenddocumentmapping;
    ezsignbulksend_response_compound_local_var->a_obj_ezsignbulksendsignermapping = a_obj_ezsignbulksendsignermapping;

    return ezsignbulksend_response_compound_local_var;
}


void ezsignbulksend_response_compound_free(ezsignbulksend_response_compound_t *ezsignbulksend_response_compound) {
    if(NULL == ezsignbulksend_response_compound){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignbulksend_response_compound->s_language_name_x) {
        free(ezsignbulksend_response_compound->s_language_name_x);
        ezsignbulksend_response_compound->s_language_name_x = NULL;
    }
    if (ezsignbulksend_response_compound->e_ezsignfoldertype_privacylevel) {
        field_e_ezsignfoldertype_privacylevel_free(ezsignbulksend_response_compound->e_ezsignfoldertype_privacylevel);
        ezsignbulksend_response_compound->e_ezsignfoldertype_privacylevel = NULL;
    }
    if (ezsignbulksend_response_compound->s_ezsignfoldertype_name_x) {
        free(ezsignbulksend_response_compound->s_ezsignfoldertype_name_x);
        ezsignbulksend_response_compound->s_ezsignfoldertype_name_x = NULL;
    }
    if (ezsignbulksend_response_compound->s_ezsignbulksend_description) {
        free(ezsignbulksend_response_compound->s_ezsignbulksend_description);
        ezsignbulksend_response_compound->s_ezsignbulksend_description = NULL;
    }
    if (ezsignbulksend_response_compound->t_ezsignbulksend_note) {
        free(ezsignbulksend_response_compound->t_ezsignbulksend_note);
        ezsignbulksend_response_compound->t_ezsignbulksend_note = NULL;
    }
    if (ezsignbulksend_response_compound->obj_audit) {
        common_audit_free(ezsignbulksend_response_compound->obj_audit);
        ezsignbulksend_response_compound->obj_audit = NULL;
    }
    if (ezsignbulksend_response_compound->a_obj_ezsignbulksenddocumentmapping) {
        list_ForEach(listEntry, ezsignbulksend_response_compound->a_obj_ezsignbulksenddocumentmapping) {
            ezsignbulksenddocumentmapping_response_compound_free(listEntry->data);
        }
        list_freeList(ezsignbulksend_response_compound->a_obj_ezsignbulksenddocumentmapping);
        ezsignbulksend_response_compound->a_obj_ezsignbulksenddocumentmapping = NULL;
    }
    if (ezsignbulksend_response_compound->a_obj_ezsignbulksendsignermapping) {
        list_ForEach(listEntry, ezsignbulksend_response_compound->a_obj_ezsignbulksendsignermapping) {
            ezsignbulksendsignermapping_response_free(listEntry->data);
        }
        list_freeList(ezsignbulksend_response_compound->a_obj_ezsignbulksendsignermapping);
        ezsignbulksend_response_compound->a_obj_ezsignbulksendsignermapping = NULL;
    }
    free(ezsignbulksend_response_compound);
}

cJSON *ezsignbulksend_response_compound_convertToJSON(ezsignbulksend_response_compound_t *ezsignbulksend_response_compound) {
    cJSON *item = cJSON_CreateObject();

    // ezsignbulksend_response_compound->pki_ezsignbulksend_id
    if (!ezsignbulksend_response_compound->pki_ezsignbulksend_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsignbulksendID", ezsignbulksend_response_compound->pki_ezsignbulksend_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignbulksend_response_compound->fki_ezsignfoldertype_id
    if (!ezsignbulksend_response_compound->fki_ezsignfoldertype_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsignfoldertypeID", ezsignbulksend_response_compound->fki_ezsignfoldertype_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignbulksend_response_compound->fki_language_id
    if (!ezsignbulksend_response_compound->fki_language_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiLanguageID", ezsignbulksend_response_compound->fki_language_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignbulksend_response_compound->s_language_name_x
    if (!ezsignbulksend_response_compound->s_language_name_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sLanguageNameX", ezsignbulksend_response_compound->s_language_name_x) == NULL) {
    goto fail; //String
    }


    // ezsignbulksend_response_compound->e_ezsignfoldertype_privacylevel
    if (ezmax_api_definition__full_ezsignbulksend_response_compound__NULL == ezsignbulksend_response_compound->e_ezsignfoldertype_privacylevel) {
        goto fail;
    }
    cJSON *e_ezsignfoldertype_privacylevel_local_JSON = field_e_ezsignfoldertype_privacylevel_convertToJSON(ezsignbulksend_response_compound->e_ezsignfoldertype_privacylevel);
    if(e_ezsignfoldertype_privacylevel_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignfoldertypePrivacylevel", e_ezsignfoldertype_privacylevel_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // ezsignbulksend_response_compound->s_ezsignfoldertype_name_x
    if (!ezsignbulksend_response_compound->s_ezsignfoldertype_name_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsignfoldertypeNameX", ezsignbulksend_response_compound->s_ezsignfoldertype_name_x) == NULL) {
    goto fail; //String
    }


    // ezsignbulksend_response_compound->s_ezsignbulksend_description
    if (!ezsignbulksend_response_compound->s_ezsignbulksend_description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsignbulksendDescription", ezsignbulksend_response_compound->s_ezsignbulksend_description) == NULL) {
    goto fail; //String
    }


    // ezsignbulksend_response_compound->t_ezsignbulksend_note
    if (!ezsignbulksend_response_compound->t_ezsignbulksend_note) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "tEzsignbulksendNote", ezsignbulksend_response_compound->t_ezsignbulksend_note) == NULL) {
    goto fail; //String
    }


    // ezsignbulksend_response_compound->b_ezsignbulksend_needvalidation
    if (!ezsignbulksend_response_compound->b_ezsignbulksend_needvalidation) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsignbulksendNeedvalidation", ezsignbulksend_response_compound->b_ezsignbulksend_needvalidation) == NULL) {
    goto fail; //Bool
    }


    // ezsignbulksend_response_compound->b_ezsignbulksend_isactive
    if (!ezsignbulksend_response_compound->b_ezsignbulksend_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsignbulksendIsactive", ezsignbulksend_response_compound->b_ezsignbulksend_isactive) == NULL) {
    goto fail; //Bool
    }


    // ezsignbulksend_response_compound->obj_audit
    if (!ezsignbulksend_response_compound->obj_audit) {
        goto fail;
    }
    cJSON *obj_audit_local_JSON = common_audit_convertToJSON(ezsignbulksend_response_compound->obj_audit);
    if(obj_audit_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objAudit", obj_audit_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // ezsignbulksend_response_compound->a_obj_ezsignbulksenddocumentmapping
    if (!ezsignbulksend_response_compound->a_obj_ezsignbulksenddocumentmapping) {
        goto fail;
    }
    cJSON *a_obj_ezsignbulksenddocumentmapping = cJSON_AddArrayToObject(item, "a_objEzsignbulksenddocumentmapping");
    if(a_obj_ezsignbulksenddocumentmapping == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsignbulksenddocumentmappingListEntry;
    if (ezsignbulksend_response_compound->a_obj_ezsignbulksenddocumentmapping) {
    list_ForEach(a_obj_ezsignbulksenddocumentmappingListEntry, ezsignbulksend_response_compound->a_obj_ezsignbulksenddocumentmapping) {
    cJSON *itemLocal = ezsignbulksenddocumentmapping_response_compound_convertToJSON(a_obj_ezsignbulksenddocumentmappingListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsignbulksenddocumentmapping, itemLocal);
    }
    }


    // ezsignbulksend_response_compound->a_obj_ezsignbulksendsignermapping
    if (!ezsignbulksend_response_compound->a_obj_ezsignbulksendsignermapping) {
        goto fail;
    }
    cJSON *a_obj_ezsignbulksendsignermapping = cJSON_AddArrayToObject(item, "a_objEzsignbulksendsignermapping");
    if(a_obj_ezsignbulksendsignermapping == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsignbulksendsignermappingListEntry;
    if (ezsignbulksend_response_compound->a_obj_ezsignbulksendsignermapping) {
    list_ForEach(a_obj_ezsignbulksendsignermappingListEntry, ezsignbulksend_response_compound->a_obj_ezsignbulksendsignermapping) {
    cJSON *itemLocal = ezsignbulksendsignermapping_response_convertToJSON(a_obj_ezsignbulksendsignermappingListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsignbulksendsignermapping, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsignbulksend_response_compound_t *ezsignbulksend_response_compound_parseFromJSON(cJSON *ezsignbulksend_response_compoundJSON){

    ezsignbulksend_response_compound_t *ezsignbulksend_response_compound_local_var = NULL;

    // define the local variable for ezsignbulksend_response_compound->e_ezsignfoldertype_privacylevel
    field_e_ezsignfoldertype_privacylevel_t *e_ezsignfoldertype_privacylevel_local_nonprim = NULL;

    // define the local variable for ezsignbulksend_response_compound->obj_audit
    common_audit_t *obj_audit_local_nonprim = NULL;

    // define the local list for ezsignbulksend_response_compound->a_obj_ezsignbulksenddocumentmapping
    list_t *a_obj_ezsignbulksenddocumentmappingList = NULL;

    // define the local list for ezsignbulksend_response_compound->a_obj_ezsignbulksendsignermapping
    list_t *a_obj_ezsignbulksendsignermappingList = NULL;

    // ezsignbulksend_response_compound->pki_ezsignbulksend_id
    cJSON *pki_ezsignbulksend_id = cJSON_GetObjectItemCaseSensitive(ezsignbulksend_response_compoundJSON, "pkiEzsignbulksendID");
    if (!pki_ezsignbulksend_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsignbulksend_id))
    {
    goto end; //Numeric
    }

    // ezsignbulksend_response_compound->fki_ezsignfoldertype_id
    cJSON *fki_ezsignfoldertype_id = cJSON_GetObjectItemCaseSensitive(ezsignbulksend_response_compoundJSON, "fkiEzsignfoldertypeID");
    if (!fki_ezsignfoldertype_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsignfoldertype_id))
    {
    goto end; //Numeric
    }

    // ezsignbulksend_response_compound->fki_language_id
    cJSON *fki_language_id = cJSON_GetObjectItemCaseSensitive(ezsignbulksend_response_compoundJSON, "fkiLanguageID");
    if (!fki_language_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_language_id))
    {
    goto end; //Numeric
    }

    // ezsignbulksend_response_compound->s_language_name_x
    cJSON *s_language_name_x = cJSON_GetObjectItemCaseSensitive(ezsignbulksend_response_compoundJSON, "sLanguageNameX");
    if (!s_language_name_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_language_name_x))
    {
    goto end; //String
    }

    // ezsignbulksend_response_compound->e_ezsignfoldertype_privacylevel
    cJSON *e_ezsignfoldertype_privacylevel = cJSON_GetObjectItemCaseSensitive(ezsignbulksend_response_compoundJSON, "eEzsignfoldertypePrivacylevel");
    if (!e_ezsignfoldertype_privacylevel) {
        goto end;
    }

    
    e_ezsignfoldertype_privacylevel_local_nonprim = field_e_ezsignfoldertype_privacylevel_parseFromJSON(e_ezsignfoldertype_privacylevel); //custom

    // ezsignbulksend_response_compound->s_ezsignfoldertype_name_x
    cJSON *s_ezsignfoldertype_name_x = cJSON_GetObjectItemCaseSensitive(ezsignbulksend_response_compoundJSON, "sEzsignfoldertypeNameX");
    if (!s_ezsignfoldertype_name_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsignfoldertype_name_x))
    {
    goto end; //String
    }

    // ezsignbulksend_response_compound->s_ezsignbulksend_description
    cJSON *s_ezsignbulksend_description = cJSON_GetObjectItemCaseSensitive(ezsignbulksend_response_compoundJSON, "sEzsignbulksendDescription");
    if (!s_ezsignbulksend_description) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsignbulksend_description))
    {
    goto end; //String
    }

    // ezsignbulksend_response_compound->t_ezsignbulksend_note
    cJSON *t_ezsignbulksend_note = cJSON_GetObjectItemCaseSensitive(ezsignbulksend_response_compoundJSON, "tEzsignbulksendNote");
    if (!t_ezsignbulksend_note) {
        goto end;
    }

    
    if(!cJSON_IsString(t_ezsignbulksend_note))
    {
    goto end; //String
    }

    // ezsignbulksend_response_compound->b_ezsignbulksend_needvalidation
    cJSON *b_ezsignbulksend_needvalidation = cJSON_GetObjectItemCaseSensitive(ezsignbulksend_response_compoundJSON, "bEzsignbulksendNeedvalidation");
    if (!b_ezsignbulksend_needvalidation) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsignbulksend_needvalidation))
    {
    goto end; //Bool
    }

    // ezsignbulksend_response_compound->b_ezsignbulksend_isactive
    cJSON *b_ezsignbulksend_isactive = cJSON_GetObjectItemCaseSensitive(ezsignbulksend_response_compoundJSON, "bEzsignbulksendIsactive");
    if (!b_ezsignbulksend_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsignbulksend_isactive))
    {
    goto end; //Bool
    }

    // ezsignbulksend_response_compound->obj_audit
    cJSON *obj_audit = cJSON_GetObjectItemCaseSensitive(ezsignbulksend_response_compoundJSON, "objAudit");
    if (!obj_audit) {
        goto end;
    }

    
    obj_audit_local_nonprim = common_audit_parseFromJSON(obj_audit); //nonprimitive

    // ezsignbulksend_response_compound->a_obj_ezsignbulksenddocumentmapping
    cJSON *a_obj_ezsignbulksenddocumentmapping = cJSON_GetObjectItemCaseSensitive(ezsignbulksend_response_compoundJSON, "a_objEzsignbulksenddocumentmapping");
    if (!a_obj_ezsignbulksenddocumentmapping) {
        goto end;
    }

    
    cJSON *a_obj_ezsignbulksenddocumentmapping_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezsignbulksenddocumentmapping)){
        goto end; //nonprimitive container
    }

    a_obj_ezsignbulksenddocumentmappingList = list_createList();

    cJSON_ArrayForEach(a_obj_ezsignbulksenddocumentmapping_local_nonprimitive,a_obj_ezsignbulksenddocumentmapping )
    {
        if(!cJSON_IsObject(a_obj_ezsignbulksenddocumentmapping_local_nonprimitive)){
            goto end;
        }
        ezsignbulksenddocumentmapping_response_compound_t *a_obj_ezsignbulksenddocumentmappingItem = ezsignbulksenddocumentmapping_response_compound_parseFromJSON(a_obj_ezsignbulksenddocumentmapping_local_nonprimitive);

        list_addElement(a_obj_ezsignbulksenddocumentmappingList, a_obj_ezsignbulksenddocumentmappingItem);
    }

    // ezsignbulksend_response_compound->a_obj_ezsignbulksendsignermapping
    cJSON *a_obj_ezsignbulksendsignermapping = cJSON_GetObjectItemCaseSensitive(ezsignbulksend_response_compoundJSON, "a_objEzsignbulksendsignermapping");
    if (!a_obj_ezsignbulksendsignermapping) {
        goto end;
    }

    
    cJSON *a_obj_ezsignbulksendsignermapping_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezsignbulksendsignermapping)){
        goto end; //nonprimitive container
    }

    a_obj_ezsignbulksendsignermappingList = list_createList();

    cJSON_ArrayForEach(a_obj_ezsignbulksendsignermapping_local_nonprimitive,a_obj_ezsignbulksendsignermapping )
    {
        if(!cJSON_IsObject(a_obj_ezsignbulksendsignermapping_local_nonprimitive)){
            goto end;
        }
        ezsignbulksendsignermapping_response_t *a_obj_ezsignbulksendsignermappingItem = ezsignbulksendsignermapping_response_parseFromJSON(a_obj_ezsignbulksendsignermapping_local_nonprimitive);

        list_addElement(a_obj_ezsignbulksendsignermappingList, a_obj_ezsignbulksendsignermappingItem);
    }


    ezsignbulksend_response_compound_local_var = ezsignbulksend_response_compound_create (
        pki_ezsignbulksend_id->valuedouble,
        fki_ezsignfoldertype_id->valuedouble,
        fki_language_id->valuedouble,
        strdup(s_language_name_x->valuestring),
        e_ezsignfoldertype_privacylevel_local_nonprim,
        strdup(s_ezsignfoldertype_name_x->valuestring),
        strdup(s_ezsignbulksend_description->valuestring),
        strdup(t_ezsignbulksend_note->valuestring),
        b_ezsignbulksend_needvalidation->valueint,
        b_ezsignbulksend_isactive->valueint,
        obj_audit_local_nonprim,
        a_obj_ezsignbulksenddocumentmappingList,
        a_obj_ezsignbulksendsignermappingList
        );

    return ezsignbulksend_response_compound_local_var;
end:
    if (e_ezsignfoldertype_privacylevel_local_nonprim) {
        field_e_ezsignfoldertype_privacylevel_free(e_ezsignfoldertype_privacylevel_local_nonprim);
        e_ezsignfoldertype_privacylevel_local_nonprim = NULL;
    }
    if (obj_audit_local_nonprim) {
        common_audit_free(obj_audit_local_nonprim);
        obj_audit_local_nonprim = NULL;
    }
    if (a_obj_ezsignbulksenddocumentmappingList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsignbulksenddocumentmappingList) {
            ezsignbulksenddocumentmapping_response_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsignbulksenddocumentmappingList);
        a_obj_ezsignbulksenddocumentmappingList = NULL;
    }
    if (a_obj_ezsignbulksendsignermappingList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsignbulksendsignermappingList) {
            ezsignbulksendsignermapping_response_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsignbulksendsignermappingList);
        a_obj_ezsignbulksendsignermappingList = NULL;
    }
    return NULL;

}
