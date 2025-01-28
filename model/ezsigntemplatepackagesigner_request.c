#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatepackagesigner_request.h"



static ezsigntemplatepackagesigner_request_t *ezsigntemplatepackagesigner_request_create_internal(
    int pki_ezsigntemplatepackagesigner_id,
    int fki_ezsigntemplatepackage_id,
    int fki_ezdoctemplatedocument_id,
    int fki_user_id,
    int fki_usergroup_id,
    int b_ezsigntemplatepackagesigner_receivecopy,
    ezmax_api_definition__full_field_e_ezsigntemplatepackagesigner_mapping__e e_ezsigntemplatepackagesigner_mapping,
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

    ezsigntemplatepackagesigner_request_local_var->_library_owned = 1;
    return ezsigntemplatepackagesigner_request_local_var;
}

__attribute__((deprecated)) ezsigntemplatepackagesigner_request_t *ezsigntemplatepackagesigner_request_create(
    int pki_ezsigntemplatepackagesigner_id,
    int fki_ezsigntemplatepackage_id,
    int fki_ezdoctemplatedocument_id,
    int fki_user_id,
    int fki_usergroup_id,
    int b_ezsigntemplatepackagesigner_receivecopy,
    ezmax_api_definition__full_field_e_ezsigntemplatepackagesigner_mapping__e e_ezsigntemplatepackagesigner_mapping,
    char *s_ezsigntemplatepackagesigner_description
    ) {
    return ezsigntemplatepackagesigner_request_create_internal (
        pki_ezsigntemplatepackagesigner_id,
        fki_ezsigntemplatepackage_id,
        fki_ezdoctemplatedocument_id,
        fki_user_id,
        fki_usergroup_id,
        b_ezsigntemplatepackagesigner_receivecopy,
        e_ezsigntemplatepackagesigner_mapping,
        s_ezsigntemplatepackagesigner_description
        );
}

