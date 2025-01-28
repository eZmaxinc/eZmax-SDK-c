#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignsigner_response.h"



static ezsignsigner_response_t *ezsignsigner_response_create_internal(
    int pki_ezsignsigner_id,
    int fki_taxassignment_id,
    int fki_secretquestion_id,
    int fki_userlogintype_id,
    char *s_userlogintype_description_x
    ) {
    ezsignsigner_response_t *ezsignsigner_response_local_var = malloc(sizeof(ezsignsigner_response_t));
    if (!ezsignsigner_response_local_var) {
        return NULL;
    }
    ezsignsigner_response_local_var->pki_ezsignsigner_id = pki_ezsignsigner_id;
    ezsignsigner_response_local_var->fki_taxassignment_id = fki_taxassignment_id;
    ezsignsigner_response_local_var->fki_secretquestion_id = fki_secretquestion_id;
    ezsignsigner_response_local_var->fki_userlogintype_id = fki_userlogintype_id;
    ezsignsigner_response_local_var->s_userlogintype_description_x = s_userlogintype_description_x;

    ezsignsigner_response_local_var->_library_owned = 1;
    return ezsignsigner_response_local_var;
}

__attribute__((deprecated)) ezsignsigner_response_t *ezsignsigner_response_create(
    int pki_ezsignsigner_id,
    int fki_taxassignment_id,
    int fki_secretquestion_id,
    int fki_userlogintype_id,
    char *s_userlogintype_description_x
    ) {
    return ezsignsigner_response_create_internal (
        pki_ezsignsigner_id,
        fki_taxassignment_id,
        fki_secretquestion_id,
        fki_userlogintype_id,
        s_userlogintype_description_x
        );
}

void ezsignsigner_response_free(ezsignsigner_response_t *ezsignsigner_response) {
    if(NULL == ezsignsigner_response){
        return ;
    }
    if(ezsignsigner_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsignsigner_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignsigner_response->s_userlogintype_description_x) {
        free(ezsignsigner_response->s_userlogintype_description_x);
        ezsignsigner_response->s_userlogintype_description_x = NULL;
    }
    free(ezsignsigner_response);
}

cJSON *ezsignsigner_response_convertToJSON(ezsignsigner_response_t *ezsignsigner_response) {
    cJSON *item = cJSON_CreateObject();

    // ezsignsigner_response->pki_ezsignsigner_id
    if (!ezsignsigner_response->pki_ezsignsigner_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsignsignerID", ezsignsigner_response->pki_ezsignsigner_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignsigner_response->fki_taxassignment_id
    if (!ezsignsigner_response->fki_taxassignment_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiTaxassignmentID", ezsignsigner_response->fki_taxassignment_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignsigner_response->fki_secretquestion_id
    if(ezsignsigner_response->fki_secretquestion_id) {
    if(cJSON_AddNumberToObject(item, "fkiSecretquestionID", ezsignsigner_response->fki_secretquestion_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignsigner_response->fki_userlogintype_id
    if (!ezsignsigner_response->fki_userlogintype_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiUserlogintypeID", ezsignsigner_response->fki_userlogintype_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignsigner_response->s_userlogintype_description_x
    if (!ezsignsigner_response->s_userlogintype_description_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sUserlogintypeDescriptionX", ezsignsigner_response->s_userlogintype_description_x) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsignsigner_response_t *ezsignsigner_response_parseFromJSON(cJSON *ezsignsigner_responseJSON){

    ezsignsigner_response_t *ezsignsigner_response_local_var = NULL;

    // ezsignsigner_response->pki_ezsignsigner_id
    cJSON *pki_ezsignsigner_id = cJSON_GetObjectItemCaseSensitive(ezsignsigner_responseJSON, "pkiEzsignsignerID");
    if (cJSON_IsNull(pki_ezsignsigner_id)) {
        pki_ezsignsigner_id = NULL;
    }
    if (!pki_ezsignsigner_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsignsigner_id))
    {
    goto end; //Numeric
    }

    // ezsignsigner_response->fki_taxassignment_id
    cJSON *fki_taxassignment_id = cJSON_GetObjectItemCaseSensitive(ezsignsigner_responseJSON, "fkiTaxassignmentID");
    if (cJSON_IsNull(fki_taxassignment_id)) {
        fki_taxassignment_id = NULL;
    }
    if (!fki_taxassignment_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_taxassignment_id))
    {
    goto end; //Numeric
    }

    // ezsignsigner_response->fki_secretquestion_id
    cJSON *fki_secretquestion_id = cJSON_GetObjectItemCaseSensitive(ezsignsigner_responseJSON, "fkiSecretquestionID");
    if (cJSON_IsNull(fki_secretquestion_id)) {
        fki_secretquestion_id = NULL;
    }
    if (fki_secretquestion_id) { 
    if(!cJSON_IsNumber(fki_secretquestion_id))
    {
    goto end; //Numeric
    }
    }

    // ezsignsigner_response->fki_userlogintype_id
    cJSON *fki_userlogintype_id = cJSON_GetObjectItemCaseSensitive(ezsignsigner_responseJSON, "fkiUserlogintypeID");
    if (cJSON_IsNull(fki_userlogintype_id)) {
        fki_userlogintype_id = NULL;
    }
    if (!fki_userlogintype_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_userlogintype_id))
    {
    goto end; //Numeric
    }

    // ezsignsigner_response->s_userlogintype_description_x
    cJSON *s_userlogintype_description_x = cJSON_GetObjectItemCaseSensitive(ezsignsigner_responseJSON, "sUserlogintypeDescriptionX");
    if (cJSON_IsNull(s_userlogintype_description_x)) {
        s_userlogintype_description_x = NULL;
    }
    if (!s_userlogintype_description_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_userlogintype_description_x))
    {
    goto end; //String
    }


    ezsignsigner_response_local_var = ezsignsigner_response_create_internal (
        pki_ezsignsigner_id->valuedouble,
        fki_taxassignment_id->valuedouble,
        fki_secretquestion_id ? fki_secretquestion_id->valuedouble : 0,
        fki_userlogintype_id->valuedouble,
        strdup(s_userlogintype_description_x->valuestring)
        );

    return ezsignsigner_response_local_var;
end:
    return NULL;

}
