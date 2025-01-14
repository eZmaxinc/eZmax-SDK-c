#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatepackagesigner_request.h"


char* ezsigntemplatepackagesigner_request_e_ezsigntemplatepackagesigner_mapping_ToString(ezmax_api_definition__full_ezsigntemplatepackagesigner_request__e e_ezsigntemplatepackagesigner_mapping) {
    char* e_ezsigntemplatepackagesigner_mappingArray[] =  { "NULL", "Manual", "Creator", "User", "Usergroup" };
    return e_ezsigntemplatepackagesigner_mappingArray[e_ezsigntemplatepackagesigner_mapping];
}

ezmax_api_definition__full_ezsigntemplatepackagesigner_request__e ezsigntemplatepackagesigner_request_e_ezsigntemplatepackagesigner_mapping_FromString(char* e_ezsigntemplatepackagesigner_mapping){
    int stringToReturn = 0;
    char *e_ezsigntemplatepackagesigner_mappingArray[] =  { "NULL", "Manual", "Creator", "User", "Usergroup" };
    size_t sizeofArray = sizeof(e_ezsigntemplatepackagesigner_mappingArray) / sizeof(e_ezsigntemplatepackagesigner_mappingArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_ezsigntemplatepackagesigner_mapping, e_ezsigntemplatepackagesigner_mappingArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

ezsigntemplatepackagesigner_request_t *ezsigntemplatepackagesigner_request_create(
    int pki_ezsigntemplatepackagesigner_id,
    int fki_ezsigntemplatepackage_id,
    int fki_ezdoctemplatedocument_id,
    int fki_user_id,
    int fki_usergroup_id,
    int b_ezsigntemplatepackagesigner_receivecopy,
    field_e_ezsigntemplatepackagesigner_mapping_t *e_ezsigntemplatepackagesigner_mapping,
    char *s_ezsigntemplatepackagesigner_description
    ) {
    ezsigntemplatepackagesigner_request_t *ezsigntemplatepackagesigner_request_local_var = malloc(sizeof(ezsigntemplatepackagesigner_request_t));
    if (!ezsigntemplatepackagesigner_request_local_var) {
        return NULL;
    }
    ezsigntemplatepackagesigner_request_local_var->pki_ezsigntemplatepackagesigner_id = pki_ezsigntemplatepackagesigner_id;
    ezsigntemplatepackagesigner_request_local_var->fki_ezsigntemplatepackage_id = fki_ezsigntemplatepackage_id;
    ezsigntemplatepackagesigner_request_local_var->fki_ezdoctemplatedocument_id = fki_ezdoctemplatedocument_id;
    ezsigntemplatepackagesigner_request_local_var->fki_user_id = fki_user_id;
    ezsigntemplatepackagesigner_request_local_var->fki_usergroup_id = fki_usergroup_id;
    ezsigntemplatepackagesigner_request_local_var->b_ezsigntemplatepackagesigner_receivecopy = b_ezsigntemplatepackagesigner_receivecopy;
    ezsigntemplatepackagesigner_request_local_var->e_ezsigntemplatepackagesigner_mapping = e_ezsigntemplatepackagesigner_mapping;
    ezsigntemplatepackagesigner_request_local_var->s_ezsigntemplatepackagesigner_description = s_ezsigntemplatepackagesigner_description;

    return ezsigntemplatepackagesigner_request_local_var;
}


void ezsigntemplatepackagesigner_request_free(ezsigntemplatepackagesigner_request_t *ezsigntemplatepackagesigner_request) {
    if(NULL == ezsigntemplatepackagesigner_request){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplatepackagesigner_request->e_ezsigntemplatepackagesigner_mapping) {
        field_e_ezsigntemplatepackagesigner_mapping_free(ezsigntemplatepackagesigner_request->e_ezsigntemplatepackagesigner_mapping);
        ezsigntemplatepackagesigner_request->e_ezsigntemplatepackagesigner_mapping = NULL;
    }
    if (ezsigntemplatepackagesigner_request->s_ezsigntemplatepackagesigner_description) {
        free(ezsigntemplatepackagesigner_request->s_ezsigntemplatepackagesigner_description);
        ezsigntemplatepackagesigner_request->s_ezsigntemplatepackagesigner_description = NULL;
    }
    free(ezsigntemplatepackagesigner_request);
}

cJSON *ezsigntemplatepackagesigner_request_convertToJSON(ezsigntemplatepackagesigner_request_t *ezsigntemplatepackagesigner_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatepackagesigner_request->pki_ezsigntemplatepackagesigner_id
    if(ezsigntemplatepackagesigner_request->pki_ezsigntemplatepackagesigner_id) {
    if(cJSON_AddNumberToObject(item, "pkiEzsigntemplatepackagesignerID", ezsigntemplatepackagesigner_request->pki_ezsigntemplatepackagesigner_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplatepackagesigner_request->fki_ezsigntemplatepackage_id
    if (!ezsigntemplatepackagesigner_request->fki_ezsigntemplatepackage_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsigntemplatepackageID", ezsigntemplatepackagesigner_request->fki_ezsigntemplatepackage_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatepackagesigner_request->fki_ezdoctemplatedocument_id
    if(ezsigntemplatepackagesigner_request->fki_ezdoctemplatedocument_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzdoctemplatedocumentID", ezsigntemplatepackagesigner_request->fki_ezdoctemplatedocument_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplatepackagesigner_request->fki_user_id
    if(ezsigntemplatepackagesigner_request->fki_user_id) {
    if(cJSON_AddNumberToObject(item, "fkiUserID", ezsigntemplatepackagesigner_request->fki_user_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplatepackagesigner_request->fki_usergroup_id
    if(ezsigntemplatepackagesigner_request->fki_usergroup_id) {
    if(cJSON_AddNumberToObject(item, "fkiUsergroupID", ezsigntemplatepackagesigner_request->fki_usergroup_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplatepackagesigner_request->b_ezsigntemplatepackagesigner_receivecopy
    if(ezsigntemplatepackagesigner_request->b_ezsigntemplatepackagesigner_receivecopy) {
    if(cJSON_AddBoolToObject(item, "bEzsigntemplatepackagesignerReceivecopy", ezsigntemplatepackagesigner_request->b_ezsigntemplatepackagesigner_receivecopy) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsigntemplatepackagesigner_request->e_ezsigntemplatepackagesigner_mapping
    if(ezsigntemplatepackagesigner_request->e_ezsigntemplatepackagesigner_mapping != ezmax_api_definition__full_ezsigntemplatepackagesigner_request__NULL) {
    cJSON *e_ezsigntemplatepackagesigner_mapping_local_JSON = field_e_ezsigntemplatepackagesigner_mapping_convertToJSON(ezsigntemplatepackagesigner_request->e_ezsigntemplatepackagesigner_mapping);
    if(e_ezsigntemplatepackagesigner_mapping_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsigntemplatepackagesignerMapping", e_ezsigntemplatepackagesigner_mapping_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // ezsigntemplatepackagesigner_request->s_ezsigntemplatepackagesigner_description
    if (!ezsigntemplatepackagesigner_request->s_ezsigntemplatepackagesigner_description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsigntemplatepackagesignerDescription", ezsigntemplatepackagesigner_request->s_ezsigntemplatepackagesigner_description) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigntemplatepackagesigner_request_t *ezsigntemplatepackagesigner_request_parseFromJSON(cJSON *ezsigntemplatepackagesigner_requestJSON){

    ezsigntemplatepackagesigner_request_t *ezsigntemplatepackagesigner_request_local_var = NULL;

    // define the local variable for ezsigntemplatepackagesigner_request->e_ezsigntemplatepackagesigner_mapping
    field_e_ezsigntemplatepackagesigner_mapping_t *e_ezsigntemplatepackagesigner_mapping_local_nonprim = NULL;

    // ezsigntemplatepackagesigner_request->pki_ezsigntemplatepackagesigner_id
    cJSON *pki_ezsigntemplatepackagesigner_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackagesigner_requestJSON, "pkiEzsigntemplatepackagesignerID");
    if (pki_ezsigntemplatepackagesigner_id) { 
    if(!cJSON_IsNumber(pki_ezsigntemplatepackagesigner_id))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplatepackagesigner_request->fki_ezsigntemplatepackage_id
    cJSON *fki_ezsigntemplatepackage_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackagesigner_requestJSON, "fkiEzsigntemplatepackageID");
    if (!fki_ezsigntemplatepackage_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsigntemplatepackage_id))
    {
    goto end; //Numeric
    }

    // ezsigntemplatepackagesigner_request->fki_ezdoctemplatedocument_id
    cJSON *fki_ezdoctemplatedocument_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackagesigner_requestJSON, "fkiEzdoctemplatedocumentID");
    if (fki_ezdoctemplatedocument_id) { 
    if(!cJSON_IsNumber(fki_ezdoctemplatedocument_id))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplatepackagesigner_request->fki_user_id
    cJSON *fki_user_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackagesigner_requestJSON, "fkiUserID");
    if (fki_user_id) { 
    if(!cJSON_IsNumber(fki_user_id))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplatepackagesigner_request->fki_usergroup_id
    cJSON *fki_usergroup_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackagesigner_requestJSON, "fkiUsergroupID");
    if (fki_usergroup_id) { 
    if(!cJSON_IsNumber(fki_usergroup_id))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplatepackagesigner_request->b_ezsigntemplatepackagesigner_receivecopy
    cJSON *b_ezsigntemplatepackagesigner_receivecopy = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackagesigner_requestJSON, "bEzsigntemplatepackagesignerReceivecopy");
    if (b_ezsigntemplatepackagesigner_receivecopy) { 
    if(!cJSON_IsBool(b_ezsigntemplatepackagesigner_receivecopy))
    {
    goto end; //Bool
    }
    }

    // ezsigntemplatepackagesigner_request->e_ezsigntemplatepackagesigner_mapping
    cJSON *e_ezsigntemplatepackagesigner_mapping = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackagesigner_requestJSON, "eEzsigntemplatepackagesignerMapping");
    if (e_ezsigntemplatepackagesigner_mapping) { 
    e_ezsigntemplatepackagesigner_mapping_local_nonprim = field_e_ezsigntemplatepackagesigner_mapping_parseFromJSON(e_ezsigntemplatepackagesigner_mapping); //custom
    }

    // ezsigntemplatepackagesigner_request->s_ezsigntemplatepackagesigner_description
    cJSON *s_ezsigntemplatepackagesigner_description = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackagesigner_requestJSON, "sEzsigntemplatepackagesignerDescription");
    if (!s_ezsigntemplatepackagesigner_description) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsigntemplatepackagesigner_description))
    {
    goto end; //String
    }


    ezsigntemplatepackagesigner_request_local_var = ezsigntemplatepackagesigner_request_create (
        pki_ezsigntemplatepackagesigner_id ? pki_ezsigntemplatepackagesigner_id->valuedouble : 0,
        fki_ezsigntemplatepackage_id->valuedouble,
        fki_ezdoctemplatedocument_id ? fki_ezdoctemplatedocument_id->valuedouble : 0,
        fki_user_id ? fki_user_id->valuedouble : 0,
        fki_usergroup_id ? fki_usergroup_id->valuedouble : 0,
        b_ezsigntemplatepackagesigner_receivecopy ? b_ezsigntemplatepackagesigner_receivecopy->valueint : 0,
        e_ezsigntemplatepackagesigner_mapping ? e_ezsigntemplatepackagesigner_mapping_local_nonprim : NULL,
        strdup(s_ezsigntemplatepackagesigner_description->valuestring)
        );

    return ezsigntemplatepackagesigner_request_local_var;
end:
    if (e_ezsigntemplatepackagesigner_mapping_local_nonprim) {
        field_e_ezsigntemplatepackagesigner_mapping_free(e_ezsigntemplatepackagesigner_mapping_local_nonprim);
        e_ezsigntemplatepackagesigner_mapping_local_nonprim = NULL;
    }
    return NULL;

}
