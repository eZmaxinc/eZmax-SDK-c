#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignsigner_response.h"



ezsignsigner_response_t *ezsignsigner_response_create(
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

    return ezsignsigner_response_local_var;
}


void ezsignsigner_response_free(ezsignsigner_response_t *ezsignsigner_response) {
    if(NULL == ezsignsigner_response){
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
    if (!pki_ezsignsigner_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsignsigner_id))
    {
    goto end; //Numeric
    }

    // ezsignsigner_response->fki_taxassignment_id
    cJSON *fki_taxassignment_id = cJSON_GetObjectItemCaseSensitive(ezsignsigner_responseJSON, "fkiTaxassignmentID");
    if (!fki_taxassignment_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_taxassignment_id))
    {
    goto end; //Numeric
    }

    // ezsignsigner_response->fki_secretquestion_id
    cJSON *fki_secretquestion_id = cJSON_GetObjectItemCaseSensitive(ezsignsigner_responseJSON, "fkiSecretquestionID");
    if (fki_secretquestion_id) { 
    if(!cJSON_IsNumber(fki_secretquestion_id))
    {
    goto end; //Numeric
    }
    }

    // ezsignsigner_response->fki_userlogintype_id
    cJSON *fki_userlogintype_id = cJSON_GetObjectItemCaseSensitive(ezsignsigner_responseJSON, "fkiUserlogintypeID");
    if (!fki_userlogintype_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_userlogintype_id))
    {
    goto end; //Numeric
    }

    // ezsignsigner_response->s_userlogintype_description_x
    cJSON *s_userlogintype_description_x = cJSON_GetObjectItemCaseSensitive(ezsignsigner_responseJSON, "sUserlogintypeDescriptionX");
    if (!s_userlogintype_description_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_userlogintype_description_x))
    {
    goto end; //String
    }


    ezsignsigner_response_local_var = ezsignsigner_response_create (
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
