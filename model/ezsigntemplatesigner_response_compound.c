#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatesigner_response_compound.h"


char* ezsigntemplatesigner_response_compound_e_ezsigntemplatesigner_mapping_ToString(ezmax_api_definition__full_ezsigntemplatesigner_response_compound__e e_ezsigntemplatesigner_mapping) {
    char* e_ezsigntemplatesigner_mappingArray[] =  { "NULL", "Manual", "Creator", "User", "Usergroup" };
    return e_ezsigntemplatesigner_mappingArray[e_ezsigntemplatesigner_mapping];
}

ezmax_api_definition__full_ezsigntemplatesigner_response_compound__e ezsigntemplatesigner_response_compound_e_ezsigntemplatesigner_mapping_FromString(char* e_ezsigntemplatesigner_mapping){
    int stringToReturn = 0;
    char *e_ezsigntemplatesigner_mappingArray[] =  { "NULL", "Manual", "Creator", "User", "Usergroup" };
    size_t sizeofArray = sizeof(e_ezsigntemplatesigner_mappingArray) / sizeof(e_ezsigntemplatesigner_mappingArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_ezsigntemplatesigner_mapping, e_ezsigntemplatesigner_mappingArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

ezsigntemplatesigner_response_compound_t *ezsigntemplatesigner_response_compound_create(
    int pki_ezsigntemplatesigner_id,
    int fki_ezsigntemplate_id,
    int fki_user_id,
    int fki_usergroup_id,
    int fki_ezdoctemplatedocument_id,
    int b_ezsigntemplatesigner_receivecopy,
    field_e_ezsigntemplatesigner_mapping_t *e_ezsigntemplatesigner_mapping,
    char *s_ezsigntemplatesigner_description,
    char *s_user_name,
    char *s_usergroup_name_x
    ) {
    ezsigntemplatesigner_response_compound_t *ezsigntemplatesigner_response_compound_local_var = malloc(sizeof(ezsigntemplatesigner_response_compound_t));
    if (!ezsigntemplatesigner_response_compound_local_var) {
        return NULL;
    }
    ezsigntemplatesigner_response_compound_local_var->pki_ezsigntemplatesigner_id = pki_ezsigntemplatesigner_id;
    ezsigntemplatesigner_response_compound_local_var->fki_ezsigntemplate_id = fki_ezsigntemplate_id;
    ezsigntemplatesigner_response_compound_local_var->fki_user_id = fki_user_id;
    ezsigntemplatesigner_response_compound_local_var->fki_usergroup_id = fki_usergroup_id;
    ezsigntemplatesigner_response_compound_local_var->fki_ezdoctemplatedocument_id = fki_ezdoctemplatedocument_id;
    ezsigntemplatesigner_response_compound_local_var->b_ezsigntemplatesigner_receivecopy = b_ezsigntemplatesigner_receivecopy;
    ezsigntemplatesigner_response_compound_local_var->e_ezsigntemplatesigner_mapping = e_ezsigntemplatesigner_mapping;
    ezsigntemplatesigner_response_compound_local_var->s_ezsigntemplatesigner_description = s_ezsigntemplatesigner_description;
    ezsigntemplatesigner_response_compound_local_var->s_user_name = s_user_name;
    ezsigntemplatesigner_response_compound_local_var->s_usergroup_name_x = s_usergroup_name_x;

    return ezsigntemplatesigner_response_compound_local_var;
}


void ezsigntemplatesigner_response_compound_free(ezsigntemplatesigner_response_compound_t *ezsigntemplatesigner_response_compound) {
    if(NULL == ezsigntemplatesigner_response_compound){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplatesigner_response_compound->e_ezsigntemplatesigner_mapping) {
        field_e_ezsigntemplatesigner_mapping_free(ezsigntemplatesigner_response_compound->e_ezsigntemplatesigner_mapping);
        ezsigntemplatesigner_response_compound->e_ezsigntemplatesigner_mapping = NULL;
    }
    if (ezsigntemplatesigner_response_compound->s_ezsigntemplatesigner_description) {
        free(ezsigntemplatesigner_response_compound->s_ezsigntemplatesigner_description);
        ezsigntemplatesigner_response_compound->s_ezsigntemplatesigner_description = NULL;
    }
    if (ezsigntemplatesigner_response_compound->s_user_name) {
        free(ezsigntemplatesigner_response_compound->s_user_name);
        ezsigntemplatesigner_response_compound->s_user_name = NULL;
    }
    if (ezsigntemplatesigner_response_compound->s_usergroup_name_x) {
        free(ezsigntemplatesigner_response_compound->s_usergroup_name_x);
        ezsigntemplatesigner_response_compound->s_usergroup_name_x = NULL;
    }
    free(ezsigntemplatesigner_response_compound);
}

cJSON *ezsigntemplatesigner_response_compound_convertToJSON(ezsigntemplatesigner_response_compound_t *ezsigntemplatesigner_response_compound) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatesigner_response_compound->pki_ezsigntemplatesigner_id
    if (!ezsigntemplatesigner_response_compound->pki_ezsigntemplatesigner_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsigntemplatesignerID", ezsigntemplatesigner_response_compound->pki_ezsigntemplatesigner_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatesigner_response_compound->fki_ezsigntemplate_id
    if (!ezsigntemplatesigner_response_compound->fki_ezsigntemplate_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsigntemplateID", ezsigntemplatesigner_response_compound->fki_ezsigntemplate_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatesigner_response_compound->fki_user_id
    if(ezsigntemplatesigner_response_compound->fki_user_id) {
    if(cJSON_AddNumberToObject(item, "fkiUserID", ezsigntemplatesigner_response_compound->fki_user_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplatesigner_response_compound->fki_usergroup_id
    if(ezsigntemplatesigner_response_compound->fki_usergroup_id) {
    if(cJSON_AddNumberToObject(item, "fkiUsergroupID", ezsigntemplatesigner_response_compound->fki_usergroup_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplatesigner_response_compound->fki_ezdoctemplatedocument_id
    if(ezsigntemplatesigner_response_compound->fki_ezdoctemplatedocument_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzdoctemplatedocumentID", ezsigntemplatesigner_response_compound->fki_ezdoctemplatedocument_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplatesigner_response_compound->b_ezsigntemplatesigner_receivecopy
    if(ezsigntemplatesigner_response_compound->b_ezsigntemplatesigner_receivecopy) {
    if(cJSON_AddBoolToObject(item, "bEzsigntemplatesignerReceivecopy", ezsigntemplatesigner_response_compound->b_ezsigntemplatesigner_receivecopy) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsigntemplatesigner_response_compound->e_ezsigntemplatesigner_mapping
    if(ezsigntemplatesigner_response_compound->e_ezsigntemplatesigner_mapping != ezmax_api_definition__full_ezsigntemplatesigner_response_compound__NULL) {
    cJSON *e_ezsigntemplatesigner_mapping_local_JSON = field_e_ezsigntemplatesigner_mapping_convertToJSON(ezsigntemplatesigner_response_compound->e_ezsigntemplatesigner_mapping);
    if(e_ezsigntemplatesigner_mapping_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsigntemplatesignerMapping", e_ezsigntemplatesigner_mapping_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // ezsigntemplatesigner_response_compound->s_ezsigntemplatesigner_description
    if (!ezsigntemplatesigner_response_compound->s_ezsigntemplatesigner_description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsigntemplatesignerDescription", ezsigntemplatesigner_response_compound->s_ezsigntemplatesigner_description) == NULL) {
    goto fail; //String
    }


    // ezsigntemplatesigner_response_compound->s_user_name
    if(ezsigntemplatesigner_response_compound->s_user_name) {
    if(cJSON_AddStringToObject(item, "sUserName", ezsigntemplatesigner_response_compound->s_user_name) == NULL) {
    goto fail; //String
    }
    }


    // ezsigntemplatesigner_response_compound->s_usergroup_name_x
    if(ezsigntemplatesigner_response_compound->s_usergroup_name_x) {
    if(cJSON_AddStringToObject(item, "sUsergroupNameX", ezsigntemplatesigner_response_compound->s_usergroup_name_x) == NULL) {
    goto fail; //String
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigntemplatesigner_response_compound_t *ezsigntemplatesigner_response_compound_parseFromJSON(cJSON *ezsigntemplatesigner_response_compoundJSON){

    ezsigntemplatesigner_response_compound_t *ezsigntemplatesigner_response_compound_local_var = NULL;

    // define the local variable for ezsigntemplatesigner_response_compound->e_ezsigntemplatesigner_mapping
    field_e_ezsigntemplatesigner_mapping_t *e_ezsigntemplatesigner_mapping_local_nonprim = NULL;

    // ezsigntemplatesigner_response_compound->pki_ezsigntemplatesigner_id
    cJSON *pki_ezsigntemplatesigner_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesigner_response_compoundJSON, "pkiEzsigntemplatesignerID");
    if (!pki_ezsigntemplatesigner_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsigntemplatesigner_id))
    {
    goto end; //Numeric
    }

    // ezsigntemplatesigner_response_compound->fki_ezsigntemplate_id
    cJSON *fki_ezsigntemplate_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesigner_response_compoundJSON, "fkiEzsigntemplateID");
    if (!fki_ezsigntemplate_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsigntemplate_id))
    {
    goto end; //Numeric
    }

    // ezsigntemplatesigner_response_compound->fki_user_id
    cJSON *fki_user_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesigner_response_compoundJSON, "fkiUserID");
    if (fki_user_id) { 
    if(!cJSON_IsNumber(fki_user_id))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplatesigner_response_compound->fki_usergroup_id
    cJSON *fki_usergroup_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesigner_response_compoundJSON, "fkiUsergroupID");
    if (fki_usergroup_id) { 
    if(!cJSON_IsNumber(fki_usergroup_id))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplatesigner_response_compound->fki_ezdoctemplatedocument_id
    cJSON *fki_ezdoctemplatedocument_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesigner_response_compoundJSON, "fkiEzdoctemplatedocumentID");
    if (fki_ezdoctemplatedocument_id) { 
    if(!cJSON_IsNumber(fki_ezdoctemplatedocument_id))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplatesigner_response_compound->b_ezsigntemplatesigner_receivecopy
    cJSON *b_ezsigntemplatesigner_receivecopy = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesigner_response_compoundJSON, "bEzsigntemplatesignerReceivecopy");
    if (b_ezsigntemplatesigner_receivecopy) { 
    if(!cJSON_IsBool(b_ezsigntemplatesigner_receivecopy))
    {
    goto end; //Bool
    }
    }

    // ezsigntemplatesigner_response_compound->e_ezsigntemplatesigner_mapping
    cJSON *e_ezsigntemplatesigner_mapping = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesigner_response_compoundJSON, "eEzsigntemplatesignerMapping");
    if (e_ezsigntemplatesigner_mapping) { 
    e_ezsigntemplatesigner_mapping_local_nonprim = field_e_ezsigntemplatesigner_mapping_parseFromJSON(e_ezsigntemplatesigner_mapping); //custom
    }

    // ezsigntemplatesigner_response_compound->s_ezsigntemplatesigner_description
    cJSON *s_ezsigntemplatesigner_description = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesigner_response_compoundJSON, "sEzsigntemplatesignerDescription");
    if (!s_ezsigntemplatesigner_description) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsigntemplatesigner_description))
    {
    goto end; //String
    }

    // ezsigntemplatesigner_response_compound->s_user_name
    cJSON *s_user_name = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesigner_response_compoundJSON, "sUserName");
    if (s_user_name) { 
    if(!cJSON_IsString(s_user_name) && !cJSON_IsNull(s_user_name))
    {
    goto end; //String
    }
    }

    // ezsigntemplatesigner_response_compound->s_usergroup_name_x
    cJSON *s_usergroup_name_x = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesigner_response_compoundJSON, "sUsergroupNameX");
    if (s_usergroup_name_x) { 
    if(!cJSON_IsString(s_usergroup_name_x) && !cJSON_IsNull(s_usergroup_name_x))
    {
    goto end; //String
    }
    }


    ezsigntemplatesigner_response_compound_local_var = ezsigntemplatesigner_response_compound_create (
        pki_ezsigntemplatesigner_id->valuedouble,
        fki_ezsigntemplate_id->valuedouble,
        fki_user_id ? fki_user_id->valuedouble : 0,
        fki_usergroup_id ? fki_usergroup_id->valuedouble : 0,
        fki_ezdoctemplatedocument_id ? fki_ezdoctemplatedocument_id->valuedouble : 0,
        b_ezsigntemplatesigner_receivecopy ? b_ezsigntemplatesigner_receivecopy->valueint : 0,
        e_ezsigntemplatesigner_mapping ? e_ezsigntemplatesigner_mapping_local_nonprim : NULL,
        strdup(s_ezsigntemplatesigner_description->valuestring),
        s_user_name && !cJSON_IsNull(s_user_name) ? strdup(s_user_name->valuestring) : NULL,
        s_usergroup_name_x && !cJSON_IsNull(s_usergroup_name_x) ? strdup(s_usergroup_name_x->valuestring) : NULL
        );

    return ezsigntemplatesigner_response_compound_local_var;
end:
    if (e_ezsigntemplatesigner_mapping_local_nonprim) {
        field_e_ezsigntemplatesigner_mapping_free(e_ezsigntemplatesigner_mapping_local_nonprim);
        e_ezsigntemplatesigner_mapping_local_nonprim = NULL;
    }
    return NULL;

}
