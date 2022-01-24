#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignsigner_response.h"


char* e_ezsignsigner_logintypeezsignsigner_response_ToString(ezmax_api_definition_ezsignsigner_response_EEZSIGNSIGNERLOGINTYPE_e e_ezsignsigner_logintype) {
    char* e_ezsignsigner_logintypeArray[] =  { "NULL", "Password", "PasswordPhone", "PasswordQuestion", "InPersonPhone", "InPerson" };
	return e_ezsignsigner_logintypeArray[e_ezsignsigner_logintype];
}

ezmax_api_definition_ezsignsigner_response_EEZSIGNSIGNERLOGINTYPE_e e_ezsignsigner_logintypeezsignsigner_response_FromString(char* e_ezsignsigner_logintype){
    int stringToReturn = 0;
    char *e_ezsignsigner_logintypeArray[] =  { "NULL", "Password", "PasswordPhone", "PasswordQuestion", "InPersonPhone", "InPerson" };
    size_t sizeofArray = sizeof(e_ezsignsigner_logintypeArray) / sizeof(e_ezsignsigner_logintypeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_ezsignsigner_logintype, e_ezsignsigner_logintypeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

ezsignsigner_response_t *ezsignsigner_response_create(
    int fki_taxassignment_id,
    int fki_secretquestion_id,
    ezmax_api_definition_ezsignsigner_response_EEZSIGNSIGNERLOGINTYPE_e e_ezsignsigner_logintype,
    char *s_ezsignsigner_secretanswer
    ) {
    ezsignsigner_response_t *ezsignsigner_response_local_var = malloc(sizeof(ezsignsigner_response_t));
    if (!ezsignsigner_response_local_var) {
        return NULL;
    }
    ezsignsigner_response_local_var->fki_taxassignment_id = fki_taxassignment_id;
    ezsignsigner_response_local_var->fki_secretquestion_id = fki_secretquestion_id;
    ezsignsigner_response_local_var->e_ezsignsigner_logintype = e_ezsignsigner_logintype;
    ezsignsigner_response_local_var->s_ezsignsigner_secretanswer = s_ezsignsigner_secretanswer;

    return ezsignsigner_response_local_var;
}


void ezsignsigner_response_free(ezsignsigner_response_t *ezsignsigner_response) {
    if(NULL == ezsignsigner_response){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignsigner_response->s_ezsignsigner_secretanswer) {
        free(ezsignsigner_response->s_ezsignsigner_secretanswer);
        ezsignsigner_response->s_ezsignsigner_secretanswer = NULL;
    }
    free(ezsignsigner_response);
}

cJSON *ezsignsigner_response_convertToJSON(ezsignsigner_response_t *ezsignsigner_response) {
    cJSON *item = cJSON_CreateObject();

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


    // ezsignsigner_response->e_ezsignsigner_logintype
    
    if(cJSON_AddStringToObject(item, "eEzsignsignerLogintype", e_ezsignsigner_logintypeezsignsigner_response_ToString(ezsignsigner_response->e_ezsignsigner_logintype)) == NULL)
    {
    goto fail; //Enum
    }


    // ezsignsigner_response->s_ezsignsigner_secretanswer
    if(ezsignsigner_response->s_ezsignsigner_secretanswer) { 
    if(cJSON_AddStringToObject(item, "sEzsignsignerSecretanswer", ezsignsigner_response->s_ezsignsigner_secretanswer) == NULL) {
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

ezsignsigner_response_t *ezsignsigner_response_parseFromJSON(cJSON *ezsignsigner_responseJSON){

    ezsignsigner_response_t *ezsignsigner_response_local_var = NULL;

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

    // ezsignsigner_response->e_ezsignsigner_logintype
    cJSON *e_ezsignsigner_logintype = cJSON_GetObjectItemCaseSensitive(ezsignsigner_responseJSON, "eEzsignsignerLogintype");
    if (!e_ezsignsigner_logintype) {
        goto end;
    }

    ezmax_api_definition_ezsignsigner_response_EEZSIGNSIGNERLOGINTYPE_e e_ezsignsigner_logintypeVariable;
    
    if(!cJSON_IsString(e_ezsignsigner_logintype))
    {
    goto end; //Enum
    }
    e_ezsignsigner_logintypeVariable = e_ezsignsigner_logintypeezsignsigner_response_FromString(e_ezsignsigner_logintype->valuestring);

    // ezsignsigner_response->s_ezsignsigner_secretanswer
    cJSON *s_ezsignsigner_secretanswer = cJSON_GetObjectItemCaseSensitive(ezsignsigner_responseJSON, "sEzsignsignerSecretanswer");
    if (s_ezsignsigner_secretanswer) { 
    if(!cJSON_IsString(s_ezsignsigner_secretanswer))
    {
    goto end; //String
    }
    }


    ezsignsigner_response_local_var = ezsignsigner_response_create (
        fki_taxassignment_id->valuedouble,
        fki_secretquestion_id ? fki_secretquestion_id->valuedouble : 0,
        e_ezsignsigner_logintypeVariable,
        s_ezsignsigner_secretanswer ? strdup(s_ezsignsigner_secretanswer->valuestring) : NULL
        );

    return ezsignsigner_response_local_var;
end:
    return NULL;

}