void ezsigntemplatepackagesigner_request_free(ezsigntemplatepackagesigner_request_t *ezsigntemplatepackagesigner_request) {
    if(NULL == ezsigntemplatepackagesigner_request){
        return ;
    }
    if(ezsigntemplatepackagesigner_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsigntemplatepackagesigner_request_free");
        return ;
    }
    listEntry_t *listEntry;
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
    if(ezsigntemplatepackagesigner_request->e_ezsigntemplatepackagesigner_mapping != ezmax_api_definition__full_field_e_ezsigntemplatepackagesigner_mapping__NULL) {
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
    ezmax_api_definition__full_field_e_ezsigntemplatepackagesigner_mapping__e e_ezsigntemplatepackagesigner_mapping_local_nonprim = 0;

    // ezsigntemplatepackagesigner_request->pki_ezsigntemplatepackagesigner_id
    cJSON *pki_ezsigntemplatepackagesigner_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackagesigner_requestJSON, "pkiEzsigntemplatepackagesignerID");
    if (cJSON_IsNull(pki_ezsigntemplatepackagesigner_id)) {
        pki_ezsigntemplatepackagesigner_id = NULL;
    }
    if (pki_ezsigntemplatepackagesigner_id) { 
    if(!cJSON_IsNumber(pki_ezsigntemplatepackagesigner_id))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplatepackagesigner_request->fki_ezsigntemplatepackage_id
    cJSON *fki_ezsigntemplatepackage_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackagesigner_requestJSON, "fkiEzsigntemplatepackageID");
    if (cJSON_IsNull(fki_ezsigntemplatepackage_id)) {
        fki_ezsigntemplatepackage_id = NULL;
    }
    if (!fki_ezsigntemplatepackage_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsigntemplatepackage_id))
    {
    goto end; //Numeric
    }

    // ezsigntemplatepackagesigner_request->fki_ezdoctemplatedocument_id
    cJSON *fki_ezdoctemplatedocument_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackagesigner_requestJSON, "fkiEzdoctemplatedocumentID");
    if (cJSON_IsNull(fki_ezdoctemplatedocument_id)) {
        fki_ezdoctemplatedocument_id = NULL;
    }
    if (fki_ezdoctemplatedocument_id) { 
    if(!cJSON_IsNumber(fki_ezdoctemplatedocument_id))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplatepackagesigner_request->fki_user_id
    cJSON *fki_user_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackagesigner_requestJSON, "fkiUserID");
    if (cJSON_IsNull(fki_user_id)) {
        fki_user_id = NULL;
    }
    if (fki_user_id) { 
    if(!cJSON_IsNumber(fki_user_id))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplatepackagesigner_request->fki_usergroup_id
    cJSON *fki_usergroup_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackagesigner_requestJSON, "fkiUsergroupID");
    if (cJSON_IsNull(fki_usergroup_id)) {
        fki_usergroup_id = NULL;
    }
    if (fki_usergroup_id) { 
    if(!cJSON_IsNumber(fki_usergroup_id))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplatepackagesigner_request->b_ezsigntemplatepackagesigner_receivecopy
    cJSON *b_ezsigntemplatepackagesigner_receivecopy = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackagesigner_requestJSON, "bEzsigntemplatepackagesignerReceivecopy");
    if (cJSON_IsNull(b_ezsigntemplatepackagesigner_receivecopy)) {
        b_ezsigntemplatepackagesigner_receivecopy = NULL;
    }
    if (b_ezsigntemplatepackagesigner_receivecopy) { 
    if(!cJSON_IsBool(b_ezsigntemplatepackagesigner_receivecopy))
    {
    goto end; //Bool
    }
    }

    // ezsigntemplatepackagesigner_request->e_ezsigntemplatepackagesigner_mapping
    cJSON *e_ezsigntemplatepackagesigner_mapping = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackagesigner_requestJSON, "eEzsigntemplatepackagesignerMapping");
    if (cJSON_IsNull(e_ezsigntemplatepackagesigner_mapping)) {
        e_ezsigntemplatepackagesigner_mapping = NULL;
    }
    if (e_ezsigntemplatepackagesigner_mapping) { 
    e_ezsigntemplatepackagesigner_mapping_local_nonprim = field_e_ezsigntemplatepackagesigner_mapping_parseFromJSON(e_ezsigntemplatepackagesigner_mapping); //custom
    }

    // ezsigntemplatepackagesigner_request->s_ezsigntemplatepackagesigner_description
    cJSON *s_ezsigntemplatepackagesigner_description = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackagesigner_requestJSON, "sEzsigntemplatepackagesignerDescription");
    if (cJSON_IsNull(s_ezsigntemplatepackagesigner_description)) {
        s_ezsigntemplatepackagesigner_description = NULL;
    }
    if (!s_ezsigntemplatepackagesigner_description) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsigntemplatepackagesigner_description))
    {
    goto end; //String
    }


    ezsigntemplatepackagesigner_request_local_var = ezsigntemplatepackagesigner_request_create_internal (
        pki_ezsigntemplatepackagesigner_id ? pki_ezsigntemplatepackagesigner_id->valuedouble : 0,
        fki_ezsigntemplatepackage_id->valuedouble,
        fki_ezdoctemplatedocument_id ? fki_ezdoctemplatedocument_id->valuedouble : 0,
        fki_user_id ? fki_user_id->valuedouble : 0,
        fki_usergroup_id ? fki_usergroup_id->valuedouble : 0,
        b_ezsigntemplatepackagesigner_receivecopy ? b_ezsigntemplatepackagesigner_receivecopy->valueint : 0,
        e_ezsigntemplatepackagesigner_mapping ? e_ezsigntemplatepackagesigner_mapping_local_nonprim : 0,
        strdup(s_ezsigntemplatepackagesigner_description->valuestring)
        );

    return ezsigntemplatepackagesigner_request_local_var;
end:
    if (e_ezsigntemplatepackagesigner_mapping_local_nonprim) {
        e_ezsigntemplatepackagesigner_mapping_local_nonprim = 0;
    }
    return NULL;

}
