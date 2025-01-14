#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatepublic_response_compound.h"


char* ezsigntemplatepublic_response_compound_e_ezsigntemplatepublic_limittype_ToString(ezmax_api_definition__full_ezsigntemplatepublic_response_compound__e e_ezsigntemplatepublic_limittype) {
    char* e_ezsigntemplatepublic_limittypeArray[] =  { "NULL", "Hour", "Day", "Month", "Total" };
    return e_ezsigntemplatepublic_limittypeArray[e_ezsigntemplatepublic_limittype];
}

ezmax_api_definition__full_ezsigntemplatepublic_response_compound__e ezsigntemplatepublic_response_compound_e_ezsigntemplatepublic_limittype_FromString(char* e_ezsigntemplatepublic_limittype){
    int stringToReturn = 0;
    char *e_ezsigntemplatepublic_limittypeArray[] =  { "NULL", "Hour", "Day", "Month", "Total" };
    size_t sizeofArray = sizeof(e_ezsigntemplatepublic_limittypeArray) / sizeof(e_ezsigntemplatepublic_limittypeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_ezsigntemplatepublic_limittype, e_ezsigntemplatepublic_limittypeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

ezsigntemplatepublic_response_compound_t *ezsigntemplatepublic_response_compound_create(
    int pki_ezsigntemplatepublic_id,
    int fki_ezsignfoldertype_id,
    char *s_ezsignfoldertype_name_x,
    int fki_userlogintype_id,
    char *s_userlogintype_description_x,
    int fki_ezsigntemplate_id,
    int fki_ezsigntemplatepackage_id,
    char *s_ezsigntemplatepublic_description,
    char *s_ezsigntemplatepublic_referenceid,
    int b_ezsigntemplatepublic_isactive,
    char *t_ezsigntemplatepublic_note,
    field_e_ezsigntemplatepublic_limittype_t *e_ezsigntemplatepublic_limittype,
    int i_ezsigntemplatepublic_limit,
    int i_ezsigntemplatepublic_limitexceeded,
    char *dt_ezsigntemplatepublic_limitexceededsince,
    char *s_ezsigntemplatepublic_url,
    char *s_ezsigntemplatepublic_ezsigntemplatedescription,
    common_audit_t *obj_audit,
    list_t *a_obj_ezsignfolderezsigntemplatepublic
    ) {
    ezsigntemplatepublic_response_compound_t *ezsigntemplatepublic_response_compound_local_var = malloc(sizeof(ezsigntemplatepublic_response_compound_t));
    if (!ezsigntemplatepublic_response_compound_local_var) {
        return NULL;
    }
    ezsigntemplatepublic_response_compound_local_var->pki_ezsigntemplatepublic_id = pki_ezsigntemplatepublic_id;
    ezsigntemplatepublic_response_compound_local_var->fki_ezsignfoldertype_id = fki_ezsignfoldertype_id;
    ezsigntemplatepublic_response_compound_local_var->s_ezsignfoldertype_name_x = s_ezsignfoldertype_name_x;
    ezsigntemplatepublic_response_compound_local_var->fki_userlogintype_id = fki_userlogintype_id;
    ezsigntemplatepublic_response_compound_local_var->s_userlogintype_description_x = s_userlogintype_description_x;
    ezsigntemplatepublic_response_compound_local_var->fki_ezsigntemplate_id = fki_ezsigntemplate_id;
    ezsigntemplatepublic_response_compound_local_var->fki_ezsigntemplatepackage_id = fki_ezsigntemplatepackage_id;
    ezsigntemplatepublic_response_compound_local_var->s_ezsigntemplatepublic_description = s_ezsigntemplatepublic_description;
    ezsigntemplatepublic_response_compound_local_var->s_ezsigntemplatepublic_referenceid = s_ezsigntemplatepublic_referenceid;
    ezsigntemplatepublic_response_compound_local_var->b_ezsigntemplatepublic_isactive = b_ezsigntemplatepublic_isactive;
    ezsigntemplatepublic_response_compound_local_var->t_ezsigntemplatepublic_note = t_ezsigntemplatepublic_note;
    ezsigntemplatepublic_response_compound_local_var->e_ezsigntemplatepublic_limittype = e_ezsigntemplatepublic_limittype;
    ezsigntemplatepublic_response_compound_local_var->i_ezsigntemplatepublic_limit = i_ezsigntemplatepublic_limit;
    ezsigntemplatepublic_response_compound_local_var->i_ezsigntemplatepublic_limitexceeded = i_ezsigntemplatepublic_limitexceeded;
    ezsigntemplatepublic_response_compound_local_var->dt_ezsigntemplatepublic_limitexceededsince = dt_ezsigntemplatepublic_limitexceededsince;
    ezsigntemplatepublic_response_compound_local_var->s_ezsigntemplatepublic_url = s_ezsigntemplatepublic_url;
    ezsigntemplatepublic_response_compound_local_var->s_ezsigntemplatepublic_ezsigntemplatedescription = s_ezsigntemplatepublic_ezsigntemplatedescription;
    ezsigntemplatepublic_response_compound_local_var->obj_audit = obj_audit;
    ezsigntemplatepublic_response_compound_local_var->a_obj_ezsignfolderezsigntemplatepublic = a_obj_ezsignfolderezsigntemplatepublic;

    return ezsigntemplatepublic_response_compound_local_var;
}


void ezsigntemplatepublic_response_compound_free(ezsigntemplatepublic_response_compound_t *ezsigntemplatepublic_response_compound) {
    if(NULL == ezsigntemplatepublic_response_compound){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplatepublic_response_compound->s_ezsignfoldertype_name_x) {
        free(ezsigntemplatepublic_response_compound->s_ezsignfoldertype_name_x);
        ezsigntemplatepublic_response_compound->s_ezsignfoldertype_name_x = NULL;
    }
    if (ezsigntemplatepublic_response_compound->s_userlogintype_description_x) {
        free(ezsigntemplatepublic_response_compound->s_userlogintype_description_x);
        ezsigntemplatepublic_response_compound->s_userlogintype_description_x = NULL;
    }
    if (ezsigntemplatepublic_response_compound->s_ezsigntemplatepublic_description) {
        free(ezsigntemplatepublic_response_compound->s_ezsigntemplatepublic_description);
        ezsigntemplatepublic_response_compound->s_ezsigntemplatepublic_description = NULL;
    }
    if (ezsigntemplatepublic_response_compound->s_ezsigntemplatepublic_referenceid) {
        free(ezsigntemplatepublic_response_compound->s_ezsigntemplatepublic_referenceid);
        ezsigntemplatepublic_response_compound->s_ezsigntemplatepublic_referenceid = NULL;
    }
    if (ezsigntemplatepublic_response_compound->t_ezsigntemplatepublic_note) {
        free(ezsigntemplatepublic_response_compound->t_ezsigntemplatepublic_note);
        ezsigntemplatepublic_response_compound->t_ezsigntemplatepublic_note = NULL;
    }
    if (ezsigntemplatepublic_response_compound->e_ezsigntemplatepublic_limittype) {
        field_e_ezsigntemplatepublic_limittype_free(ezsigntemplatepublic_response_compound->e_ezsigntemplatepublic_limittype);
        ezsigntemplatepublic_response_compound->e_ezsigntemplatepublic_limittype = NULL;
    }
    if (ezsigntemplatepublic_response_compound->dt_ezsigntemplatepublic_limitexceededsince) {
        free(ezsigntemplatepublic_response_compound->dt_ezsigntemplatepublic_limitexceededsince);
        ezsigntemplatepublic_response_compound->dt_ezsigntemplatepublic_limitexceededsince = NULL;
    }
    if (ezsigntemplatepublic_response_compound->s_ezsigntemplatepublic_url) {
        free(ezsigntemplatepublic_response_compound->s_ezsigntemplatepublic_url);
        ezsigntemplatepublic_response_compound->s_ezsigntemplatepublic_url = NULL;
    }
    if (ezsigntemplatepublic_response_compound->s_ezsigntemplatepublic_ezsigntemplatedescription) {
        free(ezsigntemplatepublic_response_compound->s_ezsigntemplatepublic_ezsigntemplatedescription);
        ezsigntemplatepublic_response_compound->s_ezsigntemplatepublic_ezsigntemplatedescription = NULL;
    }
    if (ezsigntemplatepublic_response_compound->obj_audit) {
        common_audit_free(ezsigntemplatepublic_response_compound->obj_audit);
        ezsigntemplatepublic_response_compound->obj_audit = NULL;
    }
    if (ezsigntemplatepublic_response_compound->a_obj_ezsignfolderezsigntemplatepublic) {
        list_ForEach(listEntry, ezsigntemplatepublic_response_compound->a_obj_ezsignfolderezsigntemplatepublic) {
            custom_ezsignfolderezsigntemplatepublic_response_free(listEntry->data);
        }
        list_freeList(ezsigntemplatepublic_response_compound->a_obj_ezsignfolderezsigntemplatepublic);
        ezsigntemplatepublic_response_compound->a_obj_ezsignfolderezsigntemplatepublic = NULL;
    }
    free(ezsigntemplatepublic_response_compound);
}

cJSON *ezsigntemplatepublic_response_compound_convertToJSON(ezsigntemplatepublic_response_compound_t *ezsigntemplatepublic_response_compound) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatepublic_response_compound->pki_ezsigntemplatepublic_id
    if (!ezsigntemplatepublic_response_compound->pki_ezsigntemplatepublic_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsigntemplatepublicID", ezsigntemplatepublic_response_compound->pki_ezsigntemplatepublic_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatepublic_response_compound->fki_ezsignfoldertype_id
    if (!ezsigntemplatepublic_response_compound->fki_ezsignfoldertype_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsignfoldertypeID", ezsigntemplatepublic_response_compound->fki_ezsignfoldertype_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatepublic_response_compound->s_ezsignfoldertype_name_x
    if (!ezsigntemplatepublic_response_compound->s_ezsignfoldertype_name_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsignfoldertypeNameX", ezsigntemplatepublic_response_compound->s_ezsignfoldertype_name_x) == NULL) {
    goto fail; //String
    }


    // ezsigntemplatepublic_response_compound->fki_userlogintype_id
    if (!ezsigntemplatepublic_response_compound->fki_userlogintype_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiUserlogintypeID", ezsigntemplatepublic_response_compound->fki_userlogintype_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatepublic_response_compound->s_userlogintype_description_x
    if (!ezsigntemplatepublic_response_compound->s_userlogintype_description_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sUserlogintypeDescriptionX", ezsigntemplatepublic_response_compound->s_userlogintype_description_x) == NULL) {
    goto fail; //String
    }


    // ezsigntemplatepublic_response_compound->fki_ezsigntemplate_id
    if(ezsigntemplatepublic_response_compound->fki_ezsigntemplate_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzsigntemplateID", ezsigntemplatepublic_response_compound->fki_ezsigntemplate_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplatepublic_response_compound->fki_ezsigntemplatepackage_id
    if(ezsigntemplatepublic_response_compound->fki_ezsigntemplatepackage_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzsigntemplatepackageID", ezsigntemplatepublic_response_compound->fki_ezsigntemplatepackage_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplatepublic_response_compound->s_ezsigntemplatepublic_description
    if (!ezsigntemplatepublic_response_compound->s_ezsigntemplatepublic_description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsigntemplatepublicDescription", ezsigntemplatepublic_response_compound->s_ezsigntemplatepublic_description) == NULL) {
    goto fail; //String
    }


    // ezsigntemplatepublic_response_compound->s_ezsigntemplatepublic_referenceid
    if (!ezsigntemplatepublic_response_compound->s_ezsigntemplatepublic_referenceid) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsigntemplatepublicReferenceid", ezsigntemplatepublic_response_compound->s_ezsigntemplatepublic_referenceid) == NULL) {
    goto fail; //String
    }


    // ezsigntemplatepublic_response_compound->b_ezsigntemplatepublic_isactive
    if (!ezsigntemplatepublic_response_compound->b_ezsigntemplatepublic_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsigntemplatepublicIsactive", ezsigntemplatepublic_response_compound->b_ezsigntemplatepublic_isactive) == NULL) {
    goto fail; //Bool
    }


    // ezsigntemplatepublic_response_compound->t_ezsigntemplatepublic_note
    if (!ezsigntemplatepublic_response_compound->t_ezsigntemplatepublic_note) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "tEzsigntemplatepublicNote", ezsigntemplatepublic_response_compound->t_ezsigntemplatepublic_note) == NULL) {
    goto fail; //String
    }


    // ezsigntemplatepublic_response_compound->e_ezsigntemplatepublic_limittype
    if (ezmax_api_definition__full_ezsigntemplatepublic_response_compound__NULL == ezsigntemplatepublic_response_compound->e_ezsigntemplatepublic_limittype) {
        goto fail;
    }
    cJSON *e_ezsigntemplatepublic_limittype_local_JSON = field_e_ezsigntemplatepublic_limittype_convertToJSON(ezsigntemplatepublic_response_compound->e_ezsigntemplatepublic_limittype);
    if(e_ezsigntemplatepublic_limittype_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsigntemplatepublicLimittype", e_ezsigntemplatepublic_limittype_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // ezsigntemplatepublic_response_compound->i_ezsigntemplatepublic_limit
    if (!ezsigntemplatepublic_response_compound->i_ezsigntemplatepublic_limit) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsigntemplatepublicLimit", ezsigntemplatepublic_response_compound->i_ezsigntemplatepublic_limit) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatepublic_response_compound->i_ezsigntemplatepublic_limitexceeded
    if (!ezsigntemplatepublic_response_compound->i_ezsigntemplatepublic_limitexceeded) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsigntemplatepublicLimitexceeded", ezsigntemplatepublic_response_compound->i_ezsigntemplatepublic_limitexceeded) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatepublic_response_compound->dt_ezsigntemplatepublic_limitexceededsince
    if (!ezsigntemplatepublic_response_compound->dt_ezsigntemplatepublic_limitexceededsince) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dtEzsigntemplatepublicLimitexceededsince", ezsigntemplatepublic_response_compound->dt_ezsigntemplatepublic_limitexceededsince) == NULL) {
    goto fail; //String
    }


    // ezsigntemplatepublic_response_compound->s_ezsigntemplatepublic_url
    if (!ezsigntemplatepublic_response_compound->s_ezsigntemplatepublic_url) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsigntemplatepublicUrl", ezsigntemplatepublic_response_compound->s_ezsigntemplatepublic_url) == NULL) {
    goto fail; //String
    }


    // ezsigntemplatepublic_response_compound->s_ezsigntemplatepublic_ezsigntemplatedescription
    if (!ezsigntemplatepublic_response_compound->s_ezsigntemplatepublic_ezsigntemplatedescription) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsigntemplatepublicEzsigntemplatedescription", ezsigntemplatepublic_response_compound->s_ezsigntemplatepublic_ezsigntemplatedescription) == NULL) {
    goto fail; //String
    }


    // ezsigntemplatepublic_response_compound->obj_audit
    if(ezsigntemplatepublic_response_compound->obj_audit) {
    cJSON *obj_audit_local_JSON = common_audit_convertToJSON(ezsigntemplatepublic_response_compound->obj_audit);
    if(obj_audit_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objAudit", obj_audit_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // ezsigntemplatepublic_response_compound->a_obj_ezsignfolderezsigntemplatepublic
    if (!ezsigntemplatepublic_response_compound->a_obj_ezsignfolderezsigntemplatepublic) {
        goto fail;
    }
    cJSON *a_obj_ezsignfolderezsigntemplatepublic = cJSON_AddArrayToObject(item, "a_objEzsignfolderezsigntemplatepublic");
    if(a_obj_ezsignfolderezsigntemplatepublic == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsignfolderezsigntemplatepublicListEntry;
    if (ezsigntemplatepublic_response_compound->a_obj_ezsignfolderezsigntemplatepublic) {
    list_ForEach(a_obj_ezsignfolderezsigntemplatepublicListEntry, ezsigntemplatepublic_response_compound->a_obj_ezsignfolderezsigntemplatepublic) {
    cJSON *itemLocal = custom_ezsignfolderezsigntemplatepublic_response_convertToJSON(a_obj_ezsignfolderezsigntemplatepublicListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsignfolderezsigntemplatepublic, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigntemplatepublic_response_compound_t *ezsigntemplatepublic_response_compound_parseFromJSON(cJSON *ezsigntemplatepublic_response_compoundJSON){

    ezsigntemplatepublic_response_compound_t *ezsigntemplatepublic_response_compound_local_var = NULL;

    // define the local variable for ezsigntemplatepublic_response_compound->e_ezsigntemplatepublic_limittype
    field_e_ezsigntemplatepublic_limittype_t *e_ezsigntemplatepublic_limittype_local_nonprim = NULL;

    // define the local variable for ezsigntemplatepublic_response_compound->obj_audit
    common_audit_t *obj_audit_local_nonprim = NULL;

    // define the local list for ezsigntemplatepublic_response_compound->a_obj_ezsignfolderezsigntemplatepublic
    list_t *a_obj_ezsignfolderezsigntemplatepublicList = NULL;

    // ezsigntemplatepublic_response_compound->pki_ezsigntemplatepublic_id
    cJSON *pki_ezsigntemplatepublic_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepublic_response_compoundJSON, "pkiEzsigntemplatepublicID");
    if (!pki_ezsigntemplatepublic_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsigntemplatepublic_id))
    {
    goto end; //Numeric
    }

    // ezsigntemplatepublic_response_compound->fki_ezsignfoldertype_id
    cJSON *fki_ezsignfoldertype_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepublic_response_compoundJSON, "fkiEzsignfoldertypeID");
    if (!fki_ezsignfoldertype_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsignfoldertype_id))
    {
    goto end; //Numeric
    }

    // ezsigntemplatepublic_response_compound->s_ezsignfoldertype_name_x
    cJSON *s_ezsignfoldertype_name_x = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepublic_response_compoundJSON, "sEzsignfoldertypeNameX");
    if (!s_ezsignfoldertype_name_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsignfoldertype_name_x))
    {
    goto end; //String
    }

    // ezsigntemplatepublic_response_compound->fki_userlogintype_id
    cJSON *fki_userlogintype_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepublic_response_compoundJSON, "fkiUserlogintypeID");
    if (!fki_userlogintype_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_userlogintype_id))
    {
    goto end; //Numeric
    }

    // ezsigntemplatepublic_response_compound->s_userlogintype_description_x
    cJSON *s_userlogintype_description_x = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepublic_response_compoundJSON, "sUserlogintypeDescriptionX");
    if (!s_userlogintype_description_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_userlogintype_description_x))
    {
    goto end; //String
    }

    // ezsigntemplatepublic_response_compound->fki_ezsigntemplate_id
    cJSON *fki_ezsigntemplate_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepublic_response_compoundJSON, "fkiEzsigntemplateID");
    if (fki_ezsigntemplate_id) { 
    if(!cJSON_IsNumber(fki_ezsigntemplate_id))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplatepublic_response_compound->fki_ezsigntemplatepackage_id
    cJSON *fki_ezsigntemplatepackage_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepublic_response_compoundJSON, "fkiEzsigntemplatepackageID");
    if (fki_ezsigntemplatepackage_id) { 
    if(!cJSON_IsNumber(fki_ezsigntemplatepackage_id))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplatepublic_response_compound->s_ezsigntemplatepublic_description
    cJSON *s_ezsigntemplatepublic_description = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepublic_response_compoundJSON, "sEzsigntemplatepublicDescription");
    if (!s_ezsigntemplatepublic_description) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsigntemplatepublic_description))
    {
    goto end; //String
    }

    // ezsigntemplatepublic_response_compound->s_ezsigntemplatepublic_referenceid
    cJSON *s_ezsigntemplatepublic_referenceid = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepublic_response_compoundJSON, "sEzsigntemplatepublicReferenceid");
    if (!s_ezsigntemplatepublic_referenceid) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsigntemplatepublic_referenceid))
    {
    goto end; //String
    }

    // ezsigntemplatepublic_response_compound->b_ezsigntemplatepublic_isactive
    cJSON *b_ezsigntemplatepublic_isactive = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepublic_response_compoundJSON, "bEzsigntemplatepublicIsactive");
    if (!b_ezsigntemplatepublic_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsigntemplatepublic_isactive))
    {
    goto end; //Bool
    }

    // ezsigntemplatepublic_response_compound->t_ezsigntemplatepublic_note
    cJSON *t_ezsigntemplatepublic_note = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepublic_response_compoundJSON, "tEzsigntemplatepublicNote");
    if (!t_ezsigntemplatepublic_note) {
        goto end;
    }

    
    if(!cJSON_IsString(t_ezsigntemplatepublic_note))
    {
    goto end; //String
    }

    // ezsigntemplatepublic_response_compound->e_ezsigntemplatepublic_limittype
    cJSON *e_ezsigntemplatepublic_limittype = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepublic_response_compoundJSON, "eEzsigntemplatepublicLimittype");
    if (!e_ezsigntemplatepublic_limittype) {
        goto end;
    }

    
    e_ezsigntemplatepublic_limittype_local_nonprim = field_e_ezsigntemplatepublic_limittype_parseFromJSON(e_ezsigntemplatepublic_limittype); //custom

    // ezsigntemplatepublic_response_compound->i_ezsigntemplatepublic_limit
    cJSON *i_ezsigntemplatepublic_limit = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepublic_response_compoundJSON, "iEzsigntemplatepublicLimit");
    if (!i_ezsigntemplatepublic_limit) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsigntemplatepublic_limit))
    {
    goto end; //Numeric
    }

    // ezsigntemplatepublic_response_compound->i_ezsigntemplatepublic_limitexceeded
    cJSON *i_ezsigntemplatepublic_limitexceeded = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepublic_response_compoundJSON, "iEzsigntemplatepublicLimitexceeded");
    if (!i_ezsigntemplatepublic_limitexceeded) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsigntemplatepublic_limitexceeded))
    {
    goto end; //Numeric
    }

    // ezsigntemplatepublic_response_compound->dt_ezsigntemplatepublic_limitexceededsince
    cJSON *dt_ezsigntemplatepublic_limitexceededsince = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepublic_response_compoundJSON, "dtEzsigntemplatepublicLimitexceededsince");
    if (!dt_ezsigntemplatepublic_limitexceededsince) {
        goto end;
    }

    
    if(!cJSON_IsString(dt_ezsigntemplatepublic_limitexceededsince))
    {
    goto end; //String
    }

    // ezsigntemplatepublic_response_compound->s_ezsigntemplatepublic_url
    cJSON *s_ezsigntemplatepublic_url = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepublic_response_compoundJSON, "sEzsigntemplatepublicUrl");
    if (!s_ezsigntemplatepublic_url) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsigntemplatepublic_url))
    {
    goto end; //String
    }

    // ezsigntemplatepublic_response_compound->s_ezsigntemplatepublic_ezsigntemplatedescription
    cJSON *s_ezsigntemplatepublic_ezsigntemplatedescription = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepublic_response_compoundJSON, "sEzsigntemplatepublicEzsigntemplatedescription");
    if (!s_ezsigntemplatepublic_ezsigntemplatedescription) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsigntemplatepublic_ezsigntemplatedescription))
    {
    goto end; //String
    }

    // ezsigntemplatepublic_response_compound->obj_audit
    cJSON *obj_audit = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepublic_response_compoundJSON, "objAudit");
    if (obj_audit) { 
    obj_audit_local_nonprim = common_audit_parseFromJSON(obj_audit); //nonprimitive
    }

    // ezsigntemplatepublic_response_compound->a_obj_ezsignfolderezsigntemplatepublic
    cJSON *a_obj_ezsignfolderezsigntemplatepublic = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepublic_response_compoundJSON, "a_objEzsignfolderezsigntemplatepublic");
    if (!a_obj_ezsignfolderezsigntemplatepublic) {
        goto end;
    }

    
    cJSON *a_obj_ezsignfolderezsigntemplatepublic_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezsignfolderezsigntemplatepublic)){
        goto end; //nonprimitive container
    }

    a_obj_ezsignfolderezsigntemplatepublicList = list_createList();

    cJSON_ArrayForEach(a_obj_ezsignfolderezsigntemplatepublic_local_nonprimitive,a_obj_ezsignfolderezsigntemplatepublic )
    {
        if(!cJSON_IsObject(a_obj_ezsignfolderezsigntemplatepublic_local_nonprimitive)){
            goto end;
        }
        custom_ezsignfolderezsigntemplatepublic_response_t *a_obj_ezsignfolderezsigntemplatepublicItem = custom_ezsignfolderezsigntemplatepublic_response_parseFromJSON(a_obj_ezsignfolderezsigntemplatepublic_local_nonprimitive);

        list_addElement(a_obj_ezsignfolderezsigntemplatepublicList, a_obj_ezsignfolderezsigntemplatepublicItem);
    }


    ezsigntemplatepublic_response_compound_local_var = ezsigntemplatepublic_response_compound_create (
        pki_ezsigntemplatepublic_id->valuedouble,
        fki_ezsignfoldertype_id->valuedouble,
        strdup(s_ezsignfoldertype_name_x->valuestring),
        fki_userlogintype_id->valuedouble,
        strdup(s_userlogintype_description_x->valuestring),
        fki_ezsigntemplate_id ? fki_ezsigntemplate_id->valuedouble : 0,
        fki_ezsigntemplatepackage_id ? fki_ezsigntemplatepackage_id->valuedouble : 0,
        strdup(s_ezsigntemplatepublic_description->valuestring),
        strdup(s_ezsigntemplatepublic_referenceid->valuestring),
        b_ezsigntemplatepublic_isactive->valueint,
        strdup(t_ezsigntemplatepublic_note->valuestring),
        e_ezsigntemplatepublic_limittype_local_nonprim,
        i_ezsigntemplatepublic_limit->valuedouble,
        i_ezsigntemplatepublic_limitexceeded->valuedouble,
        strdup(dt_ezsigntemplatepublic_limitexceededsince->valuestring),
        strdup(s_ezsigntemplatepublic_url->valuestring),
        strdup(s_ezsigntemplatepublic_ezsigntemplatedescription->valuestring),
        obj_audit ? obj_audit_local_nonprim : NULL,
        a_obj_ezsignfolderezsigntemplatepublicList
        );

    return ezsigntemplatepublic_response_compound_local_var;
end:
    if (e_ezsigntemplatepublic_limittype_local_nonprim) {
        field_e_ezsigntemplatepublic_limittype_free(e_ezsigntemplatepublic_limittype_local_nonprim);
        e_ezsigntemplatepublic_limittype_local_nonprim = NULL;
    }
    if (obj_audit_local_nonprim) {
        common_audit_free(obj_audit_local_nonprim);
        obj_audit_local_nonprim = NULL;
    }
    if (a_obj_ezsignfolderezsigntemplatepublicList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsignfolderezsigntemplatepublicList) {
            custom_ezsignfolderezsigntemplatepublic_response_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsignfolderezsigntemplatepublicList);
        a_obj_ezsignfolderezsigntemplatepublicList = NULL;
    }
    return NULL;

}
